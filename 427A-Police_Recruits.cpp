#include <iostream>
using namespace std;
int main()
{

    int police = 0, crimes = 0;
    int events, in;
    cin >> events;
    int input[events];

    for (int i = 0; i < events; i++)
    {
        cin >> in;
        
        if (in == -1)
        {
            if (police > 0)
            {
                police--;
            }
            else
            {
                crimes++;
            }
        }
        else
        {
            police+=in;
        }
    }

    cout << crimes;
}