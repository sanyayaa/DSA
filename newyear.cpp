#include <iostream>
# include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    while(t--){
        int num;
        cin >> num;
        int res = num / 2020;
        if(res < 1)
            cout << "No" << endl;
        else {
            int lastdigit = num % 2020;
            if(lastdigit > res)
                cout << "No" << endl;
            else
                cout << "Yes" << endl;
        }
    }
    return 0;
}