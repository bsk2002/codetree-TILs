#include <iostream>
using namespace std;

int main() {
    // Please write your code here.
    int r, c;
    cin >> r >> c;

    char arr[16][16];
    for(int i = 0; i < r; i++) {
        for(int j = 0; j < c; j++) {
            cin >> arr[i][j];
        }
    }

    int res = 0;

    if(arr[0][0] == arr[r-1][c-1]) {
        cout << 0;
        return 0;
    }

    for(int i = 1; i < r - 2; i++) {
        for(int j = 1; j < c - 2; j++) {
            if(arr[i][j] != arr[0][0]) {
                for(int m = i + 1; m < r - 1; m++) {
                    for(int n = j + 1; n < c - 1; n++) {
                        if(arr[m][n] != arr[i][j]) res++;
                    }
                }
            }
        }
    }

    cout << res;
    return 0;
}