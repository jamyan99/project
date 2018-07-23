#include <iostream>

using namespace std;

int main (){

    int n, x, y, s;

    cin >> x >> y >> n;
     
    if (y != 1) {
    	if (n % y != 0) {
       		cout << n / y + 1 << endl;
       		cout << n % y << endl;
    	} else {
        	cout << n / y << endl;
        	cout << y << endl;
    	}
    } else {
        cout << n << endl;
        cout << 1 << endl;
    }

    return 0;
}       
