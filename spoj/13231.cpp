#include <iostream>

using namespace std;

int main (){

    int n, i = 1;

    cin >> n;

    while (n % i == 0) {    
        n = n / i;
        i++;
    }  
	     
    if (n == 1)
        cout << i - 1 << endl;
    else 
        cout << "No" << endl;
    
    return 0;
}
