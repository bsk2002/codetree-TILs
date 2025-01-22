#include <iostream>

using namespace std;

int a, b, c;

int getMin(int a, int b, int c) {
    if(a < b){
        if(a < c)
            return a;
        else
            return c;
    }else {
        if(b < c)
            return b;
        else
            return c;
    }
}

int main() {
    cin >> a >> b >> c;

    cout << getMin(a,b,c);

    return 0;
}