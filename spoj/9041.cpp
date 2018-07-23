#include <iostream>

using namespace std;

int main (){
	
    int  n, i = 0, s = 1, a;
    
    cin >> a >> n;

    while(i < n) {
        
        s = s * a;

        i++;
    }
    
    cout << s << endl;

    return 0;

}
