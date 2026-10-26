#include <iostream>
using namespace std;
void hanoi(int n, int one, int two, int three) {
    if (n == 0) {
        return;
    }
    hanoi(n - 1, one, three, two);
    cout << "Ingredient " << n << " move from " << one << " to " << two << endl;
    hanoi(n - 1, three, two, one);
}

int main() {
    int n;
    cin >> n;
    hanoi(n, 1, 3, 2);
    return 0;
}
