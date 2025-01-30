#include <iostream>
using namespace std;

int main()
{
    int numOfTeams;
    cin >> numOfTeams;
    int teams[numOfTeams][2];
    int result = 0;
    for (int i = 0; i < numOfTeams; i++)
    {
        for (int j = 0; j < 2; j++)
        {
            cin >> teams[i][j];
        }
    }
    for (int i = 0; i < numOfTeams; i++)
    {
        for (int j = 0; j < numOfTeams; j++)
        {
            if (i == j) continue;
            if (teams[i][0] == teams[j][1])
            {
                result++;
            }
        }
        
    }
    cout << result;
}