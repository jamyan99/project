#include <iostream>
#include <iomanip>
#include <cmath>
 
using namespace std;
 
int main(){
 
    float a, b, s;

    cin >> a >> b;

    s = a * a + b * b;

    cout << std::setprecision(1) << std::fixed << sqrt(s) << endl; 

    return 0;
}
