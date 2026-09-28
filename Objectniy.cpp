#include <iostream>
#include <cmath>
using namespace std;

class RightTriangle {
public:
    double a, b;

    double hypotenuse() {
        return sqrt(a * a + b * b);
    }
};

class Biker {
public:
    double speed;

    double positionAfter(double hours) {
        return fmod(speed * hours, 109.0);
    }
};

int main() {
    RightTriangle triangle;
    cin >> triangle.a >> triangle.b;
    cout << triangle.hypotenuse() << endl;

    Biker biker;
    cin >> biker.speed;
    double t;
    cin >> t;
    cout << biker.positionAfter(t) << endl;

    return 0;
}