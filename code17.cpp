// finding roots of quadratic equation;
#include <iostream>
#include <cmath>
using namespace std;
int main()
{
    int a, b, c;
    float x1, x2;
    float dis;
    cout << "enter a , b and c for the equation :";
    cin >> a >> b >> c;
    dis = (b * b) - (4 * a * c);
    if (dis > 0)
    {
        x1 = (-b + sqrt(dis)) / (2 * a);
        x2 = (-b - sqrt(dis)) / (2 * a);
        cout << "roots are real and different " << x1 << "," << x2;
    }
    else if (dis == 0)
    {
        x1 = -b / (2 * a);
        cout << "the roots are real and equal" << x1 << "," << x1;
    }
    else
    {
        x1 = (-b + sqrt(dis)) / (2 * a);
        x2 = (-b - sqrt(dis)) / (2 * a);
        cout << "roots are imaginary and different " << -b / (2 * a) << "+" << "i" << sqrt(dis) / (2 * a) << endl;
        cout << -b / (2 * a) << "-" << "i" << sqrt(dis) / (2 * a) << endl;
    }
}