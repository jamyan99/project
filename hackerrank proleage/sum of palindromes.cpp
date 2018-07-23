#include <iostream>

using namespace std;

int main(){

    int a, b, n, s = 0, t = 0,  ans = 0;

    cin >> a >> b;

    for (; a < b; a++){
        n = a;
        do
        {
            t = n % 10;
            s = (s * 10) + t;
            n = n / 10;
        } while (n != 0);
        
        if (a == s){
            ans = ans + s;
        }
        s = 0;
        n = 0;
    }

    cout << ans << endl;

    return 0;
}
