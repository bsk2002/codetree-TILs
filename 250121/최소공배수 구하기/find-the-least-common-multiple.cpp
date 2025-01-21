#include <iostream>

using namespace std;

int n, m;

int cal(int n, int m) {
    int counter;

    if(n < m)
        counter = n;
    else
        counter = m;

    while(true) {
        if(counter % n == 0 && counter % m == 0) {
          break;
        }
        counter++;
    }

    return counter;

}

int main() {
    cin >> n >> m;

    cout << cal(n ,m);
    return 0;
}