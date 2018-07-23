#include <iostream>

using namespace std;

int main (){
	
    int  n, i = 0, s = 1, x;
    
    cin >> n >> x;

    while(i <= n) {
        
        s = n * x;

        i++;
    }
    
    cout << s << endl;

    return 0;

}
