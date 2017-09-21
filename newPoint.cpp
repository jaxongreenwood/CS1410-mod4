
// File: newPoint
// Created by Jaxon Greenwood on 9/21/2017 for CS1410.
// Copyright (c) 2017 WSU
//
#include <iostream>
using namespace std;

// Constants
class Point {
private:
    float x;
    float y;

public:
    Point() : x(0), y(0){}

    void showPoint() {
        cout << x << "\n" << y;
    }

    void updatePoint() {
        cout << "\nEnter new x: ";
        cin >> x;
        cout << "\nEnter new y: ";
        cin >> y;
    }
};


// Prototypes

// Main Program Program

int main(void) {

    Point p1;

    p1.showPoint();

    p1.updatePoint();

    p1.showPoint();

    return 0;
}

// Function Definitions