#include <iostream>

using namespace std;

int main (){
	
    int a, b, c, x = 0;

    cin >> a >> b >> c;

    if (a % 2 == 0) 
        x = x + a;
    
    if (b % 2 == 0) 
        x = x + b;
    
    if (c % 2 == 0) 
        x = x + c;

    cout << x << endl;
    
    return 0;
}
