#include <iostream>

using namespace std;

int main(){

    char a, b, c;

    cin >> a >> b >> c;

    if (a >= 97)
    	a = a - 32;
    	
    if (b >= 97)
    	b = b - 32;
    	
    if (c >= 97)
   	 	c = c - 32;
    
    cout << a << " " << b << " " <<  c << endl;
    
    return 0;
}
