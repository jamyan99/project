#include <iostream>
 
using namespace std;
 
int main(){
 
    int n, i = 0, s = 0, x;

    cin >> n;

    int a[n];

    while (i < n) {
        cin >> a[i];
        i++;
    }
    
    cin >> x;

    i = 0;
        
    while (i < n && s == 0) {
        if (a[i] == x)
        s++;
        i++;
    }
    
    if (s == 0)
    	cout << "NO" << endl;
    else
    	cout << "YES" << endl;
   
    return 0;
}
