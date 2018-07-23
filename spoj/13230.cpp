#include <iostream>

using namespace std;

int main (){

    int n, x, s = 1;

    cin >> n;

    x = n;
    
    while (x % 3 == 0) {
        x = x / 3;
    }
    
    cout << x << endl;
        
    return 0;
}
