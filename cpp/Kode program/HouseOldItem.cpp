#pragma once
#include <iostream>
#include <string>
#include <iomanip>  
using namespace std;

class HouseOldItem {
private:
    string item;
    double price;
    string room;
public:
    void setItem(string i) { item = i; }
    string getItem() { return item; }

    void setPrice(double p) { price = p; }
    double getPrice() { return price; }

    void setRoom(string r) { room = r; }
    string getRoom() { return room; }

    void printItem() {
        cout << "Item: " << item << endl;
        cout << "Price: " << fixed << setprecision(0) << price << endl;  // Format tanpa desimal
        cout << "Room: " << room << endl;
    }
};