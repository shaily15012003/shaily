#include<iostream>
using namespace std;
void factorial(int b){
int fact=1;
bool flag=true;
for(int i=2;i<b;i++){
    if(b%i==0){
        flag=false;
        break;
    }
}
if(flag){
for(int i=1;i<=b;i++){
    fact=fact*i;
}
}
if(flag){
    cout<<fact;
}
else{
 cout<<"Error!This is not a prime number"<<endl;
}

}

int main(){
    int a;
    cout<<"Please enter a number :";
    cin>>a;
    factorial(a);
    return 0;
}
