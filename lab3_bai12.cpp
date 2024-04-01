//TODO code
bool existred=false;
int m=3,n=3, i=0, j=0;
for(int i=0;i<m;i++){
for(int j=0;j<n;j++){
switch (pic[i][j]){
case 3:
existred=true;
case 4:
case 5:
pic[i][j]=1;
default:
break;
}
}
}
if (existred){
cout<<"Co mau do trong hinh\n";
}else{
cout<<"Khong co mau do trong hinh\n";
}
//End TODO code