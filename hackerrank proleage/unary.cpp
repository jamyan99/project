#include <iostream>

using namespace std;

int main(){

    long long t, n, i, k = 3, j = 1, count = 2, ans, s = 0;

    cin >> n;

    for(i = 0; i < n; i++){
        cin >> t;
        for(; s == 0; count++){
            if (t == j || t == k)
                s = 1;
            if (j > t && t < k){
                ans = 1;
                s = 1;
            }

            j = j + count;
            k = k + count + 1;
        }

        s = 0;
        k = 3;
        j = 1;
        
        cout << ans << endl;
        count = 2;
        ans = 0;
    }

    cout << endl;

    return 0;
}

