#include<iostream>
using namespace std;

int main(){

int size;
cout<<"Please enter the size of the array:";
cin>>size;

int arr[size];
cout<<"Please enter the elements of the array:";
for(int i=0;i<size;i++){
    cin>>arr[i];
}
cout<<"Array elements in normal order:";
for(int i=0;i<size;i++){
    cout<<arr[i]<<" ";
}
cout<<endl;
cout<<"Array elements in reverse order:";
for(int i=size-1;i>=0;i--){
    cout<<arr[i]<<" ";
}
return 0;
}
