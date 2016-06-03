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
  int n, r = 0, c = 0, t = 0;
  cin >> n;

  while (n != 0) {
    r = n % 2;
    n = n / 2;

    if (r == 1) {
      c++;
      if (c >= t) {
        t = c;
      }
    } else {
      c = 0;
    }
  }

  cout << t << endl;
  return 0;
}
