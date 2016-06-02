#include <algorithm>
#include <cmath>
#include <cstdio>
#include <iostream>
#include <vector>
using namespace std;

int factorial(int n) {
  if (n == 1) {
    return 1;
  }

  return n * factorial(n - 1);
}

int main() {
  /* Enter your code here. Read input from STDIN. Print output to STDOUT */
  int i;
  cin >> i;
  cout << factorial(i) << endl;
  return 0;
}
