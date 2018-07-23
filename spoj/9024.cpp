#include <iostream>

using namespace std;

int main (){
	
    int  n, i = 0, s = 1;
    
    cin >> n;

    while(i < n) {
        
        s = s * 2;

        i++;
    }
    
    cout << s << endl;

    return 0;

}
