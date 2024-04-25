#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main() {
    long long n,k;
    cin >> n >> k;
    // this will tell ki even nos kaha se shuru honge
    n = (n + 1) / 2;
    // mtlab kth pos ka element ek odd ele hai 
    if(k <= n)
        cout << 2 * k - 1;
    else
        cout << (k - n) * 2;
}