#include <iostream>
#include <string>
using namespace std;


int main()
{
    string input;
    int testCase;
    cin >> testCase;
    // string result[testCase];

    for(int i = 0; i < testCase; i++)
    {   
        cin >> input;
        string temp = input;
        if(input.length() > 10)
        {
            temp =  (char(input[0])) + to_string(input.length() - 2) + char(input[input.length() - 1]);
        }
        cout<<temp << endl;
        
    }
    
    
}