#include <iostream>
#include <algorithm>
#include <climits>
using namespace std;

int main() {
    // Please write your code here.
    int arr[101];
    int N; cin >> N;
    for(int i = 0; i < N; i++) {
        cin >> arr[i];
    }

    int res = INT_MAX;
    for(int i = 0; i < N; i++) {
        int tmp = 0;
        for(int j = 0; j < N; j++) {
            tmp += abs(j - i) * arr[j];
        }
        res = min(res, tmp);
    }
    cout << res;
    return 0;
}