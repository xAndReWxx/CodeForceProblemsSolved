#include <iostream>
using namespace std ;

int main (){
    int numOfOranges;
    int sizeOfJuicer;
    int sizeOfWaste;
    cin >> numOfOranges >> sizeOfJuicer >> sizeOfWaste;
    int Oranges;
    int Waste = 0;
    int result = 0;

    for(int i = 0; i < numOfOranges; i++)
    {
        cin >> Oranges;
        
        if(Oranges > sizeOfJuicer)
        {
            continue;
        }
        if((Waste+= Oranges) > sizeOfWaste)
        {
            result++;
            Waste = 0;
        }
    } 
    cout << result;
    
}