#include <iostream>
# include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    while(t--){
        int n,k;
        cin >> n >> k;
        int total_bridges = ((n * (n - 1)) / 2);
        if(total_bridges <= k || n - 1 <= k)
            cout << 1 << endl;
        else
            cout << n << endl;
    }
    return 0;
}