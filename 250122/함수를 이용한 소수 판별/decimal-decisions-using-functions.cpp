#include <iostream>

using namespace std;

int a, b;

bool isPrimeNum(int n) {
    for(int i = 2; i < n; i++) {
        if(n % i == 0)
            return false;
    }
    return true;
}

int main() {
    cin >> a >> b;

    int res = 0;
    int i;
    if(a == 1) a = 2;
    for(int i = a; i <= b; i++) {
        if(isPrimeNum(i)) res += i;
    }

    cout << res;

    return 0;
}