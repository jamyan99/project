#include <iostream>

using namespace std;

int main (){
	
    int n, a = 0, b = 0, s = 0;

    cin >> n;

    if (n > 0){
        a = n % 10;
        b = n / 10;
        s = a * b;
    	cout << s << endl;
    }
    
    return 0;
}
