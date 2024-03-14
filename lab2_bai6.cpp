#include <iostream>
#include<cmath>
using namespace std;
int main() {
int ngay, thang, nam; float L; 
cout<<"Nhap ngay thang nam sinh cua ban de tinh so lan sinh nhat\n";
cout<<"Ngay sinh:";
cin>>ngay;
cout<<"Thang sinh:";
cin>>thang;
cout<<"Nam sinh:";
cin>>nam;

if(ngay==29&&thang==2){
 L=(2000-nam)/4;
}
else {
    L=2000-nam;
}
 cout<<"So lan sinh nhat la:"<<L;
return 0;
}