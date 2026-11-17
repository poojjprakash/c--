#include<iostream>
using namespace std;
#include<cstdlib>
int diff(int a,int b);
int diff(int a,int b){
    return abs(a-b);

}
int main(){
    int temp1,temp2;
    cout<<"Enter two temperatures"<<endl;
    cin>>temp1>>temp2;
    cout<<diff(temp1,temp2);

}