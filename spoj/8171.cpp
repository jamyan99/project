#include <iostream>

using namespace std;

int main(){

    int a, b;

    cin >> a;
    cin >> b;
    // cin >> a >> b;

    int max;

    if (a > b){
        max = a;
    }else{
        max = b;
    }

    int s = 0;

    s = a + b; 
    cout << s << endl;
    
    int n, i;
    cin >> n;
    int A[n];

    for (i = 0; i < n; i = i + 1){
        cin >> A[i];
    }

    return 0;
}
