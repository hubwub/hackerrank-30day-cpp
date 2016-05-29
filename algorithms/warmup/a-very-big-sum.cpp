#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

int main(){
    int n;
    long long int sum;
    cin >> n;
    for(int i = 0; i < n; i++){
       long long int temp;
       cin >> temp;
       sum += temp;
    }
    cout << sum << endl;
    return 0;
}
