#include <iostream>
 
using namespace std;
 
int main(){
 
    int n, i = 0, s = 0, x;

    cin >> n;

    int a[n];

    for (i = 0; i < n; i++) {
    	cin >> a[i];
    	cin >> x;
    }

    for (i = 0; i < n; i++) {
        if (x == a[i])
        s++;
    }
    
    cout << x << " " << s << endl;
       
    return 0;
}
