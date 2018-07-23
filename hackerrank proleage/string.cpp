#include <iostream>
#include <algorithm>
#include <string>
#include <vector>

using namespace std;

int main () {

    int n, i, s = 0;

    cin >> n;

    vector<string> a(n);

    for (i = 0; i < n; i++)
        cin >> a[i];

    sort(a.begin(), a.end());

    for (i = 0; i < n - 1; i++){
        if (a[i] == a[i + 1])
            s++;
    }

    cout << s << endl;

    return 0;
}
