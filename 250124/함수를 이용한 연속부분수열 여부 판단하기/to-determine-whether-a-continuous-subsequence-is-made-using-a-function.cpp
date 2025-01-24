#include <iostream>

using namespace std;

int n1, n2;
int a[100], b[100];

bool findArr(int n) {
    for(int i = 0; i < n2 && n < n1; i++) {
        if(a[n++] != b[i])
            return false;
    }
    return true;
}

int main() {
    cin >> n1 >> n2;

    for (int i = 0; i < n1; i++) cin >> a[i];

    for (int i = 0; i < n2; i++) cin >> b[i];

    for(int i = 0; i < n1; i++) {
        if(findArr(i)) {
            cout << "Yes";
            return 0;
        }
    }
    cout << "No";
    

    return 0;
}