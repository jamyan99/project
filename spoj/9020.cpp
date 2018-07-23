#include <iostream>

using namespace std;

int main (){
	
    int  n, i = 1, s = 1;
    
    cin >> n;

    while(i <= n) {
        s = s * i;
        i++;
    }
    
    cout << s << endl;

    return 0;

}
