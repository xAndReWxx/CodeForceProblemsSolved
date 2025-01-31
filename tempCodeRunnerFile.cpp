#include <iostream>
using namespace std;


int main()
{
    int Colors[4];
    cin >> Colors[0] >> Colors[1] >> Colors[2] >> Colors[3];
    
    int result = 0;

    for (int i = 0; i < 4; i++)
    {
        for (int j = i + 1; j < 4; j++)
        {
            if (Colors[i] == Colors[j])
            {
                result++;
            }
            if(result == 3)
            {
                cout << result;
                return 0;
            }
        }
    }
    cout << result;
}
