#include <iostream>
#include <iomanip>
#include <cmath>
 
using namespace std;
 
int main(){

    int n, i;
 
    float x, l, s, p;

    cin >> n;

    l = 1;
    i = 1;
    s = 0;
    p = 0;
    
    while (i <= n){ 
        s = s + cos(i); 
        p = p + sin(i);
        x = s / p;
        l = x * l;
        i++;
    }   

    cout << std::setprecision(3) << std::fixed << l << endl; 

    return 0;
} 