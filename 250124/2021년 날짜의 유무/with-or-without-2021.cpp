#include <iostream>

using namespace std;

int M, D;
int arr[12] = {31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};

bool isExist(int m, int d) {
    if(arr[m-1] >= d) return true;
    return false;
}

int main() {
    cin >> M >> D;

    if(isExist(M, D)) cout << "Yes";
    else cout << "No";

    return 0;
}