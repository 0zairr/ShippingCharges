// ShippingCharges.cpp : This file contains the 'main' function. Program execution begins and ends there.
/*
File name: ShippingCharges
Programmer: Ozair Ghaissi
Date: 10/11/2024
*/

#include <iostream>
#include <iomanip>
using namespace std;

int main() {
    double weight, distance, rate;

    // Input validation for weight
    cout << "Enter the weight of the package (in kg): ";
    cin >> weight;
    if (weight <= 0 || weight > 20) {
        cout << "Invalid weight. Weight must be between 0 and 20 kg." << endl;
        return 1;
    }

    // Input validation for distance
    cout << "Enter the distance to be shipped (in miles): ";
    cin >> distance;
    if (distance < 10 || distance > 3000) {
        cout << "Invalid distance. Distance must be between 10 and 3000 miles." << endl;
        return 1;
    }

    // Determine rate per 500 miles based on weight
    if (weight <= 2) {
        rate = 1.10;
    }
    else if (weight <= 6) {
        rate = 2.20;
    }
    else if (weight <= 10) {
        rate = 3.70;
    }
    else {
        rate = 4.80;
    }

    // Calculate total charges
    int segments = (distance + 499) / 500; // Round up to the nearest 500 miles
    double charges = rate * segments;

    // Display result
    cout << fixed << setprecision(2);
    cout << "Shipping charges: $" << charges << endl;

    return 0;
}

