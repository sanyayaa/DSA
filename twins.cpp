#include <bits/stdc++.h>
using namespace std;

int main() {
  int n;
  cin >> n;
  int arr[n];
  int sum = 0;
  for(int i = 0;i < n;i++){
    cin >> arr[i];
    sum += arr[i];
  }

  sort(arr,arr + n);
  sum /= 2;
  int curr = 0,cnt = 0;
  for(int i = n - 1;i >= 0;i--){
    curr += arr[i];
    cnt++;
    if(curr > sum)
      break;
  }
  cout << cnt;
  return 0;
}