#include <iostream>
#include <vector>
#include <algorithm>
#include <string>
#include <complex>
#include <fstream>
#include <cmath>

using namespace std;

int main(void){
    int n, a;
    cin >> n >> a;
    if(n%500 <= a){
        cout << "Yes" << endl;
    }else{
        cout << "No" << endl;
    }
    return 0;
}
