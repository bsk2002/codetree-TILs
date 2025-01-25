#include <iostream>
#include <string>

using namespace std;

string A;

bool isTwo(string s) {
    bool alpha[26] = {false};
    for(int i = 0; i < A.length(); i++) {
        if(alpha[s[i] - 97] == false)
            alpha[s[i]-97] = true;
    }

    int res = 0;
    for(int i = 0; i < 26; i++) {
        if(alpha[i]) res++;
    }

    if(res >= 2) return true;
    return false;
}

int main() {
    cin >> A;

    if(isTwo(A)) cout << "Yes";
    else cout << "No";

    return 0;
}