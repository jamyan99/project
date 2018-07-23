#include <iostream>
#include <iomanip>
#include <cmath>
 
using namespace std;
 
int main(){

    int n, i;
 
    float x, l,  s = 0, a;

    cin >> x >> n;

    i = 1;
    a = x;
    l = sin(x);
    
    while (i <= n){ 
        s = s + l;
        x = x * a;
        l = sin(x);
        i++;
    }   

    cout << std::setprecision(3) << std::fixed << s << endl; 

    return 0;
} 