#include <iostream>
using namespace std;

int main() {
    // Please write your code here.
    int a = 5, b = 6, c = 7;
    int tmp;
    tmp = a;
    a = c;
    c = b;
    b = tmp;
    cout << a << endl;
    cout << b << endl;
    cout << c;
    return 0;
}