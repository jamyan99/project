#include <iostream>

using namespace std;

int main (){

    int n, a, s = 0;

    cin >> n >> a;

    while (n > 0) {
        if (n % 10 == a)
        s++;
        n = n / 10;
    }
    
    cout << s << endl;
    
    return 0;
}
