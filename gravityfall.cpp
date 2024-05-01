#include <iostream>
# include <bits/stdc++.h>
using namespace std;
int main() {
    int c,r;
    cin >> c;
    vector<int> v;
    for(int i = 0;i < c;i++){
        cin >> r;
        v.push_back(r);
    }
    sort(v.begin(),v.end());
    for(auto i : v)
        cout << i << " ";
    return 0;
}