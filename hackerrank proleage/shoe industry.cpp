#include <iostream>
#include <string>
#include <vector>

using namespace std;

int main(){

    int n, i, j, k, s = 0, c = 0;

    cin >> n;

    char word;

    int a[n], b[n];


    for (i = 0; i < n; i++){
        cin >> k >> word;
        a[i] = k;
        b[i] = word; 
    }

    for (i = 0; i < n - 1; i++){
        for (j = 1; j < n && c == 0; j++){
            if (a[i] == a[j]){
                if (b[i] != b[j]){
                    s++;
                    a[i] = 0;
                    a[j] = 0;
                    b[i] = 0;
                    b[j] = 0;
                }
            }
            c = 0;
        }
    }

    cout << s << endl;

    return 0;
}
