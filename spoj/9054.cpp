#include <iostream>

using namespace std;

int main (){

    int  n, A, B, C, D, F;
    
    cin >> n;

    if (n > 89) 
        cout << "A" <<  endl;
        
    if (n < 90 && n > 79) 
        cout << "B" << endl;
        
    if (n < 80 && n > 69) 
        cout << "C" << endl;
        
    if (n < 70 && n > 59) 
        cout << "D" << endl;
        
    if (n <= 59) 
        cout << "F" << endl;

    return 0;
}
