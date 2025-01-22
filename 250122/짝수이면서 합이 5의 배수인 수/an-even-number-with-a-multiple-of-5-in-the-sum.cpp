#include <iostream>

using namespace std;

int n;

bool isMagicNum(int n) {
    int tmp = 0;
    tmp = (n % 10) + (n / 10);
    if(tmp % 5 == 0 && n % 2 == 0)
        return true;
    else
        return false;
}

int main() {
    cin >> n;

    if(isMagicNum(n))
        cout << "Yes";
    else
        cout << "No";
    return 0;
}