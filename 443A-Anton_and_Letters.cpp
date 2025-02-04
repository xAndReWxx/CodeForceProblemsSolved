#include <iostream>
#include <string>
#include <vector>
#include <set>
using namespace std;
int main()
{
    string input;
    set <char> result;
    getline(cin,input);


    for(int i =0; i < input.size(); i++ ){
        if(input[i] >='a' && input[i] <= 'z'){
            result.insert(input[i]);
        }
    }

 cout<<result.size();
}