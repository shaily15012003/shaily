#include<iostream>
using namespace std;

int main(){
    int a[3][3];
    int b[3][3];
    int c[3][3];
    int sum[3][3];
    cout<<"Please enter the elements of the first array:"<<endl;
for(int i=0;i<3;i++){
for(int j=0;j<3;j++){
    cout<<"a["<<i<<"]["<<j<<"]:";
    cin>>a[i][j];
}
cout<<endl;
}
cout<<"Please enter the elements of the second array:"<<endl;
for(int i=0;i<3;i++){
for(int j=0;j<3;j++){
    cout<<"b["<<i<<"]["<<j<<"]:";
    cin>>b[i][j];
}
cout<<endl;
}
cout<<"Please enter the elements of the third array:"<<endl;
for(int i=0;i<3;i++){
for(int j=0;j<3;j++){
    cout<<"c["<<i<<"]["<<j<<"]:";
    cin>>c[i][j];
}
cout<<endl;
}
for(int i=0;i<3;i++){
for(int j=0;j<3;j++){
 sum[i][j]=a[i][j]+b[i][j]+c[i][j];
}
}
cout<<"Array after adding"<<endl;
for(int i=0;i<3;i++){
for(int j=0;j<3;j++){
 cout<<sum[i][j]<<" ";
}
cout<<endl;
}
return 0;
}


