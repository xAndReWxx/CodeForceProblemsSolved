#include <iostream>
#include <string>
#include <cmath>
using namespace std;

int main()
{
    string input;
    int result = 0, temp;
    cin >> input;
    input = "a" + input;
    for (int i = 0; i < input.length() - 1; i++)
    {
        temp = abs(input[i] - input[i + 1]);
        if(temp > 13){
            temp = 26 - temp;
        }

        result +=temp;
    }
    cout<<result;






}


