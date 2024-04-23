#include <iostream>
using namespace std;
int main() {
    int t;
    cin >> t;
     string s;
    while(t--){
       
        cin >> s;
        if(s.find("it") != string::npos)
            cout << "YES" << endl;
        else
            cout << "NO" << endl;
    }
    return 0;
}