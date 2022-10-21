#include<iostream>
using namespace std;

int main(){

int size,counter1 =0,counter2 =0;
cout<<"Please enter the size of the array:";
cin>>size;

int *arr=new int[size];
cout<<"Please enter the elements of the array:";
for(int i=0;i<size;i++){
    cin>>arr[i];
    if(arr[i]%2==0){
        counter1++;
    }
    else{
        counter2++;
    }
    }
    cout<<counter1<<"Even Numbers"<<endl;
    cout<<counter2<<"Odd Numbers"<<endl;

    return 0;
}

