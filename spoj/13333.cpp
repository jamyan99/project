#include <iostream>
#include <iomanip>
#include <cmath>
 
using namespace std;
 
int main(){
 
    double n, pi = 3.141592, s;

    cin >> n;

    s = n * n / (4 * pi);

    cout << std::setprecision(4) << std::fixed << s << endl; 


    return 0;
}