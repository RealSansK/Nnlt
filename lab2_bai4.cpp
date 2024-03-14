#include <iostream>
using namespace std;
int main() {
int x, y;
cout<<" Nhap 2 so nguyen duong x va y\n";
cout<<"x=";
cin>>x;
cout<<"y=";
cin>>y;
if((x<0)||(y<0)){
    cout<<"Loi nhap du lieu";
}
else{
    x=x-y;
    x=x+y;
    y=x-y;
    cout<<"Hoan vi cua hai so nguyen lan luot la:"<< x;
    cout<<", "<< y;
}

return 0;
}