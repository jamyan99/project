#include <iostream>
 
using namespace std;
 
int main(){
 
    int n, s = 0, i = 1, l = 0;

    cin >> n;

    while (i <= n) {
        s = s + (i * (n - l));
        i++;
        l++;
    }
    
    cout << s << endl;

    return 0;
}
    
