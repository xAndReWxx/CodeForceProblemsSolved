#include <iostream>
#include <set>
using namespace std;

int main()
{
    set<int> y;

    int size;
    cin >> size;
    int sn[size];
    for (int i = 0; i < size; i++)
        cin >> sn[i];

    y.insert(sn[0]);
    auto it = y.end();

    for (int i = 1, j = size; i < size; i++)
    {
        y.insert(sn[i]);
        if (j != sn[i])
            cout << " " << endl;
        else
        {
            cout << sn[i] << " ";
            j--;
            for (int x = i; x > 0; x--)
            {
                if (*it == j)
                {
                    cout << *it << " ";
                    j--;
                    it--;
                }
            }
            cout << endl;
        }
    }
    // 4 5 1 2 3
}
