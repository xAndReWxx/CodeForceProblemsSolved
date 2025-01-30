#include <iostream>
using namespace std;

int main()
{
    int numberOfProblems = 0;
    int willSolved = 0;
    int Sohib, Andrew, Saber;

    cin >> numberOfProblems;
    while (numberOfProblems > 0)
    {
        cin >> Sohib >> Andrew >> Saber;

        if ((Sohib == 1 && Andrew == 1) || (Sohib == 1 && Saber == 1) || (Andrew == 1 && Saber == 1))
            willSolved++;

        numberOfProblems--;
    }

    cout << willSolved;
}
