#include <iostream>

using namespace std;

int main (){
	
    int a, b, c, d, x, y ,z, l, s;

    cin >> a >> b >> c >> d;

    if (a > 80) 
        x = a;
    
    if (b > 80) 
        y = b;
    
    if (c > 80) 
        z = c;
    
    if (d > 80) 
        l = d;

    s = x + y + z + l;

    cout << s << endl;
    
    return 0;
}
