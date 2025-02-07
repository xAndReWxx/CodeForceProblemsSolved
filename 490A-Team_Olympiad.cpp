#include <iostream>
#include <algorithm> 
#include <vector>
using namespace std;

int main()
{
    int numOfCh, w;
    cin >> numOfCh;
    vector<int> childrens(numOfCh);
    int f[3]={0};
    
    for(int i = 0; i < numOfCh; i++)
    {
        cin>>childrens[i];
        childrens[i]==1 ? f[0]++:
                                childrens[i]==2 ? f[1]++ :f[2]++ ;

        

    }
    int teams = min(f[0],min(f[1],f[2])) ;
    cout<<teams<<endl;

    for(int i = 0 ; i < teams; i++){

        for(int j =1; j <= 3; j++){
            auto it = find(childrens.begin(), childrens.end(), j);
            int index = distance(childrens.begin(),it);
            cout<< index+1<<" ";
            childrens[index] = 0;

        }


        cout<<endl;
    }



}