#pragma once
#include <iostream>
#include "HouseOldItem.cpp"
#include "BrandInfo.cpp"
#include "MaterialInfo.cpp"
using namespace std;

class FurnitureItem : public HouseOldItem, public BrandInfo {
private:
    string material;
    string durability;
    MaterialInfo materialInfo;  // Komposisi dengan MaterialInfo
public:
    void setMaterial(string m) { material = m; }  // Set material
    string getMaterial() { return material; }     // Get material

    void setDurability(string d) { durability = d; }  // Set daya tahan
    string getDurability() { return durability; }     // Get daya tahan

    void setMaterialInfo(MaterialInfo mi) { materialInfo = mi; }  // Set info material
    MaterialInfo getMaterialInfo() { return materialInfo; }       // Get info material

    void printFurniture() {  // Print info furniture lengkap
        cout << "=== Furniture Item ===" << endl;
        printItem();      // Dari HouseOldItem
        printBrand();     // Dari BrandInfo
        cout << "Material: " << material << endl;
        cout << "Durability: " << durability << endl;
    }
};