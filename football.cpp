#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main(){
    string s;
    cin >> s;
    int zero = 0,one = 0;
    for(int i = 0;i < s.length();i++){
        if(s[i] == '0'){
            zero++;
            one = 0;
        }
        else{
            one++;
            zero = 0;
        }
        if(one == 7 || zero == 7)
            break;
    }
    if(one == 7 || zero == 7)
        cout << "YES";
    else
        cout << "NO";
}