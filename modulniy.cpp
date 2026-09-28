#include <iostream>
#include <cmath>
using namespace std;

//задача 1
namespace geo {
    double hypo(double a, double b) {
        return sqrt(a * a + b * b);
    }
}

//задача 2
namespace mkad {
    const double LENGTH = 109.0;

    double st(double v, double t) {
        return fmod(v * t, LENGTH);
    }
}

int main() {
    double a, b, v, t;

    cin >> a >> b;
    cout << geo::hypo(a, b) << endl;

    cin >> v >> t;
    cout << mkad::st(v, t) << endl;

    return 0;
}