#include <algorithm>
#include <cmath>
#include <cstdio>
#include <iostream>
using namespace std;

int main() {
  int t;
  cin >> t;
  // alternative while (t--) instead of a for loop
  for (int h = t; h > 0; h--) {
    int n, k, c = 0;
    cin >> n >> k;
    for (int i = 0; i < n; i++) {
      int v;
      cin >> v;
      if (v <= 0) {
        c++;
      }
    }
    cout << (c >= k ? "NO" : "YES") << endl;
  }
  return 0;
}
