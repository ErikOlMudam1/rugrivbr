#include <iostream>
#include <stdio.h>
#include <stdlib.h>

using namespace std;

int main(){
    int y,x,r=0;

    cout <<"Dime el numero x"<<endl;
    cin>>x;
    cout <<"Dime el numero y"<<endl;
    cin>>y;

    if (x<0 || y<0){
        cout<<"x i yhan de ser positius"<<endl;
    }
    else{
        r = (x+y)/2;
        cout <<"la  mitjana és :" <<r <<endl;
    }
    return 0;
}