#include <iostream>
using namespace std;

int main() {
    // Please write your code here.
    int arr[10][10];
    int N; cin >> N;

    int x = N - 1; int y = N - 1;
    int cnt = 1;
    while(true) {
        if(cnt > N * N) break;
        if(x == N - 1) {
            for(int i = 0; i < N; i++) {
                arr[x--][y] = cnt++;
            }
            y--;
        } else {
            for(int i = 0; i < N; i++) {
                arr[++x][y] = cnt++;
            }
            y--;
        }
    }

    for(int i = 0; i < N; i++) {
        for(int j = 0; j < N; j++) {
            cout << arr[i][j] << " ";
        }
        cout << "\n";
    }
    return 0;
}