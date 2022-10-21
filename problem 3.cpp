#include<iostream>
using namespace std;

void count(int c,int d){
for(int i=c;i<=d;i++){
    if(i%2!=0){
        cout<<i<<" ";
    }
    }
    }

int main(){
    int a;
    int b;
    cout<<"Starting value:";
    cin>>a;
    cout<<"Ending value:";
    cin>>b;
    count(a,b);
    return 0;

}
