#include <iostream>
#include <vector>
using namespace std;

int main()
{
    int Sereja = 0, dima = 0;
    int numberOfCardes;
    bool SerejaTurn = true;
    cin >> numberOfCardes;

    vector<int> cards(numberOfCardes);


    for (int i = 0; i < numberOfCardes; i++)
    {
        cin >> cards[i];
    }

    for (int i = 0; cards.size() > 0;)
    {
        if (cards.size() == 1 && SerejaTurn)
        {
            Sereja += cards[i];
            break;
        }
        else if (cards.size() == 1 && !SerejaTurn)
        {
            dima += cards[i];
            break;
        }

        if ((cards[i] > cards[cards.size() - 1]))
        {
            if (SerejaTurn)
            {
                Sereja += cards[i];
                cards.erase(cards.begin());
                SerejaTurn = !SerejaTurn;
            }
            else
            {
                dima += cards[i];
                cards.erase(cards.begin());
                SerejaTurn = !SerejaTurn;
            }
        }
        else
        {

            if (SerejaTurn)
            {
                Sereja += cards[cards.size() - 1];
                cards.erase(cards.end()-1);
                SerejaTurn = !SerejaTurn;
            }
            else
            {
                dima += cards[cards.size() - 1];
                cards.erase(cards.end() -1);
                SerejaTurn = !SerejaTurn;
            }
        }
    }
    cout << Sereja << " " << dima;
    return 0;
}