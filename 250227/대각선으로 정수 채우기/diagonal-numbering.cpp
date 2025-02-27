#include <bits/stdc++.h>
using namespace std;

int n, m;
int arr[101][101];

void solve() {
    int cur = 1;
    int i = 0, j = 0;
    while(i < n && j < m) {
        int dx = i;
        int dy = j;

        while(dx < n && dy >= 0) {
            if (arr[dx][dy] == 0) {
                arr[dx][dy] = cur++;
            }
            dx++;
            dy--;
        }
        if(j == m - 1) {
            i++;
        }else {
            j++;
        }
    }
}

int main() {
    ios_base::sync_with_stdio(0);
    cout.tie(0);

    cin >> n >> m;
    solve();

    for(int i = 0; i < n; i++) {
        for(int j = 0; j < m; j++) {
            cout << arr[i][j] << ' ';
        }
        cout << '\n';
    }
    return 0;
}