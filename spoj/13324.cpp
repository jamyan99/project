#include <iostream>
 
using namespace std;
 
int main(){
 
    int a, b, p;
 
    cin >> a >> b;
 
    p = a * b;
 
    while (a > 0 && b > 0) {
   	 	if (a > b) 
        	a = a % b;
        else 
        	b = b % a;
    } 
    
    cout << p / (a + b) << endl;
 
    return 0;
 
}
