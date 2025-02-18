#include <iostream>
using namespace std;
int t1 = 0;
int t2 = 1;
int nextnum;

int main()
{
    int n;
    cout << "enter the number of digits ";
    cin >> n;
    if (n >= 1)
    {
        cout << t1;
    }
    if (n >= 2)
    {
        cout << t2;
    }
    for (int i = 3; i <= n; i++)
    {
        nextnum = t1 + t2;
        cout << nextnum;
        t1 = t2;
        t2 = nextnum;
    }
}
