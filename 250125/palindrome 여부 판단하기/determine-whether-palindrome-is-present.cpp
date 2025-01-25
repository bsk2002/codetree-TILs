#include <iostream>
#include <string>

using namespace std;

string A;

bool isPalindrome(string s) {
    int len = s.length();
    for(int i = 0; i < len/2; i++) {
        if(s[i] != s[len-1-i]) return false;
    }
    return true;
}

int main() {
    cin >> A;

    if(isPalindrome(A)) cout << "Yes";
    else cout << "No";

    return 0;
}