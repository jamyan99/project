#include <iostream>
#include <iomanip>
#include <cmath>
 
using namespace std;
 
int main(){
 
    float n, i = 0, s = 0;

    cin >> n;

    while (i < n){
        s = sqrt(s + 2);
        i++;
    }
        
    cout << std::setprecision(9) << std::fixed << s << endl; 


    return 0;
} 