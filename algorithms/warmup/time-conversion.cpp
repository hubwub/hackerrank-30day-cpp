#include <algorithm>
#include <cmath>
#include <cstdio>
#include <iostream>
#include <sstream>
#include <string>
#include <vector>
using namespace std;

int main() {
  string time;
  cin >> time;

  int hour =
      10 * static_cast<int>(time[0] - '0') + static_cast<int>(time[1] - '0');
  int min =
      10 * static_cast<int>(time[3] - '0') + static_cast<int>(time[4] - '0');
  int sec =
      10 * static_cast<int>(time[6] - '0') + static_cast<int>(time[7] - '0');

  if (hour < 12 && time[8] == 'P') {
    hour += 12;
  } else if (hour == 12 && time[8] == 'A') {
    hour = 0;
  }

  stringstream ss;

  if (hour < 10) {
    ss << "0";
  }
  ss << hour << ":";

  if (min < 10) {
    ss << "0";
  }
  ss << min << ":";

  if (sec < 10) {
    ss << "0";
  }
  ss << sec;

  cout << ss.str();
  return 0;
}
