#include <iostream>
#include <vector>
using namespace std;

int main()
{
    int serega = 0, dima = 0;
    int numberOfCardes;
    bool SerejaTurn = true;
    cin >> numberOfCardes;

    vector<int> cardes(numberOfCardes);


    for (int i = 0; i < numberOfCardes; i++)
    {
        cin >> cardes[i];
    }

    for (int i = 0; cardes.size() > 0;)
    {
        if (cardes.size() == 1 && SerejaTurn)
        {
            serega += cardes[i];
            break;
        }
        else if (cardes.size() == 1 && !SerejaTurn)
        {
            dima += cardes[i];
            break;
        }

        if ((cardes[i] > cardes[cardes.size() - 1]))
        {
            if (SerejaTurn)
            {
                serega += cardes[i];
                cardes.erase(cardes.begin());
                SerejaTurn = !SerejaTurn;
            }
            else
            {
                dima += cardes[i];
                cardes.erase(cardes.begin());
                SerejaTurn = !SerejaTurn;
            }
        }
        else
        {

            if (SerejaTurn)
            {
                serega += cardes[cardes.size() - 1];
                cardes.erase(cardes.end()-1);
                SerejaTurn = !SerejaTurn;
            }
            else
            {
                dima += cardes[cardes.size() - 1];
                cardes.erase(cardes.end() -1);
                SerejaTurn = !SerejaTurn;
            }
        }
    }
    cout << serega << " " << dima;
    return 0;
}