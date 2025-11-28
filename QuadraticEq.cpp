#include <iostream>
#include <cmath>
using namespace std;

void findRoots(double a, double b, double c) {
    double discriminant = (b * b) - (4 * a * c);

    if (discriminant > 0) {
        double root1 = (-b + sqrt(discriminant)) / (2 * a);
        double root2 = (-b - sqrt(discriminant)) / (2 * a);
        cout << "Roots are real and different." << endl;
        cout << "Root 1 = " << root1 << endl;
        cout << "Root 2 = " << root2 << endl;
    }
    else if (discriminant == 0) {
        double root = -b / (2 * a);
        cout << "Roots are real and the same." << endl;
        cout << "Root = " << root << endl;
    }
    else {
        cout << "Roots are imaginary. No real roots." << endl;
    }
}

int main() {
    double a, b, c;

    cout << "Enter coefficients a, b, and c: ";
    cin >> a >> b >> c;

    findRoots(a, b, c);

    return 0;
}
