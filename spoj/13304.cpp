#include <iostream>

using namespace std;

int main(){

    int n, i = 0, s;

    cin >> n;

    while (i < n) {
        s = 1;
        
        while (s <= n) {
            cout << s;
            s++;
        }
        
        i++; 
        
        cout << endl;
    }

    return 0;

}

