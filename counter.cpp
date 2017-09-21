
// File: counter
// Created by Jaxon Greenwood on 9/21/2017 for CS1410.
// Copyright (c) 2017 WSU
//
#include <iostream>
using namespace std;

// Constants
class counter {
private:
    unsigned int count;

public:
    counter(): count(0) {}
    void incCount() {
        count++;
    }

    void showCount() {
        cout << count;
    }

};

// Prototypes

// Main Program Program

int main() {

    counter c1;

    c1.showCount();

    c1.incCount();

    cout << "\n";

    c1.showCount();

    return 0;
}

// Function Definitions