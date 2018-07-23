#include <iostream>

using namespace std;

int main (){
	
    int a, b, c, x = 1;

    cin >> a >> b >> c;

    if (a % 2 == 1) 
        x = x * a;
    
    if (b % 2 == 1) 
        x = x * b;
    
    if (c % 2 == 1) 
        x = x * c;

    cout << x << endl;
    
    return 0;
}
