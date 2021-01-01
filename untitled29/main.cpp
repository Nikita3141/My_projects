#include <iostream>
using namespace std;

int fact(int n)
{
    int f;
    if (n == 0)
        f = 1;
    else
        f = n * fact(n - 1);
    return f;
}


int main()
{
	int count;
    cout << "Enter count: " << endl;
	    while((cin >> count)) {
            if (count < 0) break;
         cout << "the factorial of the number is" << " " << fact(count) << endl;
         cout << "Enter count: " << endl;
	    }
	return 0;
}
