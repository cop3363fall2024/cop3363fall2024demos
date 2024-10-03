#include <iostream>

using namespace std;

int prompt();
double harmonic(int k);

int main() {
    int k = prompt();
    //cout << k << endl;
    //cout << harmonic(k) << endl;
    //
    double sum = 0;
    for (int i=1; i<=k; i++) {
        sum += harmonic(i);
    }
    cout << "pi approx eq: " << sum*4 << endl;

    return 0;
}

double harmonic(int k) {
    double nom = 1;

    if (k%2 == 0) {
        nom = -1;
    }

    double den = 2*k - 1;
    return nom/den;
}

int prompt() {
    int k;
    while (true) {
        cout << "Enter k: ";
        cin >> k;

        if (k < 1) {
            cout << "Err!" << endl;
            continue;
        } else {
            break;
        }
    }
    return k;
}
