#include <iostream>

using namespace std;

int main (){
	
    int a, b, c, d, s = 0;

    cin >> a >> b >> c >> d;

    if (a % 3 == 0) 
        s = s + 1;
    
    if (b % 3 == 0) 
        s = s + 1;
    
    if (c % 3 == 0) 
        s = s + 1;
    
    if (d % 3 == 0) 
        s = s + 1;

    cout << s << endl;
    
    return 0;
}
