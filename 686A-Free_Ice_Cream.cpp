#include <iostream>
using namespace std;
 
int main()
{
    long long int people,iceCream,client;
    int rejected = 0;
    char opr;
 
    cin >> people >> iceCream;
    while (people--)
    {
         cin >> opr >> client;
        (opr == '+') ? (iceCream += client) : ((client > iceCream) ? (rejected++) : (iceCream-=client));
    }
 
    cout << iceCream << " " << rejected;
}