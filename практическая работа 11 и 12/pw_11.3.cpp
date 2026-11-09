#include <iostream>
#include <algorithm>
using namespace std;

int main() {
    int N, K, L;
    cin >> N >> K >> L;

    int a[100];

    for (int i = 0; i < N; i++)
        cin >> a[i];

    sort(a, a + N);

    int sum = 0, count = 0;

    for (int i = N - 1; i >= 0 && count < K; i--) {
        for (int j = 0; j < L && count < K; j++) {
            sum += a[i];
            count++;
        }
    }

    cout << sum;
    return 0;
}