#include <algorithm>
#include <cmath>
#include <cstdio>
#include <iostream>
#include <map>
#include <vector>
using namespace std;

int main() {
  /* Enter your code here. Read input from STDIN. Print output to STDOUT */
  map<string, long> phoneBook;
  string name;
  long number;
  int n;
  cin >> n;

  while (n--) {
    cin >> name;
    cin >> number;
    phoneBook[name] = number;
  }

  while (cin >> name) {
    if (phoneBook.find(name) != phoneBook.end()) {
      cout << name << "=" << phoneBook[name] << endl;
    } else {
      cout << "Not found" << endl;
    }
  }
  return 0;
}
