#include <iostream>
#include <cmath>
#include <iomanip>

using namespace std;

int main() {
    double value, apr, down;
    int num_pay;

    cout << "Value of the car you want to purchase: ";
    cin >> value;
    cout << "Your down payment: ";
    cin >> down;
    cout << "APR of your loan (percentage):";
    cin >> apr;
    cout << "Length of your loan term (in month): ";
    cin >> num_pay; 

    double principle = value - down;
    double r = 0.01*apr/12;

    double nom = principle * r * pow(1+r, num_pay);
    double den = pow(1+r, num_pay) - 1;

    double payments = nom/den;
    double total = payments*num_pay + down;
    cout << fixed << setprecision(2);
    cout << "You monthly payment is " << payments << endl;
    cout << "Total payment (include down payment) of this car is " << total << endl;

    return 0;
}
