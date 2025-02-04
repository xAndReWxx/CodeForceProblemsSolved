#include <iostream>
using namespace std;

int main()
{

    int wires = 0, kills = 0, targetWire = 0, targetBaird = 0;
    cin >> wires;
    int arr[wires];
    for (int i = 0; i < wires; i++)
    {
        cin >> arr[i];
    }
    cin >> kills;

    while (kills > 0)
    {
        cin >> targetWire >> targetBaird;
        if (targetWire == wires)
        {

            arr[targetWire - 2] += targetBaird - 1;

            arr[targetWire - 1] = 0;
        }
        else if (targetWire == 1)
        {

            arr[targetWire] += arr[targetWire - 1] - targetBaird;
            arr[targetWire - 1] = 0;
        }
        else
        {

            arr[targetWire - 2] += targetBaird - 1;
            arr[targetWire] += arr[targetWire - 1] - targetBaird;
            arr[targetWire - 1] = 0;
        }

        kills--;
    }

    for (int i = 0; i < wires; i++)
    {
        cout << arr[i] << endl;
    }
}
