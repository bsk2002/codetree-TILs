#include <iostream>

using namespace std;

int a, b;

bool isPrime(int n) {
    if(n == 1) return false;
    
    for(int i = 2; i < n; i++) {
        if(n % i == 0) return false;
    }
    return true;
}
bool isFind(int n) {
    if(!isPrime(n)) return false;
    int tmp = n % 10;
    while(n > 0) {
        n /= 10;
        tmp += n % 10;
    }

    if(tmp % 2 == 0) return true;
    else return false;
}

int main() {
    cin >> a >> b;

    int cnt = 0;

    for(int i = a; i <= b; i++) {
        if(isFind(i)) {
            cnt++;
        }
    }

    cout << cnt;

    return 0;
}