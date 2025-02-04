#include <iostream>
using namespace std;

int main (){
    int numOfCakes, time, cabasity,build;

    cin>>numOfCakes>>time>>cabasity>>build;
    int ov1=0, ov2=0;
    ov1 = (numOfCakes/cabasity) * time;
    if((cabasity*build)/time >= cabasity){
        ov2+=build;
        numOfCakes -= cabasity;

    }else{
        ov2+=build;
    }

}