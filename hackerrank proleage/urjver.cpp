#include <iostream>

using namespace std;

#define mod 100000000000000000

int main(){

    unsigned long long a, b, ans = 0, p;

    cin >> a >> b;

    p = a;

    while (b > 0){
        if (b % 2 == 1){
            ans = (ans + p) % mod;
        }
        p = (p + p) % mod;
        b = b / 2;
    }
    
    cout << ans << endl;


    return 0;
}
