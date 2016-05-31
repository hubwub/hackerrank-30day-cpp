#include <algorithm>
#include <bitset>
#include <climits>
#include <cmath>
#include <cstdio>
#include <cstdlib>
#include <cstring>
#include <ctime>
#include <deque>
#include <fstream>
#include <iostream>
#include <limits>
#include <list>
#include <map>
#include <numeric>
#include <queue>
#include <set>
#include <sstream>
#include <stack>
#include <string>
#include <unordered_map>
#include <vector>

using namespace std;

int main() {
  int n;
  cin >> n;
  vector<int> arr(n);

  for (int arr_i = 0; arr_i < n; arr_i++) {
    cin >> arr[arr_i];
  }

  while (--n >= 0) {
    cout << arr[n] << " ";
  }
  cout << endl;

  return 0;
}
