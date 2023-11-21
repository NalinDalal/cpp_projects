#include <iostream>
#include <string>
#include <vector>
#include <unordered_map>

using namespace std;

/*
string GetName()
{
    return "Nalin";
}
*/

class Device {};

char* GetName()
{
    return "Nalin";
}

class DeviceManager
{
    private:
        unordered_map<string, vector<Device*>> m_Devices;
    public:
        const unordered_map<string, vector<Device*>>& GetDevices() const
        {
            return m_Devices;
        }    
};

int main()
{
    /*
    string name=GetName();
    auto b = name;
    //auto a = 5;
    //auto a is always fixed data maybe changed later

    cout<<b<<endl;
    */
    std::vector<std::string> strings;
    strings.push_back("Apple");
    strings.push_back("Orange");
    strings.push_back("Banana");

    for(vector<string>::iterator it=strings.begin();
    it !=strings.end(); it++)
    {
        cout<< *it <<endl;
    }

   // using DeviceMap=unordered_map<string, vector<Device*>>;
   // typedef unordered_map<string, vector<Device*>> DeviceMap;
    DeviceManager dm;
    //dm.GetDevices();

    const auto& devices = dm.GetDevices();

    cin.get();
}