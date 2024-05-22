#include <iostream>
#include <string>

using namespace std;

int main() {
  int n;
  cin >> n;

  while (n--) {
    string word;
    cin >> word;

    if (word.length() <= 10) 
      cout << word << endl;
    
    else {
      char first = word[0];
      int middleLength = word.length() - 2;
      char last = word[word.length() - 1];
      string ans = first + to_string(middleLength) + last;

      cout << ans << endl;
    }
  }

  return 0;
}
