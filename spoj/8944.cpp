#include <iostream>

using namespace std;

int main (){
	
    int a, b, c, d, x = 1;

    cin >> a >> b >> c >> d;

    if (a < 5) 
        x = x * a;
    
    if (b < 5) 
        x = x * b;
    
    if (c < 5) 
        x = x * c;
    
    if (d < 5) 
        x = x * d;

    cout << x << endl;
    
    return 0;
}
