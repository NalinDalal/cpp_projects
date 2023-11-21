#include <iostream>
#include <string>
#include <vector>

// Class representing a song
class Song {
public:
    std::string title;
    std::string artist;
    std::string album;

    Song(const std::string& title, const std::string& artist, const std::string& album)
        : title(title), artist(artist), album(album) {}
};

// Class representing the music player
class MusicPlayer {
private:
    std::vector<Song> playlist;
    int currentSongIndex;

public:
    MusicPlayer() : currentSongIndex(0) {}

    void addSong(const Song& song) {
        playlist.push_back(song);
    }

    void play() {
        if (playlist.empty()) {
            std::cout << "No songs in the playlist." << std::endl;
            return;
        }

        Song currentSong = playlist[currentSongIndex];
        std::cout << "Playing: " << currentSong.title << " - " << currentSong.artist << " (" << currentSong.album << ")" << std::endl;
    }

    void next() {
        if (playlist.empty()) {
            std::cout << "No songs in the playlist." << std::endl;
            return;
        }

        currentSongIndex = (currentSongIndex + 1) % playlist.size();
        play();
    }

    void previous() {
        if (playlist.empty()) {
            std::cout << "No songs in the playlist." << std::endl;
            return;
        }

        currentSongIndex = (currentSongIndex - 1 + playlist.size()) % playlist.size();
        play();
    }

    void showPlaylist() {
        if (playlist.empty()) {
            std::cout << "No songs in the playlist." << std::endl;
            return;
        }

        std::cout << "Playlist:" << std::endl;
        for (const Song& song : playlist) {
            std::cout << "- " << song.title << " - " << song.artist << " (" << song.album << ")" << std::endl;
        }
    }
};

int main() {
    MusicPlayer player;

    // Adding songs to the playlist
    player.addSong(Song("Song 1", "Artist 1", "Album 1"));
    player.addSong(Song("Song 2", "Artist 2", "Album 2"));
    player.addSong(Song("Song 3", "Artist 3", "Album 3"));

    // Playing songs
    player.play();
    player.next();
    player.previous();

    // Showing the playlist
    player.showPlaylist();

    return 0;
}
