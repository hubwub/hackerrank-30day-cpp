#include <algorithm>
#include <cmath>
#include <cstdio>
#include <iostream>
#include <vector>
using namespace std;

int main() {
  /* Enter your code here. Read input from STDIN. Print output to STDOUT */
  int n;
  string input;
  cin >> n;
  cin.ignore();

  for (int i = 0; i < n; i++) {
    cin >> input;
    for (int j = 0; j < input.size(); j+=2) {
      cout << input[j];
    }
    cout << " ";
    for (int k = 1; k < input.size(); k+=2) {
      cout << input[k];
    }
    cout << endl;
  }
  return 0;
}
