#include <iostream>
#include <string>
#include <vector>

using namespace std;

int main(){

    vector<int> a;

    long long  i, len, s = 0, l, ans = 0;

    string n;

    cin >> n;

    len = n.length();

    for (i = 0; i <= len; i++){
        if (n[i] >= 48 && n[i] <= 57){
            l = n[i] - 48;
            s = (s * 10) + (l % 10);
        }else{
            ans = ans + s;
            s = 0;
        }
    }
    
    do{
        a.push_back(ans % 2);
        ans = ans / 2;
    }while (ans > 0);

    for (i = 0; i < a.size() / 2; i++)
        swap(a[i], a[a.size() - i - 1]);
    
    for (i = 0; i < a.size(); i++)
        cout << a[i];

    cout << endl;
    
    return 0;
    
}
