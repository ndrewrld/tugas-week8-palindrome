#include <iostream>
#include <string>
#include <cctype>

using namespace std;

bool palindrome(string text)
{
   
    for (int i = 0; i < text.length(); i++) {
        text[i] = tolower(text[i]);
    }

    for (int i = 0; i < text.length() / 2; i++)
    {
        if (text[i] != text[text.length() - i - 1])
        {
            return false;
        }
    }
    return true;
}

int main()
{
    string kata;
    cout << "masukkan kata: ";
    getline(cin, kata);

    if (palindrome(kata))
    {
        cout << kata << " ini adalah kata palindrome" << endl;
    }
    else
    {
        cout << kata << " bukan kata palindrome" << endl;
    }

    return 0;
}