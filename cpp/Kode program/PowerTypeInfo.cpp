#pragma once
#include <iostream>
#include <string>
using namespace std;

class PowerTypeInfo {
private:
    string sourceType;
    int wattage;
public:
    void setSourceType(string st) { sourceType = st; }  // Set tipe sumber daya
    string getSourceType() { return sourceType; }       // Get tipe sumber daya

    void setWattage(int w) { wattage = w; }  // Set daya (watt)
    int getWattage() { return wattage; }     // Get daya (watt)

    void printPowerSource() {  // Print info sumber daya
        cout << "--- Power Type Info ---" << endl;
        cout << "Source Type: " << sourceType << endl;
        cout << "Wattage: " << wattage << " W" << endl;
    }
};