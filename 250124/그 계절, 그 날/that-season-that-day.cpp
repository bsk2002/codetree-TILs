#include <iostream>
#include <string>

using namespace std;

int Y, M, D;
int arr[12] = {31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
string season[4] = {"Spring", "Summer", "Fall", "Winter"};

bool isYoon(int y) {
    if(y % 100 == 0) return false;
    else if(y % 4 == 0 || y % 400 == 0) return true;
    return false;
}

int isExist(int y, int m, int d) {
    if(isYoon(y)) arr[1] = 29;
    if(m > 12) return -1;
    else if(arr[m-1] < d) return -1;
    if(m >= 3 && m <= 5) return 0;
    else if(m >= 6 && m <= 8) return 1;
    else if(m >= 9 && m <= 11) return 2;
    else return 3;
}

int main() {
    cin >> Y >> M >> D;

    int res = isExist(Y, M, D);
    if(res == -1) cout << res;
    else cout << season[res];

    return 0;
}