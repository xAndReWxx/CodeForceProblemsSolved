#include <iostream>
#include <ctime>
#include <cstdlib>
#include <vector>
using namespace std;

int main()
{

    srand(time(0));
    vector<char> unique;

    int n, k;
    cin >> n >> k;
    for (int i = 0; i < n; i++)
    {
        char x;
        if (k--)
        {
            x = 'a' + i;
            cout << x;
            continue;
        }
        i = 
    }
}