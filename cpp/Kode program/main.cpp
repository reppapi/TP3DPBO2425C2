#include <iostream>
#include <iomanip>  
#include "FurnitureItem.cpp"
#include "ApplianceItem.cpp"
#include "WarrantyInfo.cpp"
#include "RoomInfo.cpp"
using namespace std;

int main() {
    // Definisi dan inisialisasi objek (tidak ada perubahan di sini)
    FurnitureItem sofa;
    sofa.setItem("Sofa");
    sofa.setPrice(2500000);
    sofa.setRoom("Living Room");
    sofa.setBrandName("IKEA");
    sofa.setOriginCountry("Sweden");
    sofa.setEstablishedYear(1943);
    sofa.setMaterial("Wood");
    sofa.setDurability("10 years");
    
    MaterialInfo mat;
    mat.setType("Leather");
    mat.setQualityGrade("Premium");
    sofa.setMaterialInfo(mat);

    ApplianceItem wm;
    wm.setItem("Washing Machine");
    wm.setPrice(5000000);
    wm.setRoom("Laundry Room");
    wm.setBrandName("LG");
    wm.setOriginCountry("South Korea");
    wm.setEstablishedYear(1958);
    wm.setPowerType("Electricity");
    wm.setWarranty("3 years");

    PowerTypeInfo pi;
    pi.setSourceType("Solar");
    pi.setWattage(1500);
    wm.setPowerTypeInfo(pi);

    WarrantyInfo wi;
    wi.setDuration("5 thn");
    wi.setCoverageDetails("Full service and replacement");
    wm.setWarrantyInfo(wi);

    RoomInfo ri;
    ri.setRoomName("Kitchen");
    ri.setFloorLevel(1);

    // Menampilkan Informasi Furniture
    cout << "========================================\n";
    cout << "          FURNITURE DETAILS\n";
    cout << "========================================\n";
    sofa.printFurniture();
    cout << endl; 
    sofa.getMaterialInfo().printMaterial();
    cout << "========================================\n" << endl;

    // Menampilkan Informasi Appliance
    cout << "========================================\n";
    cout << "           APPLIANCE DETAILS\n";
    cout << "========================================\n";
    wm.printAppliance();
    cout << endl; // 
    wm.getPowerTypeInfo().printPowerSource();
    cout << endl; 
    wm.getWarrantyInfo().printWarranty();
    cout << "========================================\n" << endl;

    // Menampilkan Informasi Ruangan
    cout << "========================================\n";
    cout << "               ROOM INFO\n";
    cout << "========================================\n";
    ri.printRoom();
    cout << "========================================\n" << endl;

    return 0;
}