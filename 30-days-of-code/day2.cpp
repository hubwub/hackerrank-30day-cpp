#include <algorithm>
#include <cmath>
#include <cstdio>
#include <iostream>
#include <vector>
using namespace std;

int main() {
  /* Enter your code here. Read input from STDIN. Print output to STDOUT */
  double mealCost, tax, tip, totalCost;
  int taxPercent, tipPercent;
  cin >> mealCost >> tipPercent >> taxPercent;
  tax = ((double)mealCost * taxPercent) / 100;
  tip = ((double)mealCost * tipPercent) / 100;
  totalCost = mealCost + tax + tip;
  cout << "The total meal cost is " << round(totalCost) << " dollars.";
  return 0;
}
