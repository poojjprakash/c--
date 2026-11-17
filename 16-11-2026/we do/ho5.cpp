#include<iostream>
using namespace std;
int readChoice();
int readChoice(){
    int a;
    cout<<"Enter your choice: "<<endl;
    cin>>a;
    return a;
}
int main(){
    int choice = readChoice();
    if(choice != 1 && choice != 2){
       int choice2= readChoice();
        
    }
    else{
        cout<<"Your choice is "<<choice<<endl;
    }
}
