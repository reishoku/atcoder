#include <iostream>
#include <vector>
#include <algorithm>
#include <string>
#include <complex>
#include <fstream>
#include <cmath>

using namespace std;

int main(void){
    int a, b, c;
    cin >> a >> b >> c;
    cout << (((a <= c) && (c <= b)) ? "Yes" : "No" ) << endl;
    return 0;
}
