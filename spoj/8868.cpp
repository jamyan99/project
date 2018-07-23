#include <iostream>

using namespace std;

int main (){
	
    int n, s = 0, a = 0;

    cin >> n;

    s = n / 60;

    a = n % 60;
    
    cout << s << endl;

    cout << a << endl;
    
    return 0;
}
