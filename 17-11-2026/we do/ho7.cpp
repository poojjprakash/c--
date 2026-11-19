#include<iostream>
using namespace std;
int twice(int amount);
int twice(int amount){
    return amount*2;
}
double twice(double amount);
double twice(double amount){
    return amount*2.0;
}
int main(){
int intval,dobval;
cout<<"Enter a integer value : "<<endl;
cin>>intval;
cout<<"Enter a doublel value : "<<endl;
cin>>dobval;
cout<<twice(intval)<<endl;
cout<<twice(dobval)<<endl;
}