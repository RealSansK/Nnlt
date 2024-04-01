#include<iostream>
using namespace std;
int main(){
cout<<"Nhap so nguyen duong: ";
long int n;
cin>>n;
cout<<n<<"=";
long int i=2;
while (n!=1){
int ipow=0;
while (n%i==0){
ipow++;
n/=i;
}
if (ipow){
cout<<"("<<i<<"^"<<ipow<<")";
}
i++;
}
return 0;
}
