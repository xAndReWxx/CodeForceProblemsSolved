#include <iostream>
#include <string>

using namespace std;

int main()
{
    int cal[4];
    string num;
    int result = 0;
    for (int i = 0; i < 4; i++)
    {
        cin >> cal[i];
    }
    cin >> num;

    for (int i = 0; i < num.length(); i++)
    {
        int x = num[i] - '0';
        for (int j = 0; j < 4; j++)
        {
            if (j + 1 == x)
            {
                result += cal[j];
            }
        }
    }
    cout << result;
}