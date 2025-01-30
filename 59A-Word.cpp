#include <iostream>
#include <string>
#include <string.h>

using namespace std;

int main()
{
    string word, result = "";
    cin >> word;
    int countLowerCase = 0;
    for (int i = 0; i < word.length(); i++)
    {
        if (islower(word[i]))
        {
            countLowerCase++;
        }
    }
    if (countLowerCase < (word.length() - countLowerCase))
    {
        for (int i = 0; i < word.length(); i++)
        {
            result += toupper(word[i]);
        }
    }
    else
    {
        for (int i = 0; i < word.length(); i++)
        {
            result += tolower(word[i]);
        }
    }
    cout << result;
    
}