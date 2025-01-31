#include <iostream>
using namespace std;

int main()
{
    int num1, num2;
    int result = 0;
    cin >> num1 >> num2;

    if (num1 == 1 && num2 == 1)
    {
        cout << "1/1";
        return 0;
    }
    result = (num1 > num2 ? 7 - num1 : 7 - num2);
    if (result % 2 == 0)
        cout << result / 2 << "/" << 6 / 2;
    else if (result % 3 == 0)
        cout << result / 3 << "/" << 6 / 3;
    else
        cout << result << "/" << 6;
}