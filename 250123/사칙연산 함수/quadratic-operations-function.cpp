#include <iostream>

using namespace std;

int a;
int c;
char o;

int add(int a, int c) {
    return a + c;
}

int sub(int a, int c) {
    return a - c;
}

int mul(int a, int c) {
    return a * c;
}

int divd(int a, int c) {
    return a / c;
}

void cal(int a, int c, char o) {
    if(o == '+')
        cout << a << " " << o << " " << c << " = " << add(a, c);
    else if(o == '-')
        cout << a << " " << o << " " << c << " = " << sub(a, c);
    else if(o == '*')
        cout << a << " " << o << " " << c << " = " << mul(a, c);
    else if(o == '/')
        cout << a << " " << o << " " << c << " = "  << divd(a, c);
    else
        cout << "False";
}


int main() {
    cin >> a >> o >> c;

    cal(a, c, o);

    return 0;
}