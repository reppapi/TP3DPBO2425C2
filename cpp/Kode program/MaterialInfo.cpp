#pragma once
#include <iostream>
#include <string>
using namespace std;

class MaterialInfo {
private:
    string type;
    string qualityGrade;
public:
    // Setter dan getter informasi material
    void setType(string t) { type = t; }
    string getType() { return type; }

    void setQualityGrade(string q) { qualityGrade = q; }
    string getQualityGrade() { return qualityGrade; }

    // Menampilkan detail material
    void printMaterial() {
        cout << "--- Material Info ---" << endl;
        cout << "Type: " << type << endl;
        cout << "Quality Grade: " << qualityGrade << endl;
    }
};