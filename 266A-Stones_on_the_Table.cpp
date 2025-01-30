#include <iostream>
#include <string>
using namespace std;

int main()
{
    int sto;
    cin >> sto;
    string Stones;
    cin >> Stones;
    int result = 0;

    for(int i = 0; i < Stones.length() - 1; i++)
    {
        if (Stones[i] == Stones[i + 1])
        {
            result ++;
        }
    }
    cout << result;
}