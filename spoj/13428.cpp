#include <iostream>
 
using namespace std;
 
int main(){
 
    int n, s = 0;

    cin >> n;

    while (n > 1) {
        s = s + n * (n - 1);
        n = n - 2;
    }
    
    cout << s << endl;

    return 0;
}
