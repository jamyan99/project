#include <iostream>

using namespace std;

int main (){

    int n, s = 0, a = 0, l;

    cin >> n;
    
    l = n;

    while (n > 0) {
        s = n % 10;
        a = a * 10 + s;
        n = n / 10;
    }
    
    if (a == l) 
        cout << "YES" << endl;
    else 
        cout << "NO" << endl;
    
    return 0;
}
