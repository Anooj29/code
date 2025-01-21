#include <iostream>
#include <string>
#include <vector>
#include <unordered_map>
#include <queue>

class User {
    std::string username;

public:
    User(const std::string &username) : username(username) {}

    std::string getUsername() const { return username; }
};

class ChatRoom {
    std::string roomName;
    std::unordered_map<std::string, User> users;
    std::queue<std::string> messageQueue;

public:
    ChatRoom(const std::string &name) : roomName(name) {}

    std::string getName() const { return roomName; }

    void join(const User &user) {
        if (users.find(user.getUsername()) == users.end()) {
            users[user.getUsername()] = user;
            broadcastMessage("System", user.getUsername() + " has joined the room.");
        } else {
            std::cout << "User " << user.getUsername() << " is already in the room.\n";
        }
    }

    void leave(const std::string &username) {
        if (users.find(username) != users.end()) {
            users.erase(username);
            broadcastMessage("System", username + " has left the room.");
        } else {
            std::cout << "User " << username << " is not in the room.\n";
        }
    }

    void broadcastMessage(const std::string &sender, const std::string &message) {
        std::string formattedMessage = sender + ": " + message;
        messageQueue.push(formattedMessage);
    }

    void showMessages() {
        while (!messageQueue.empty()) {
            std::cout << messageQueue.front() << '\n';
            messageQueue.pop();
        }
    }
};

class ChatServer {
    std::unordered_map<std::string, ChatRoom> chatRooms;

public:
    void createRoom(const std::string &roomName) {
        if (chatRooms.find(roomName) == chatRooms.end()) {
            chatRooms[roomName] = ChatRoom(roomName);
            std::cout << "Chat room '" << roomName << "' created.\n";
        } else {
            std::cout << "Chat room '" << roomName << "' already exists.\n";
        }
    }

    void listRooms() {
        std::cout << "Available Chat Rooms:\n";
        for (const auto &pair : chatRooms) {
            std::cout << "- " << pair.first << '\n';
        }
    }

    ChatRoom *getRoom(const std::string &roomName) {
        if (chatRooms.find(roomName) != chatRooms.end()) {
            return &chatRooms[roomName];
        }
        return nullptr;
    }
};

int main() {
    ChatServer server;
    int choice;
    User *currentUser = nullptr;
    ChatRoom *currentRoom = nullptr;

    do {
        std::cout << "\n1. Register User\n2. Create Chat Room\n3. List Chat Rooms\n4. Join Chat Room\n5. Send Message\n6. Leave Room\n7. View Room Messages\n8. Exit\nChoice: ";
        std::cin >> choice;
        std::cin.ignore();

        if (choice == 1) {
            std::string username;
            std::cout << "Enter username: ";
            std::getline(std::cin, username);
            currentUser = new User(username);
            std::cout << "User registered as: " << username << '\n';
        } else if (choice == 2) {
            std::string roomName;
            std::cout << "Enter chat room name: ";
            std::getline(std::cin, roomName);
            server.createRoom(roomName);
        } else if (choice == 3) {
            server.listRooms();
        } else if (choice == 4) {
            std::string roomName;
            std::cout << "Enter chat room name to join: ";
            std::getline(std::cin, roomName);
            ChatRoom *room = server.getRoom(roomName);
            if (room && currentUser) {
                currentRoom = room;
                room->join(*currentUser);
            } else {
                std::cout << "Room not found or no user registered.\n";
            }
        } else if (choice == 5) {
            if (currentRoom && currentUser) {
                std::string message;
                std::cout << "Enter message: ";
                std::getline(std::cin, message);
                currentRoom->broadcastMessage(currentUser->getUsername(), message);
            } else {
                std::cout << "Join a chat room first.\n";
            }
        } else if (choice == 6) {
            if (currentRoom && currentUser) {
                currentRoom->leave(currentUser->getUsername());
                currentRoom = nullptr;
            } else {
                std::cout << "No active chat room.\n";
            }
        } else if (choice == 7) {
            if (currentRoom) {
                currentRoom->showMessages();
            } else {
                std::cout << "Join a chat room first.\n";
            }
        }
    } while (choice != 8);

    delete currentUser;
    return 0;
}
