#include<iostream>
#include<math.h>
using namespace std;
int main(){
    long int n,m,ntN;
    cout<<"Nhap so nguyen duong:";
    cin>>n;
m=2;
cout<<"So nguyen to thu "<<n<<" la ";
while (n>0){
long int i=int(sqrt(m));
bool nt=true;
while (nt&&i>1){
if (m%i==0){
nt=false;
}
i--;
}
if (nt){
n--;
ntN=m;
}
m++;
}
cout<<ntN;
return 0;
}