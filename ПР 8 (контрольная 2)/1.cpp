#include <iostream>
using namespace std;

long long umn(long long a, long long n) {
    long long result = 1;
    while (n > 0) {
        if (n % 2 == 1) result *= a;
        a *= a;
        n /= 2;
    }
    return result;
}

int main() {
    long long a, n;
    cin >> a >> n;
    cout << umn(a, n);
}