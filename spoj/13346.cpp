#include <iostream>
 
using namespace std;
 
int main(){
 
    int n, i = 0, s = 0, l = 0;

    cin >> n;

    int a[n];

    for (i = 0; i < n; i++) 
    	cin >> a[i];

    for (i = 0; i < n; i++) {
        if (a[i] % 2 == 0)
        s++;
        else 
        l++;
    }
    
    if (l > s)
        cout << "YES" << endl;
    else
        cout << "NO" << endl;
    
    return 0;
}
