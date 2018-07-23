#include <iostream>

using namespace std;

int main (){
	
    int a, b, c, d;

    cin >> a >> b >> c >> d;

    if (a > b && c > b && d > b) 
        cout << b << endl;
    
    if (b > a && c > a && d > a) 
        cout << a << endl;
    
    if (a > c && b > c && d > c) 
        cout << c << endl;
    
    if (a > d && b > d && c > d) 
        cout << d << endl;
    
    return 0;
}
