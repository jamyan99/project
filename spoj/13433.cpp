#include <iostream>

using namespace std;

int main(){

    int a, n, i = 1, s = 1, l = 0;

    cin >> a >> n;

    while (i <= n) {
        s = (s * a);
        l = l + s;
        i++;
    }
    
    cout << l +1 << endl;

    return 0;
}
    
