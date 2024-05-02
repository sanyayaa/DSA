#include <iostream>
# include <bits/stdc++.h>
using namespace std;
int main() {
    int n,r;
    cin >> n;
    int v[n];
    for(int i = 0;i < n;i++){
        cin >> v[i];
    }
    int ans = 1;
    int cnt = 1;
    for(int i = 1;i < n;i++){
        if(v[i - 1] <= v[i]){
            cnt++;
            if(ans < cnt)
                ans = cnt;
        }
        
        else
            cnt = 1;
    }
    cout << ans;
    return 0;
}