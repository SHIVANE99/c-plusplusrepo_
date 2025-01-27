#include <iostream>
using namespace std;
int main()
{
    int x = 0, y = 0;
    char move;
    cout << "enter (U D L R):";
    cin >> move;
    switch (move)
    {
    case 'U':
        y++;
        break;
    case 'D':
        y--;
        break;
    case 'L':
        x--;
        break;
    case 'R':
        x++;
        break;
    default:
        cout << "no case match";
        break;
    }
    cout << "new positions are " << x << " " << y;
}