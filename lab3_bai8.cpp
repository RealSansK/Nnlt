#include<iostream>
using namespace std;
int main()
{
float sum=0;
int num;
do{
cout<<"Hay nhap vao mot nguyen duong N:";
cin>>num;
}while(num<=0);
for(int i=1; i<=num; i++)
{
sum+=(float)1/(i*i);
}
 cout <<"Tong nghich dao binh phuong cac so tu 1 den "<<num<<" la "<<sum;
 
 }