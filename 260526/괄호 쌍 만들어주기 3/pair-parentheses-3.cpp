#include <iostream>
#include <string>
using namespace std;

int main() {
    // Please write your code here.
    int res = 0;
    string str;
    cin >> str;

    int len = str.length();
    for(int i = 0; i < len; i++) {
        if(str[i] == '(') {
            for(int j = i + 1; j < len; j++) {
                if(str[j] == ')') res++;
            }
        }
    }

    cout << res;
    return 0;
}