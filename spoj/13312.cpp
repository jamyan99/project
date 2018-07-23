#include <iostream>

using namespace std;

int main(){

    int n, i = 0, c = 1;

    cin >> n;

    while (i < n) {
        c = n;
        
        while (c > i) {
            cout << c << " ";
            c--;
        }
        
        i++;
        
        cout << endl;
    } 
    
    return 0;

}
