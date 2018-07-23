#include <iostream>

using namespace std;

int main (){
	
    int n, a = 0, b = 0, c = 0;

    cin >> n;

    a = n / 3600; 
    b = (n % 3600) / 60;
    c = n % 60;

    cout << a << endl;
    cout << b << endl;
    cout << c << endl;

    return 0;
}
