#include <iostream>

using namespace std;

int main(){

    int n, i = 0, c = 0, l = 1;

    cin >> n;

    while (i < n) {
        c = n;
        l = i + 1;
        
        while (l > 0) {
            cout << c << " ";
            l--;
            c--;
        }
        
        i++; 
        
        cout << endl;
    }

    return 0;

}
