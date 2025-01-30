#include <iostream>
using namespace std;

int main()
{
    int priceOfShovel;
    int coin;
    cin >> priceOfShovel >> coin;

    for (int i = 1 ;; i++)
    {
        if ((i * priceOfShovel % 10) == coin || (i * priceOfShovel % 10) == 0)
        {
            cout << i;
            break;
        }
    }
}