#include <iostream>
#include <vector>
#include <algorithm>
#include <string>
#include <cmath>

using namespace std;

int main(void){
    int a, b;
    cin >> a >> b;
    
    if(b<a){
        cout << a - 1 << endl;
    }else{
        cout << a << endl;
    }
    
    return 0;
}

