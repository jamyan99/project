#include <iostream>

using namespace std;

int main (){
	
    int a, b, c, d, s = 0;

    cin >> a >> b >> c >> d;

    if (a % 11 != 0) 
        s = s + a;
    
    if (b % 11 != 0) 
        s = s + b;
    
    if (c % 11 != 0) 
        s = s + c;
    
    if (d % 11 != 0) 
        s = s + d;
    
    cout << s << endl;
    
    return 0;
}
