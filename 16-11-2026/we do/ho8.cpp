#include<iostream>
using namespace std;
int greatest(int a,int b,int c);
int greatest(int a ,int b,int c){
    if(a>b&&a>c){
        return a;
    }
    else if(b>c){
        return b;
    
    }
    else{
        return c;
    }
}
int main(){
    int num1,num2,num3;
    cout<<"Enter three numbers :"<<endl;
    cin>>num1>>num2>>num3;
cout<<"The greatest of these numbers is "<<greatest(num1,num2,num3);
}