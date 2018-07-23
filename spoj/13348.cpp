#include <iostream>
 
using namespace std;
 
int main(){
 
    int n, i = 0, s = 0, low = 0;

    cin >> n;

    int a[n];

    for (i = 0; i < n; i++) 
    	cin >> a[i];
    
    low = a[0];

    for (i = 0; i < n; i++) {
        if (low > a[i])
        low = a[i];
    }
    
    cout << low << endl;
    
    return 0;
}
