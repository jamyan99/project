#include <iostream>
 
using namespace std;
 
int main(){
 
    int n, i = 0, max, l = 1;

    cin >> n;

    int a[n];

    for (i = 0; i < n; i++) 
    	cin >> a[i];

    max = a[0];

    for (i = 1; i < n; i++) {
        if (max < a[i]){
            max = a[i];
            l = i + 1;
        }
    }   
    
    cout << max << " " << l << endl;
       
    return 0;
 }
