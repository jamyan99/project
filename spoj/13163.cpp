#include <iostream>

using namespace std;

int main (){

    int a, s;

    cin >> a;

    if (a % 2 == 1) {
    	s = ((a + 1)*((a - 1) / 2) / 2) + (a - 1) / 2 + 1;
	} 
    
    cout << s << endl;

    return 0;
}
