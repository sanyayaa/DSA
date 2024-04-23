#include <iostream>
#include <vector>
#include <climits>
#include <algorithm> 
using namespace std;

int main() {
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        vector<int> arr(n);
        for(int i = 0;i < n;i++){
            cin >> arr[i];
        }
        sort(arr.begin(),arr.end());
        int ans = INT_MAX;
        for(int i = 0;i < n - 1;i++){
            if(ans > arr[i + 1] - arr[i])
                ans = arr[i + 1] - arr[i];
        }
        cout << ans << "\n";
    }
    return 0;
}
