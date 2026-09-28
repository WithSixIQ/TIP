#include <iostream>
#include <cmath>
using namespace std;

const double Lenght= 109.0;

double hypo(double a, double b) {
    return sqrt(a * a + b * b);
}

double st(double v, double t) {
    return fmod(v * t, Lenght);
}

pair<double, double> readTwo() {
    double x, y;
    cin >> x >> y;
    return {x, y};
}

int main() {
    auto [a, b] = readTwo();
    cout << hypo(a, b) << endl;

    auto [v, t] = readTwo();
    cout << st(v, t) << endl;

    return 0;
}