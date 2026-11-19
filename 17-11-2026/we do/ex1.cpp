#include<iostream>
using namespace std;
void add();
void add(int a,int b);
void add(int a,int b,int c);
int add1(int a,int b,int c);
int add1(int a,int b);
void add(){
    int a ,b;
    cout<<"Enter two numbers: "<<endl;
    cin>>a>>b;
    cout<<a+b<<endl;
}
void add(int a,int b){
    cout<<a+b<<endl;
}
void add(int a,int b,int c){
    cout<<a+b+c<<endl;
}
int add1(int a,int b){
    return a+b;
}
int add1(int a,int b,int c){
    return a+b+c;
}
int main(){
add();
add(12,34);
add(23,45,32);
cout<<add1(23,90)<<endl;
cout<<add1(45,65,343);
}