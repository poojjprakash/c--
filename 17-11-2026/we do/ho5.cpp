#include<iostream>
using namespace std;
int hallCapacity=30;
int remainingSeats(int a);
int remainingSeats(int a){
    return hallCapacity-a;

}
int main(){
int noofoccupiedseats;
cout<<"Enter the number of occupied seats :"<<endl;
cin>>noofoccupiedseats;
cout<<"The capacity in the hall is :"<<hallCapacity<<endl;
cout<<"The remaining seats are "<<remainingSeats(noofoccupiedseats);
}