#include <iostream>

using namespace std;

int n;
int arr[50];

void divideEven(int tmp[]) {
    for(int i = 0; i < n; i++) {
        if(tmp[i] % 2 == 0) {
            tmp[i] /= 2;
        }
    }
}

int main() {
    cin >> n;
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    divideEven(arr);

    for(int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }

    return 0;
}