#include<iostream>
using namespace std;
#include<cmath>
float sqrtFunc(int a);
float sqrtFunc(int a){
return sqrt(a);
}
int main(){
    int a;
    cout<<"Enter a value :"<<endl;
    cin>>a;
    cout<<"The square root value is "<<sqrtFunc(a)<<endl;
}