#include <iostream>

using namespace std;

int n, m;

int cal(int n, int m) {
    int counter = 1;
    int result = 0;
    while ( counter <= n || counter <= m) {
        if(n % counter == 0 && m % counter == 0) {
            result = counter;
        }
        counter++;
    }

    return result;
}

int main() {
    cin >> n >> m;

    cout << cal(n, m);

    return 0;
}