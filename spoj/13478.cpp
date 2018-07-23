#include <iostream>
#include <iomanip>
#include <cmath>
 
using namespace std;
 
int main(){
 
    float n, i = 1, s = 1;

    cin >> n;

    while (i <= n){
        s = s * (1 + (1 / (i * i)));
        i++;
    }
        
    cout << std::setprecision(3) << std::fixed << s << endl; 


    return 0;
} 