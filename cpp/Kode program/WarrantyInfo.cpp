#pragma once
#include <iostream>
#include <string>
using namespace std;

class WarrantyInfo {
private:
    string duration;           // Durasi garansi (string untuk fleksibel)
    string coverageDetails;    // Detail cakupan garansi
public:
    void setDuration(string d) { duration = d; }   // Set durasi garansi
    string getDuration() { return duration; }      // Get durasi garansi

    void setCoverageDetails(string c) { coverageDetails = c; }  // Set detail cakupan
    string getCoverageDetails() { return coverageDetails; }     // Get detail cakupan

    void printWarranty() {  // Print info garansi
        cout << "--- Warranty Info ---" << endl;
        cout << "Duration: " << duration << endl;
        cout << "Coverage Details: " << coverageDetails << endl;
    }
};