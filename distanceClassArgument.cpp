
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
    static int count;       // static is only created when it is encounters, 1 member per class, it is shared with everyone

public:

    Distance(): feet(0), inches(0){count++;};   // constructor with no arguments
    Distance(int ft, float in): feet(ft), inches(in){count++;};                     //Constructor with 2 arguments

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
             << " and Inches is " << inches << endl;

    }

    int getCount() {
        return count;
    }

    void showCount() {

        cout << "Count is = " << count << endl;

    }

    void addDistance (Distance d1, Distance d2);
    Distance addDistanceToMe(Distance d1);

};
int Distance::count = 0;
// Prototypes

// Main Program Program

int main() {

    Distance d1, d2(8, 2), d3(2, 4), d4;

    cout << "d1 = ";
    d1.showdata();

    cout << "Count is " << d1.getCount();

    cout << "\nd2 = ";
    d2.showdata();

    cout << "Count is " << d1.getCount();

    cout << "\nd3 = ";
    d3.showdata();


    d4.addDistance(d2, d3);

    cout << "\nd4 = ";
    d4.showdata();

    d4.addDistanceToMe(d2);

    cout << "\nnew d4 = ";
    d4.showdata();


    return 0;
}

// Function Definitions

// This belongs only to the class Distance, a method for members only
// TEMPLATE: CLASSNAME::Function_name()
void Distance::addDistance (Distance d1, Distance d2) {

    inches = d1.inches + d2.inches;  //adding inches
    feet = 0;

    if(inches >= 12){
        inches -= 12.0;            // check for extra foot
        feet++;
    }

    feet += d1.feet + d2.feet;     // add feet

}

Distance Distance::addDistanceToMe(Distance d1) {

    Distance temp;      //initial values 0, 0
    temp.inches = inches + d1.inches;

    if(temp.inches >= 12) {
        temp.inches -= 12.0;
        temp.feet += 1;
    }

    temp.feet += feet + d1.feet;

    return temp;
}