#include <iostream>
#include <vector>
using namespace std;

int main() {
    int n;
    cin >> n;

    vector<vector<int>> arr(n, vector<int>(n,0));
    int tmp;
    for(int i = 0; i < n; i++){
        for(int j = 0; j < n; j++){
            cin >> tmp;
            arr[i][j] = tmp;
        }
    }

    int max = 0;
    int result;
    for(int i = 0; i <= n-3; i++){
        for(int j = 0; j <= n-3; j++){
            result = 0;
            
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

    cout << max;
}