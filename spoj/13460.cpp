#include <iostream>
#include <iomanip>
#include <cmath>
 
using namespace std;
 
int main(){

    int n, i;
 
    float x, l, s;

    cin >> x >> n;

    i = 1;
    s = 0;
    l = sin(x);

    while (i <= n){ 
        s = s + l;
        l = l * sin(x);
        i++;
    }   

    cout << std::setprecision(3) << std::fixed << s << endl; 

    return 0;
} 