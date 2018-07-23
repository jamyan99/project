#include <iostream>

using namespace std;

int main (){

    int n, a, i = 1, s = 1 ;

    cin >> a >> n;
    
    while (i <= n) {
        s = s * a;
        cout << a << "^" << i << "=" << s << endl;
        i++;
    }
    
    return 0;
}
