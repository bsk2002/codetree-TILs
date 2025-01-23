#include <iostream>

using namespace std;

int a, b;

int main() {
    cin >> a >> b;

    int res = 1;
    for(int i = 0; i < b; i++) {
        res *= a;
    }

    cout << res;

    return 0;
}