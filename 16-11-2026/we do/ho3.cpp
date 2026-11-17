#include<iostream>
using namespace std;
int addFunc(int a,int b);
int addFunc(int a,int b){
    int sum=a+b;
    return sum;
}
int main(){
int mark1,mark2;
cout<<"Enter two marks: "<<endl;
cin>>mark1>>mark2;
cout<<"The sum is "<<addFunc(mark1,mark2);
}