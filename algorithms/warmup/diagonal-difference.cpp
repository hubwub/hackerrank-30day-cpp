#include <algorithm>
#include <cmath>
#include <cstdio>
#include <iostream>
#include <vector>
using namespace std;

int main() {
  int n, input;
  int leftSum = 0;
  int rightSum = 0;
  cin >> n;
  for (int i = 0; i < n; i++) {
    for (int j = 0; j < n; j++) {
      cin >> input;
      if (i == j) {
        leftSum += input;
      }
      // could also be done as j == (n - i - 1)
      if (i + j == (n - 1)) {
        rightSum += input;
      }
    }
  }
  cout << abs(leftSum - rightSum) << endl;
  return 0;
}
