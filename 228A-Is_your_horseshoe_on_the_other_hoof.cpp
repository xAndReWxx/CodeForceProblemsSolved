#include <iostream>
#include <vector>
using namespace std;


int main()
{
    vector<int> Colors(4);
    vector<int> nonRepeatColor;
    cin >> Colors[0] >> Colors[1] >> Colors[2] >> Colors[3];
    nonRepeatColor.push_back(Colors[0]);
    for (int i = 1; i < 4; i++)
    {
        bool isRepeat = false;
        for (int j = 0; j < nonRepeatColor.size(); j++)
        {
            if (Colors[i] == nonRepeatColor[j])
            {
                isRepeat = true;
            }
        }
        if(!isRepeat)
        {
            nonRepeatColor.push_back(Colors[i]);
        }

    }
    cout << 4 - nonRepeatColor.size();
}




//----------------------------------------------------------------//


// Another Way



// int main()
// {
//     vector<int>Colors(4);
//     cin >> Colors[0] >> Colors[1] >> Colors[2] >> Colors[3];\
//     int result = 0;

//     for (int i = 0; i < Colors.size() - 1; i++)
//     {
//         for(int j = 0; j < Colors.size(); j++)
//         {
//             if (Colors[i] == Colors[j] && i != j)
//             {
//                 if (j == Colors.size() - 1)
//                 {
//                     result++;
//                     Colors.pop_back();
//                 }
//                 else{
//                     result++;
//                     Colors.erase(Colors.begin() + j);
//                     j--;
//                 }
//             }
//         }
//     }
//     cout << result;

// }

