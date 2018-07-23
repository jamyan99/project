#include <iostream>

using namespace std;

int main (){
	
    int a, b, c, s = 0;

    cin >> a >> b >> c;

    if (a == 5) 
        s = s + 1;
    
    if (b == 5) 
        s = s + 1;
    
    if (c == 5) 
        s = s + 1;
    
    cout << s << endl;
    
    return 0;
}
