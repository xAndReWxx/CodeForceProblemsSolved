#include<iostream>
using namespace std;

int main()
{
    int matrix[5][5] = {0};
    int indexOfRow = 0, indexOfColum = 0;
    int result = 0; 
    for (int i = 0; i < 5; i++)
    {
        for(int j = 0; j < 5; j++)
        {
            cin >> matrix[i][j];
            if (matrix[i][j] == 1)
            {
                indexOfRow = i;
                indexOfColum = j;
                break;
            }
        }
    }
    result += (indexOfRow > 2 ? indexOfRow - 2 : 2 - indexOfRow);
    result += (indexOfColum > 2 ? indexOfColum - 2 : 2 - indexOfColum);
    cout << result;
}