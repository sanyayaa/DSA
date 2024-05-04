#include <iostream>
# include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    while(t--){
        int n,k;
        cin >> n >> k;
        vector<int> v(n);
        for(auto& i : v)
            cin >> i;
        
        sort(v.begin(),v.end());
        int remove = 1,ans = 1;
        for(int i = 1;i < n;i++){
            if(v[i] - v[i - 1] > k)
                remove = 1;
            else
                remove++;
            ans = max(ans,remove);
        }
        cout << n - ans << endl;
    }

    return 0;
}