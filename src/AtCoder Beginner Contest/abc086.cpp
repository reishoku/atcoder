#include <iostream>
#include <vector>
#include <algorithm>
#include <string>
#include <complex>
#include <fstream>
#include <cmath>

using namespace std;

int main(void){
    int a, b;
    cin >> a >> b;
    cout << ((a*b % 2 == 0) ? "Even" : "Odd") << endl;
    return 0;
}
