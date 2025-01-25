#include <iostream>

using namespace std;

int n;
int arr[50];

void abs(int tmp[]) {
    for(int i = 0; i < n; i++) {
        if(tmp[i] < 0) tmp[i] *= -1;
    }
}

int main() {
    cin >> n;

    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    abs(arr);

    for(int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }

    return 0;
}