#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;

const float E = exp(1.0);
const int LIMIT = 20;

int main() {

    int numberOfDecimals = 0;

    cout << "Enter how many decimal places of e to generate... (up to 20) > ";

    while (cin >> numberOfDecimals) {

        if (numberOfDecimals <= LIMIT) {

            cout << endl;

            numberOfDecimals++;

            cout << "e to " << numberOfDecimals - 1 << " decimal places: " << setprecision(numberOfDecimals) << E << endl;

            return 0;

        } else {

            cout << "The limit is " << LIMIT << " decimal places. Try again. " << endl;
            cout << "> ";

        }

    }

    return 0;

}
