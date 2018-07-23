#include <iostream>
#include <iomanip>
#include <cmath>
 
using namespace std;
 
int main(){
 
    float a, b, c, p, s;

    cin >> a >> b >> c;

    p = (a + b + c) / 2;

    s = p * (p - a) * (p - b) * (p - c); 

    cout << std::setprecision(2) << std::fixed << sqrt(s) << endl; 

    return 0;
}