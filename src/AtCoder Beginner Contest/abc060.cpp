#include <iostream>
#include <vector>
#include <algorithm>
#include <string>
#include <complex>
#include <fstream>
#include <cmath>

using namespace std;

int main(void){
    string a, b, c;
    cin >> a >> b >> c;
    if((a.back() == b.front()) && b.back() == c.front()){
        cout << "YES" << endl;
    }else{
        cout << "NO" << endl;
    }
    return 0;
}
