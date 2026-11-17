#include<iostream>
using namespace std;
float triFunc(int b,int h){
    float area=0.5*b*h;
    return area;
}
int main(){
    int b,h;
    cout<<"Enter the base and height : "<<endl;
    cin>>b>>h;
    cout<<triFunc(b,h);
}