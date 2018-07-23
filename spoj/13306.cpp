#include <iostream>

using namespace std;

int main(){

    int n, i = 1, s, l;

    cin >> n;

    while (i <= n) {
        s = i;
        l = 1;
        
        while (l <= s) {
            cout << l << " ";
            l++;
        }
        
        i++; 
        
        cout << endl;
    }

      return 0;

}

