#include <iostream>
# include <bits/stdc++.h>
using namespace std;

int main() {
  int n, m;
  cin >> n >> m;

  vector<int> v(m);
  for (int i = 0; i < m; ++i) {
    cin >> v[i];
  }

  // Sort the pieces in ascending order
  sort(v.begin(), v.end());
  int mini = v[ n - 1] - v[0];
  
  for(int i = 1;i + n - 1 < m;i++){
    mini = min(mini,(v[i + n - 1] - v[i]));
  }

  cout << mini;

  return 0;
}
