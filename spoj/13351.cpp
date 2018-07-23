#include <iostream>
 
using namespace std;
 
int main(){
 
    int n, i = 0, s = 0, max;

    cin >> n;

    int a[n];

    for (i = 0; i < n; i++) 
    	cin >> a[i];
    
    max = a[0];

    for (i = 0; i < n; i++) {
        if (max < a[i])
        max = a[i];
    }
    
    for (i = 0; i < n; i++) {
        if (max == a[i])
        s++;
    }
    
    cout << max << " " << s << endl;
    
    return 0;
}
