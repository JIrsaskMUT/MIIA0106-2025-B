#include <iostream>
using namespace std;

double circleArea(double radius)
{
    return 3.14 * radius * radius;
}

double rectArea(double width, double height)
{
    double result = width * height;
    return result;
}

int main()
{
    double radius;
    double result;

    cout << "Enter the radius: ";
    cin >> radius;

    result = circleArea(radius);
    cout << "The area of the circle is: " << result << endl;

    double width, height;
    cout << "Enter width: ";
    cin >> width;
    cout << "Enter height: ";
    cin >> height;

    result = rectArea(width, height);
    cout << "The area of the rectangle is: " << result << endl;

    return 0;
}
