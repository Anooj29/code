#include <iostream>
#include <string>

using namespace std;

class Song {
public:
    string title;
    Song* prev;
    Song* next;
    Song(string t) : title(t), prev(nullptr), next(nullptr) {}
};

class Playlist {
private:
    Song* head;
    Song* tail;
    Song* current;

public:
    Playlist() : head(nullptr), tail(nullptr), current(nullptr) {}

    void addSong(const string& title) {
        Song* newSong = new Song(title);
        if (!head) {
            head = tail = current = newSong;
        } else {
            tail->next = newSong;
            newSong->prev = tail;
            tail = newSong;
        }
        cout << "Added: " << title << endl;
    }

    void removeSong(const string& title) {
        Song* temp = head;
        while (temp) {
            if (temp->title == title) {
                if (temp == head) {
                    head = head->next;
                    if (head) head->prev = nullptr;
                } else if (temp == tail) {
                    tail = tail->prev;
                    tail->next = nullptr;
                } else {
                    temp->prev->next = temp->next;
                    temp->next->prev = temp->prev;
                }
                delete temp;
                cout << "Removed: " << title << endl;
                return;
            }
            temp = temp->next;
        }
        cout << "Song not found!" << endl;
    }

    void moveSong(const string& title, int newPos) {
        Song* temp = head;
        int pos = 1;
        while (temp && temp->title != title) {
            temp = temp->next;
            pos++;
        }
        if (!temp) {
            cout << "Song not found!" << endl;
            return;
        }
        if (temp == head) {
            head = head->next;
            if (head) head->prev = nullptr;
        } else if (temp == tail) {
            tail = tail->prev;
            tail->next = nullptr;
        } else {
            temp->prev->next = temp->next;
            temp->next->prev = temp->prev;
        }
        Song* target = head;
        for (int i = 1; i < newPos - 1 && target->next; i++) {
            target = target->next;
        }
        temp->next = target->next;
        if (target->next) target->next->prev = temp;
        target->next = temp;
        temp->prev = target;
        if (!temp->next) tail = temp;
        cout << "Moved: " << title << " to position " << newPos << endl;
    }

    void playNext() {
        if (current && current->next) {
            current = current->next;
            cout << "Now playing: " << current->title << endl;
        } else {
            cout << "End of playlist!" << endl;
        }
    }

    void playPrev() {
        if (current && current->prev) {
            current = current->prev;
            cout << "Now playing: " << current->title << endl;
        } else {
            cout << "Start of playlist!" << endl;
        }
    }

    void display() const {
        if (!head) {
            cout << "Playlist is empty!" << endl;
            return;
        }
        Song* temp = head;
        while (temp) {
            cout << temp->title << " <-> ";
            temp = temp->next;
        }
        cout << "END" << endl;
    }
};

int main() {
    Playlist playlist;
    playlist.addSong("Song A");
    playlist.addSong("Song B");
    playlist.addSong("Song C");
    playlist.addSong("Song D");
    playlist.display();
    playlist.playNext();
    playlist.playNext();
    playlist.playPrev();
    playlist.moveSong("Song B", 3);
    playlist.display();
    playlist.removeSong("Song C");
    playlist.display();
    return 0;
}
