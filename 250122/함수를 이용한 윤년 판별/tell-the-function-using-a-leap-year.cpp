#include <iostream>

using namespace std;

int y;

bool isSpecialYear(int n) {
    if(n % 100 == 0 && n % 400 != 0) return false;
    else if(n % 4 == 0) return true;
    return false;
}

int main() {
    cin >> y;

    if(isSpecialYear(y)) cout << "true";
    else cout << "false";
    return 0;
}