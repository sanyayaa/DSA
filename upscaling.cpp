#include <iostream>
using namespace std;
int main() {
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        string s = "";
        for(int i = 0;i < n;i++){
            s = "";
            for(int j = 0;j < n;j++){
                if(i + j % 2 == 0)
                    s += "##";
                else
                    s += "..";
            }
            cout << s << endl; 
            cout << s << endl; 
        }
    }
}
