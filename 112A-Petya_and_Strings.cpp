#include <iostream>
#include <string>
using namespace std;

int main()
{
    string fString, sString;
    cin >> fString >> sString;
    int fResult = 0;
    int sResult = 0;
    
    for (int i = 0; i < fString.length(); i++)
    {
        fString[i] = tolower(fString[i]);
        fResult += fString[i];
        sString[i] = tolower(sString[i]);
        sResult += sString[i];
    }
    cout << (fResult < sResult ? -1 : (sResult < fResult ? 1 : 0));
}