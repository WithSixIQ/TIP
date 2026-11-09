#include <iostream>
#include <algorithm>
using namespace std;

int main() {
    int N, D;
    cin >> N >> D;

    int a[1000];

    for (int i = 0; i < N; i++)
        cin >> a[i];

    sort(a, a + N);

    int left = 0, right = a[N - 1] - a[0];

    while (left < right) {
        int mid = (left + right) / 2;
        int days = 1, start = 0;

        for (int i = 1; i < N; i++) {
            if (a[i] - a[start] > mid) {
                days++;
                start = i;
            }
        }

        if (days <= D)
            right = mid;
        else
            left = mid + 1;
    }

    cout << left;

    return 0;
}