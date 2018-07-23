#include <iostream>

using namespace std;

int main (){

    int n, l, i = 1, s = 0 ;

    cin >> n >> l;
    
    while (i < 11) {
        s = n * i;
        cout << n << "*" << i << "=" << s << endl;
        i++;
    }
    
    return 0;
}
