#include <iostream>

using namespace std;

int n, m, res;
int A[100];

void mcal() {
    if(m % 2 == 0)
        m /= 2;
    else
        m -= 1;
}

int main() {
    cin >> n >> m;

    for (int i = 0; i < n; i++) {
        cin >> A[i];
    }

    while(m > 0) {
        res += A[m - 1];
        mcal();
    }

    cout << res;

    return 0;
}