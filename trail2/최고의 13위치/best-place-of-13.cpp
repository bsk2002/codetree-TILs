#include <iostream>
using namespace std;

int main() {
    // Please write your code here.
    int N; cin >> N;

    int arr[21][21];

    for(int i = 0; i < N; i++) {
        for(int j = 0; j < N; j++) {
            cin >> arr[i][j];
        }
    }

    int max = 0;
    for(int i = 0; i < N; i++) {
        for(int j = 0; j < N - 2; j++) {
            if(max < arr[i][j] + arr[i][j+1] + arr[i][j+2]) max = arr[i][j] + arr[i][j+1] + arr[i][j+2];
        }
    }
    cout << max;
    return 0;
}