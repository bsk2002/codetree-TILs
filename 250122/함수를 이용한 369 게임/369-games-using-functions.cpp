#include <iostream>

using namespace std;

int a, b;

bool isMagicNum(int n) {
    while(n > 0) {
        int tmp = n % 10;
        if(tmp == 3 || tmp == 6 || tmp == 9) {
            return true;
        }
        n /= 10;
    }
    return false;
}

int main() {
    cin >> a >> b;

    int res = 0;

    for(int i = a; i <= b; i++) {
        if(i % 3 == 0 || isMagicNum(i)) {
            res++;
        }
    }

    cout << res;

    return 0;
}