#include<iostream>
using namespace std;
int main(){
    int len,br;
    cout<<"Enter length and breadth of the area: "<<endl;
    cin>>len>>br;
    if(br>len){
        int temp=len;
        len=br;
        br=len;
    }

    while(br!=0){
       int tem=len%br;
       len=br;
       br=tem;
    }
    cout<<"The largest number tile is "<<len;
    return 0;
}