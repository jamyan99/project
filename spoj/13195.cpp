#include <iostream>

using namespace std;

int main (){

    int n, s = 0, a = 9;

    cin >> n;

    while (n > 0) {
        s = n % 10;
        n = n / 10;
    	if (s < a)
       		a = s;
    }
    
    cout << a << endl;
    
    return 0;
}
