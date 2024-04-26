#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    while(t--){
        string ab;
        cin >> ab;
        string a,b = "";
        string f = "0";
        int n = ab.length();
        for(int i = 0;i < n - 1;i++){
            a += ab[i];
            b = ab.substr(i + 1,n - i - 1);
            
            int num_a = stoi(a);
            int num_b = stoi(b);
            
            if(a[0] != '0' && b[0] != '0' && num_a < num_b && a + b == ab){
                f = "1";
                cout << a << " " << b << endl;
                break;
            }
        }
        if(f == "0")
            cout << -1 << endl;
    }
    return 0;
}