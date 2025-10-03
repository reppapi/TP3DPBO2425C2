#pragma once
#include <iostream>
#include <string>
using namespace std;

class RoomInfo {
private:
    string roomName;
    int floorLevel;
public:
    void setRoomName(string rn) { roomName = rn; }  // Set nama ruangan
    string getRoomName() { return roomName; }       // Get nama ruangan

    void setFloorLevel(int fl) { floorLevel = fl; }  // Set lantai
    int getFloorLevel() { return floorLevel; }       // Get lantai

    void printRoom() {  // Print info ruangan
        cout << "=== Room Info ===" << endl;
        cout << "Room Name: " << roomName << endl;
        cout << "Floor Level: " << floorLevel << endl;
    }
};