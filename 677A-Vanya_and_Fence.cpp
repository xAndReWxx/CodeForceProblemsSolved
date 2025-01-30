#include <iostream>
using namespace std;

int main()
{
    int numOfFriends = 0;
    int hightOfFence = 0;
    int friends;
    int result = 0;
    cin >> numOfFriends >> hightOfFence;
    for(int i = 0; i < numOfFriends; i++)
    {
        cin >> friends;
        if (friends > hightOfFence)
            result += 2;
        else
            result++;
    }
    cout << result;
    
    
}