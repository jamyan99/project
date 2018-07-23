#include <iostream>

using namespace std;

int main(){

    int n, i = 0, s, l = 1;

    cin >> n;

    while (i < n) {
        while (n - i >= l){
            cout << l << " ";
            l++;
        }
        
        l = 1;
        i++; 
        
        cout << endl;
    }

    return 0;

}

