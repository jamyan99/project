#include <iostream>
 
using namespace std;
 
int main(){
 
    int n, i = 0, s = 0;

    cin >> n;

    int a[n];

    for (i = 0; i < n; i++) 
    cin >> a[i];

    for (i = 0; i < n; i++) {
        if (60 > a[i])
        s++;
    }
    
    cout << s << endl;

    return 0;
}
