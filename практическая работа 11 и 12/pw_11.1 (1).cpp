#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
    int n, m;
    cin >> n >> m;

    vector<vector<int>> a(n, vector<int>(m));
    for (int i = 0; i < n; i++)
        for (int j = 0; j < m; j++)
            cin >> a[i][j];

    // dp[i][j] - максимальная сумма баллов на пути из (0,0) в (i,j)
    vector<vector<int>> dp(n, vector<int>(m));
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            if (i == 0 && j == 0)
                dp[i][j] = a[i][j];
            else if (i == 0)
                dp[i][j] = dp[i][j - 1] + a[i][j];
            else if (j == 0)
                dp[i][j] = dp[i - 1][j] + a[i][j];
            else
                dp[i][j] = max(dp[i - 1][j], dp[i][j - 1]) + a[i][j];
        }
    }

    // Восстановление пути от правого нижнего угла к началу
    vector<pair<int, int>> path;
    int i = n - 1, j = m - 1;
    path.push_back({i, j});
    while (i > 0 || j > 0) {
        if (i == 0)
            j--;
        else if (j == 0)
            i--;
        else if (dp[i - 1][j] >= dp[i][j - 1])
            i--;
        else
            j--;
        path.push_back({i, j});
    }
    reverse(path.begin(), path.end());

    for (auto &p : path)
        cout << p.first << " " << p.second << endl;

    cout << "Сумма баллов: " << dp[n - 1][m - 1] << endl;
    return 0;
}
