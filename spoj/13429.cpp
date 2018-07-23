#include <iostream>
 
using namespace std;
 
int main(){
 
    int n, s = 0, i = 1;

    cin >> n;

    while (i < n) {
        s = s + i * (i + 1 ) * (i + 2);
        i++;
    }
    
    cout << s << endl;

    return 0;
}
