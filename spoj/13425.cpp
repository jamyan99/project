#include <iostream>
 
using namespace std;
 
int main(){
 
    int n, i = 1, s = 1;

    cin >> n;

    int a[n];

    while (i <= n) {
        s = s * i;
    	cout << i << "!" << "=" << s << endl;
    	i++;
    }
    
    cout << endl;

    return 0;
}
