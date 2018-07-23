#include <iostream>

using namespace std;

int main(){

    int n, i, s1, s2, a, b, c, s = 0;

    cin >> s1 >> s2;

    bool ans = true;

    for (a = 1; a * a < s2 && ans == true; a++){
        for (b = 1; (b * b) + (a * a) < s2 && ans == true; b++){
            c = s1 - a - b;
            if ((a * a) + (b * b) + (c * c) == s2){
                cout << a << " " << b << " " << c << endl;
                ans = false;
            } 
        }
    }

    if (ans == true)
        cout << -1 << endl;

    return 0;
}
