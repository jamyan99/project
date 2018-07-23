#include <iostream>

using namespace std;

int main(){

    int a, b, c;

    cin >> a >> b >> c;

    if (a > b && a > c){
        if (a * a == b * b + c * c)
            cout << "Right" << endl;
        if (a * a < b * b + c * c) 
            cout << "Acute" << endl;
        if (a * a > b * b + c * c)
            cout << "Obtuse" << endl;
    }
    
    if (b > a && b > c){
        if (b * b == a * a + c * c)
            cout << "Right" << endl;
        if (b * b < a * a + c * c)
            cout << "Acute" << endl;
        if (b * b > a * a + c * c)
            cout << "Obtuse" << endl;
    } 
    
    if (c > a && c > b){
        if (c * c == b * b + a * a)
            cout << "Right" << endl;
        if (c * c < b * b + a * a)
            cout << "Acute" << endl;
        if (c * c > b * b + a * a)
            cout << "Obtuse" << endl;
    } 
       
    return 0;   
}
