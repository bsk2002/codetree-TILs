#include <iostream>

using namespace std;

int n, m;

void swap(int *n, int *m) {
    int* tmp;
    tmp = n;
    n = m;
    m = tmp;
}

int main() {
    cin >> n >> m;

    swap(n, m);
    cout << n << " " << m;

    return 0;
}