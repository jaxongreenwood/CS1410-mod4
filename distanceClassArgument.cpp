
// File: distanceClass
// Created by Jaxon Greenwood on 9/21/2017 for CS1410.
// Copyright (c) 2017 WSU
//
#include <iostream>
using namespace std;

// Constants
class Distance {
private:
    int feet;
    float inches;

public:
    Distance(): feet(0), inches(0){/*constructer data is always empty*/}; // constructor with no arguments
    void setdata (int f, float i) {  // Member function to set the data

        feet = f;
        inches = i;

    }

    void getdata () {

        cout << "Please enter feet and inches" << endl;
        cin >> feet;
        cin >> inches;

    }

    void showdata () {      // Member function to get the data

        cout << "Feet is " << feet
             << "\nInches is " << inches << endl;

    }

    void addDistance (Distance d1, Distance d2);


};

// Prototypes

// Main Program Program

int main() {

    Distance d1, d2;



    d1.setdata(6, 5.5);

    d1.showdata();


    d2.getdata();

    d2.showdata();
    return 0;
}

// Function Definitions

void addDistance (Distance d1, Distance d2) {

}