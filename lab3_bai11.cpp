#include<iostream>
using namespace std;
int main(){
cout<<"Nhap so nguyen duong n:";
long int n;
cin>>n;
long int gt=1;
for(long int i=2;i<=n;i++){
gt=gt*i;
}
cout<<n<<"!="<<gt<<endl;
cout<<"So hang tram la "<<(gt%1000)/100<<endl;
cout<<"So hang chuc la "<<(gt%100)/10<<endl;
return 0;
}