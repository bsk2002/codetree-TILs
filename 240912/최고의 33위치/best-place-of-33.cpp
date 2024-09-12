#include <iostream>
#include <vector>
using namespace std;

int main() {
    int n;
    cin >> n;

    vector<vector<int>> arr(n, vector<int>(n,0));

    for(int i = 0; i < n; i++){
        for(int j = 0; j < n; j++){
            cin >> arr[i][j];
        }
    }

    int result = 0;
    int max = 0;

    for(int i = 0; i <= n-3; i++){
        for(int j = 0; j <= n-3; j++){
            result += arr[i][j];
            result += arr[i][j+1];
            result += arr[i][j+2];
            result += arr[i+1][j];
            result += arr[i+1][j+1];
            result += arr[i+1][j+2];
            result += arr[i+2][j];
            result += arr[i+2][j+1];
            result += arr[i+2][j+2];

            if(result > max){
                max = result;
            }
        }
    }

    cout << result;
}