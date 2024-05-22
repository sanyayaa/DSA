#include <iostream>
# include <bits/stdc++.h>
using namespace std;

int main() {
    string s;
    cin >> s;
    bool flag = 0;
    for(int i = 0;i < s.length();i++){
        if(s[i] == 'W' && s[i + 1] == 'U' && s[i + 2] == 'B' ){
            if(flag == 1)
                cout << " ";
            i += 2;
        }
        else{
            cout << s[i];
            flag = 1;
        }
    }
    return 0;
}