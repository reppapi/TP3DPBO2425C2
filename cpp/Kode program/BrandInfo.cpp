#pragma once
#include <iostream>
#include <string>
using namespace std;

class BrandInfo {
private:
    string brandName;
    string originCountry;
    int establishedYear;
public:
    // Setter dan getter informasi merek
    void setBrandName(string bn) { brandName = bn; }
    string getBrandName() { return brandName; }

    void setOriginCountry(string oc) { originCountry = oc; }
    string getOriginCountry() { return originCountry; }

    void setEstablishedYear(int ey) { establishedYear = ey; }
    int getEstablishedYear() { return establishedYear; }

    // Menampilkan informasi merek
    void printBrand() {
        cout << "Brand: " << brandName << endl;
        cout << "Origin Country: " << originCountry << endl;
        cout << "Established Year: " << establishedYear << endl;
    }
};