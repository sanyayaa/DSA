#include <iostream>
# include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    while(t--){
        long long n;
        cin >> n;
        // if n is a power of 2, it has no odd divisors greater than one, so the answer should be "NO".

        // If is not a power of 2, it has at least one odd divisor greater than one, so the answer should be "YES".
        if((n & (n - 1)) == 0)
            cout << "NO" << endl;
        else
            cout << "YES" << endl;
    }
    return 0;
}