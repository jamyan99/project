#include <iostream>
#include <iomanip>
#include <cmath>
 
using namespace std;
 
int main(){

    int n, i;
 
    float s;

    cin >> n;

    s = 0;
    
   	for(i = n; i > 0; i--){
        s = cos(i + s);  
   	}	

    cout << std::setprecision(3) << std::fixed << s << endl; 

    return 0;
} 
