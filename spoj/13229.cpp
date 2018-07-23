#include <iostream>

using namespace std;

int main(){

    int e, n, i = 0;

    cin >> n;

    while (n > 1) {
    	if (n % 2 == 0)
        	n = n / 2;
     	else {
        	n = 1;
        	i++;
    	}
    }
    
    if (i > 0) 
    	cout << "NO" << endl;
    else 
    	cout << "YES" << endl;

    return 0;

}
