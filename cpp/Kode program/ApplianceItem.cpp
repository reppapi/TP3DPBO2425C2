#pragma once
#include <iostream>
#include "HouseOldItem.cpp"
#include "BrandInfo.cpp"
#include "PowerTypeInfo.cpp"
#include "WarrantyInfo.cpp"
using namespace std;

class ApplianceItem : public HouseOldItem, public BrandInfo {
private:
    string powerType;
    string warranty;
    PowerTypeInfo powerInfo;    // Komposisi dengan PowerTypeInfo
    WarrantyInfo warrantyInfo;  // Komposisi dengan WarrantyInfo
public:
    void setPowerType(string pt) { powerType = pt; }  // Set tipe daya
    string getPowerType() { return powerType; }       // Get tipe daya

    void setWarranty(string w) { warranty = w; }  // Set garansi
    string getWarranty() { return warranty; }     // Get garansi

    void setPowerTypeInfo(PowerTypeInfo pi) { powerInfo = pi; }  // Set info daya
    PowerTypeInfo getPowerTypeInfo() { return powerInfo; }       // Get info daya

    void setWarrantyInfo(WarrantyInfo wi) { warrantyInfo = wi; }  // Set info garansi
    WarrantyInfo getWarrantyInfo() { return warrantyInfo; }       // Get info garansi

    void printAppliance() {  // Print info appliance lengkap
        cout << "=== Appliance Item ===" << endl;
        printItem();      // Dari HouseOldItem
        printBrand();     // Dari BrandInfo
        cout << "Power Type: " << powerType << endl;
        cout << "Warranty: " << warranty << endl;
    }
};