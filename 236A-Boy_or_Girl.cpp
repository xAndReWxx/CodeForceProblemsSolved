#include <iostream>
#include <string>
using namespace std;

int main()
{
    string name;
    string result = "";
    cin >> name;
    for (char ch : name)
    {
        bool check = true;
        for (int i = 0; i < result.length(); i++)
            if (result[i] == ch)
            {
                check = false;
                break;
            }
        if (check) result += ch;
    }
    cout << (((result.length() + 1) % 2 == 0) ? "IGNORE HIM!" : "CHAT WITH HER!");
}