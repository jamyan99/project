#include <iostream>

using namespace std;

int main(){

    long long n, s = 1, temp = 1, l = 1;

    cin >> n;
     
    while (n > 0){
        temp = l;
        l = s + temp;
        s = temp;
        n--;
    }
    
    cout << s << endl;
    
    return 0;
}