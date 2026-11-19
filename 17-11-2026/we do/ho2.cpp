#include <iostream>
using namespace std;
int printDemo();
int printDemo(){
    int count=3;
    return count;
}
int main(){
    int count;
    cout<<"Enter the visitor count "<<endl;
    cin>>count;
    cout<<printDemo()<<endl;
    cout<<count;
}