#include<iostream>
using namespace std;
int addBonus(int a);
int addBonus(int a){
    return a+5;
}
int main(){
    int marks;
    cout<<"Enter your score from 0 to 100 : "<<endl;
    cin>>marks;
    cout<<"Your updated score is "<<addBonus(marks);
}