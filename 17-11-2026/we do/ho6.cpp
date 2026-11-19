#include<iostream>
using namespace std;
int perimeter(int side);
int perimeter(int len,int br);
int perimeter(int len, int br){
    return 2*len*br;
}
int perimeter(int side){
return 4*side;
}
int main(){
    int side,len,br;
    cout<<"Enter the side of the square : "<<endl;
    cin>>side;
    cout<<"Enter the length and breadth of the rectangle : "<<endl;
    cin>>len>>br;
    cout<<"The perimeter of the square is "<<perimeter(side)<<endl;
    cout<<"The perimeter of the rectangle is "<<perimeter(len,br)<<endl;
    

}