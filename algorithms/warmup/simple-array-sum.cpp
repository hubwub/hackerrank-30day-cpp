#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

int main(){
    int n;
    int sum;
    cin >> n;
    for(int i = 0; i < n; i++){
       int temp;
       cin >> temp;
       sum += temp;
    }
    cout << sum << endl;
    return 0;
}
