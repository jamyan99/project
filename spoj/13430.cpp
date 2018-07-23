#include <iostream>

using namespace std;

int main(){

    int n, s = 1, i = 1;
    cin >> n;

    while (i <= n){
        if (n % 2 == 0)
            s = s * (i + 1);
        else 
            s = s * i;
        
        i = i + 2;
    } 

    cout << s << endl;

    return 0;
}
    

