#include <iostream>
#include <string>
#include <vector>
#include <sstream>
#include <cstring>
#include <arpa/inet.h>

// Function to split a string into a vector of substrings based on a delimiter
std::vector<std::string> splitString(const std::string& str, char delimiter) {
    std::vector<std::string> tokens;
    std::stringstream ss(str);
    std::string token;
    while (std::getline(ss, token, delimiter)) {
        tokens.push_back(token);
    }
    return tokens;
}

// Function to convert a MAC address string to a byte array
std::vector<uint8_t> macAddressToBytes(const std::string& macAddress) {
    std::vector<std::string> tokens = splitString(macAddress, ':');
    std::vector<uint8_t> macBytes;
    for (const auto& token : tokens) {
        macBytes.push_back(static_cast<uint8_t>(std::stoi(token, nullptr, 16)));
    }
    return macBytes;
}

// Function to send a Wake-on-LAN magic packet
void sendWakeOnLAN(const std::string& macAddress) {
    std::vector<uint8_t> macBytes = macAddressToBytes(macAddress);

    // Create the magic packet
    std::vector<uint8_t> magicPacket;
    magicPacket.reserve(102);

    // Add 6 bytes with value 0xFF as the synchronization stream
    magicPacket.insert(magicPacket.end(), 6, 0xFF);

    // Add 16 repetitions of the MAC address
    for (int i = 0; i < 16; ++i) {
        magicPacket.insert(magicPacket.end(), macBytes.begin(), macBytes.end());
    }

    // Create a socket for sending the magic packet
    int socketDescriptor = socket(AF_INET, SOCK_DGRAM, IPPROTO_UDP);
    if (socketDescriptor == -1) {
        std::cerr << "Failed to create socket." << std::endl;
        return;
    }

    // Set the broadcast option for the socket
    int broadcastOption = 1;
    if (setsockopt(socketDescriptor, SOL_SOCKET, SO_BROADCAST, &broadcastOption, sizeof(broadcastOption)) == -1) {
        std::cerr << "Failed to set socket options." << std::endl;
        close(socketDescriptor);
        return;
    }

    // Specify the destination address for the magic packet (the broadcast address)
    sockaddr_in broadcastAddress{};
    std::memset(&broadcastAddress, 0, sizeof(broadcastAddress));
    broadcastAddress.sin_family = AF_INET;
    broadcastAddress.sin_port = htons(9);  // Wake-on-LAN port
    broadcastAddress.sin_addr.s_addr = htonl(INADDR_BROADCAST);

    // Send the magic packet
    if (sendto(socketDescriptor, magicPacket.data(), magicPacket.size(), 0,
               reinterpret_cast<sockaddr*>(&broadcastAddress), sizeof(broadcastAddress)) == -1) {
        std::cerr << "Failed to send Wake-on-LAN packet." << std::endl;
    } else {
        std::cout << "Wake-on-LAN packet sent successfully." << std::endl;
    }

    close(socketDescriptor);
}

int main() {
    std::string macAddress;

    std::cout << "Enter the MAC address of the target PC (format: XX:XX:XX:XX:XX:XX): ";
    std::cin >> macAddress;

    sendWakeOnLAN(macAddress);

   
