#include <iostream>

using namespace std;

int main(){

    int  a = 1, b = 1, c, n;

    cin >> n;

    if (n < 2)
        cout << 1 << endl;
    else{
    	for (int i = 2; i <= n; i++){
        	c = (a + b) % 10;
        	a = b;
        	b = c;
    	}
    	cout << c << endl;
    }
    
    return 0;
}
