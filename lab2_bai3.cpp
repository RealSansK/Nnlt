#include <iostream>
using namespace std;
int main() {
float a, b, c, denta;
    cout << "Nhap a, b, c vao phuong trinh bac 2 ax^2 +bx+ c=0\n";
    cout <<"a=";
    cin >> a;
    cout <<"b=";
    cin>> b;
    cout <<"c=";
    cin >>c;
    if (a==0){
        if(b==0){
            if (c==0){
                cout<<"Phuong tring vo so nghiem";
            }
            else { cout<<"Phuong trinh vo nghiem";}
        }
        else {cout<<"Phuong trinh co mot nghiem duy nhat";}
    }
    else{
        denta= b*b- a*c;
        if (denta>0){
            cout<<"Phuong trinh co hai nghiem";
        }
        else if(denta=0){
            cout<<" Phuong trinh co mot nghiem";
        }
        else{ cout <<"Phuong trinh vo nghiem";}
    }
    return 0;

}