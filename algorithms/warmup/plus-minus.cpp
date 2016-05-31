#include <algorithm>
#include <cmath>
#include <cstdio>
#include <iostream>
#include <vector>
using namespace std;

int main() {
  int n, input;
  int positiveCount = 0, negativeCount = 0, zeroesCount = 0;
  cin >> n;

  while (cin >> input) {
    if (input > 0) {
      positiveCount++;
    } else if (input < 0) {
      negativeCount++;
    } else if (input == 0) {
      zeroesCount++;
    }
  }

  cout << (double)positiveCount / n << endl;
  cout << (double)negativeCount / n << endl;
  cout << (double)zeroesCount / n << endl;
  return 0;
}
