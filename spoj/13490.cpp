#include <iostream>

using namespace std;

int main(){

    int n, ans1, ans2, ans, i = 3;

    cin >> n;

    if (n < 3)
    	cout << 1 << endl;
    else {
    	ans1 = 1;
    	ans2 = 1;
    	while (i <= n){
        	ans = ans1 + ans2;
        	ans1 = ans2;
        	ans2 = ans;
        	i++;
    	}
    	cout << ans << endl;
    }
    
    return 0;
}
