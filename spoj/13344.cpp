#include <iostream>
 
using namespace std;
 
int main(){
 
    int n, i = 0, s = 0;

    cin >> n;

    int a[n];

    for (i = 0; i < n; i++) 
    	cin >> a[i];

    for (i = 0; i < n; i++) {
    	if (a[i] > 0)
    	s = s + a[i];
    }

    cout << s << endl;
    
    return 0;
}

    

