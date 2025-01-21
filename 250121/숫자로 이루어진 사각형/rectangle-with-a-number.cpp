#include <iostream>

using namespace std;

int N, counter;

void print(int n) {
    for(int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            cout << counter % 9 + 1 << " ";
        }
        cout << endl;
    }
}
int main() {
    cin >> N;

    print(N);

    return 0;
}