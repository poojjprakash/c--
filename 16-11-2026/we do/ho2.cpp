#include<iostream>
using namespace std;
#include<string>
string nameFun(string name);
string nameFun(string name){
    cout<<"Hello,"<<name<<endl;
    return 0;
}
int main(){
string name;
cout<<"Enter your name: "<<endl;
getline(cin,name);
nameFun(name);
}