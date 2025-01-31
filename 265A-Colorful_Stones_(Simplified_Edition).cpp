#include <iostream>
#include <string>
using namespace std;



int main()
{
    string Instraction;
    string Pos;
    int result = 1;
    cin >> Instraction >> Pos;

    for(int i = 0, j = 0; i < Instraction.length() && j < Pos.length();j++)
    {
        if(Instraction[i] == Pos[j])
        {
            result++;
            i++;
        }
    }
    cout << result;

}