#include <iostream>
using namespace std;

class smallObj {    // Define class

private:
    int somedata;   //Class data

public:
    void setdata (int d) {  // Member function to set the data

        somedata = d;
    }

    void showdata () {      // Member function to get the data

        cout << "Data is " << somedata << endl;
    }
};

int main() {

    smallObj s1; // Create instances(member) of the class

    s1.setdata(123);

    s1.showdata();

    return 0;

}