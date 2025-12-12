#include<iostream>
#include<math.h>
using namespace std;
void PointDistance(int x1,int y1,int x2,int y2){
    float distance;
    distance= sqrt(pow(x2-x1,2)+ pow(y2-y1 , 2));
    cout<<distance;
}


int main(){
    int x1,y1,x2,y2;
    cin>>x1>>y1>>x2>>y2;
    PointDistance(x1,y1,x2,y2);
    return 0;
}