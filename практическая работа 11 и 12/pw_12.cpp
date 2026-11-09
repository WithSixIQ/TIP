
#include <iostream>
#include <algorithm>
using namespace std;

int n = 10, m = 10, ans = 0;

char a[10][11] = {
    "0100P10000",
    "010001P00S",
    "0101111000",
    "P100P00000",
    "0101110000",
    "00P00010P0",
    "00010P0100",
    "0111111010",
    "000100P000",
    "0P000E00P0"
};

bool used[10][10];

void dfs(int x, int y, int count) {
    if (a[x][y] == 'E') {
        ans = max(ans, count);
        return;
    }

    used[x][y] = true;

    int dx[] = {-1, 1, 0, 0};
    int dy[] = {0, 0, -1, 1};

    for (int i = 0; i < 4; i++) {
        int nx = x + dx[i];
        int ny = y + dy[i];

        if (nx >= 0 && nx < n && ny >= 0 && ny < m &&
            a[nx][ny] != '1' && !used[nx][ny]) {

            dfs(nx, ny, count + (a[nx][ny] == 'P'));
        }
    }

    used[x][y] = false;
}

int main() {
    dfs(1, 9, 0);

    cout << ans;

    return 0;
}
