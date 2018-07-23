#include <iostream>

using namespace std;

int main(){

    int n, s = 1, i = 1, l = 0;

    cin >> n;

    while (i <= n) {
        s = s * i;
        l = l + s;
        i++;
    }
    
    cout << l << endl;

    return 0;
    
}
