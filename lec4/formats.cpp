#include <iostream>
#include <iomanip>

using namespace std;

int main() {
    
    double x = 4.544, y = 123.666666666666666, z = 5.0;
    cout << x << endl;
    cout << y << endl;
    cout << z << endl;

    // cout << "---------------------" << endl;
    // cout.setf(ios::fixed);
    // cout << x << endl;
    // cout << y << endl;
    // cout << z << endl;

    // cout << "---------------------" << endl;
    // cout.precision(2);
    // cout << x << endl;
    // cout << y << endl;
    // cout << z << endl;

    cout << "---------------------" << endl;
    cout.setf(ios::scientific);
    cout << x << endl;
    cout << y << endl;
    cout << z << endl;

    return 0;
}