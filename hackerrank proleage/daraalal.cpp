#include <iostream>
#include <vector>

using namespace std;

int main(){

    int n, i, t, s = 0, j = 0, max = 0;

    cin >> n;

    vector<int> a;

    for (i = 1; i <= n; i++){
        s = 0;
        for (j = i; j > 0; j = j / 2)
            a.push_back(j % 2);
        for (j = 0; j < a.size(); j++){
            if (a[j] == 1)
                s++;
        }

        if (max < s){
            max = s;
            t = i;
        }else
            if (max == s)
                t = t + i;
        for (j = 0; j < a.size(); j++)
            a.pop_back();
    }   

    cout << t << endl;


    return 0;
}
