#include <iostream>
#include <string> 
using namespace std;

int maxOfThree(int a, int b, int c)
{
    if (a >= b && a >= c)
        return a;
    else if (b >= a && b >= c)
        return b;
    else
        return c;
}
int minOfThree(int a, int b, int c)
{
    if (a <= b && a <= c)
        return a;
    else if (b <= a && b <= c)
        return b;
    else
        return c;
}

int main()
{
    int a, b, c;
    int maxvalue;

    cout << "Enter a integer: ";
    cin >> a;

    cout << "Enter b integer: ";
    cin >> b;

    cout << "Enter c integer: ";
    cin >> c;

    maxvalue = maxOfThree(a, b, c);
    cout << "The maximum value is: " << maxvalue << endl;

    maxvalue = minOfThree(a, b, c);
    cout << "The maximum value is: " << maxvalue << endl;

    return 1;
}
