#include <iostream>
using namespace std;
int main()
{
    char c;
    cout << "enter the character ";
    cin >> c;
    if (!isalpha(c))
    {
        cout << "not a character plz enter a character";
    }
    else if (c == 'a' || c == 'A' || c == 'e' || c == 'E' || c == 'i' || c == 'I' || c == 'o' || c == 'O' || c == 'u' || c == 'U')
    {
        cout << "its a vowel";
    }
    else
    {
        cout << "its a consonant";
    }
}