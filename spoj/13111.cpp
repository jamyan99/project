#include <iostream>

using namespace std;

int main(){

   int a, b, c, t, l, i;

	cin >> a >> b >> c;

	if (a <= 97)
		a = a - 32;
	else
	    t = a;
	if (b <= 97)
	   b = b - 32;
	else
	    l = b;
	if (c <= 97)
	   c = c - 32;
	else
	    i = c;
	   
   	cout << t <<  l << i << endl;

    return 0;
}
