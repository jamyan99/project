#include <iostream>
 
using namespace std;
 
int main(){
 
    int n, s = 0;

    cin >> n;

    while (0 < n){
        s = s + n * (n + 1);
        n--;
    }
    
    cout << s << endl;

    return 0;
}
    
