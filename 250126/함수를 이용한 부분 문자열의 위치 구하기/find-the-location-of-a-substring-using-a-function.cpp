#include <iostream>
#include <string>

using namespace std;

string text;
string pattern;

int fun() {
   
   int idx = -1;
   int cnt = 0;

   for(int i = 0; i < text.length(); i++) {
        if(cnt > pattern.length()) break;
        
        if(text[i] == pattern[cnt]) {
            cnt++;
            if(idx == -1) idx = i;
        }else {
            idx = -1;
            cnt = 0;
        }
   }

    if(cnt == pattern.length())
        return idx;
    else
        return -1;
}

int main() {
    cin >> text;
    cin >> pattern;

    cout << fun();

    return 0;
}