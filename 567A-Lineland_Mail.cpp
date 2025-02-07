#include <iostream>
#include <cmath>
using namespace std;
typedef int long long  LL;


int main()
{
    int n;
    cin >> n;
    LL pos[n];

    for (int i = 0; i < n; i++)
    {
        cin >> pos[i];
    }

    cout << (pos[1] - pos[0]) << " " << (pos[n - 1] - pos[0]) << endl;

    for (int i = 1; i < n - 1; i++)
    {
            LL minx = min((pos[i+1] - pos[i]), (pos[i] - pos[i-1])); 
            LL maxx = max((pos[n - 1] - pos[i]),(pos[i] - pos[0]));
            cout << minx << " " << maxx << endl;
    }
    cout << (pos[n - 1] - pos[n - 2]) << " " << (pos[n - 1] - pos[0]);
}