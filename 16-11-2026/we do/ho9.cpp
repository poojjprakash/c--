#include<iostream>
using namespace std;
int Num();
int oddOrEven(int num);
int oddOrEven(int num){
    int count=0;
    for(int i=1;i<=num;i++)
    if(i%2==0){
        count++;
    }
    return count;
}
int Num(){
    int n;
    cout<<"Enter a number; "<<endl;
    cin >>n;
    return n;
}
int main(){
   int num=Num();
if(0<=num<=1000){
    cout<<oddOrEven(num);
}
}