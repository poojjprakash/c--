#include<iostream>
using namespace std;
int parcelCharge(int parcels);
int parcelCharge(int parcels,int fee);
int parcelCharge(int parcels){
    return parcels*10;
}
int parcelCharge(int parcels,int fee){
    return parcels*fee;
}
    
int main(){
int par;
cout<<"Enter the number of chocolates"<<endl;
cin>>par;
int charr;
cout<<"Enter the charge :"<<endl;
cin>>charr;
cout<<parcelCharge(par)<<endl;
cout<<parcelCharge(par,charr)<<endl;

}