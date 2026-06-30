#include<iostream>
#include<string>
using namespace std;
int a[50];
string n[50];
int b[50];
int t=0;
int main()
{
int c;
while(1)
{
cout<<"\n--- MY BANK MENU \n";
cout<<"1. Add\n2. Deposit\n3. Cut money\n4. Check\n5. Show list\n6. Exit\n";
cout<<"choose: ";
cin>>c;
if(c==6){
cout<<"exit\n";
break;
}
if(c==1){
cout<<"enter accno: ";
cin>>a[t];
cout<<"enter name: ";
cin>>n[t];
cout<<"enter money: ";
cin>>b[t];
t=t+1;
cout<<" successfully add\n";
}
else if(c==2){
int money,num,f=0;
cout<<"enter accno: ";
cin>>num;
for(int i=0;i<t;i++){
if(a[i]==num){
cout<<"entr money: ";
cin>>money;
b[i]=b[i]+money;
cout<<" current money="<<b[i]<<"\n";
f=1;
break;
}
}
if(f==0){
cout<<"wrong account numbner\n";
}
}
else if(c==3){
int money,num,f=0;
cout<<"enter accno: ";
cin>>num;
for(int i=0;i<t;i++){
if(a[i]==num){
cout<<"withdrawl amount: ";
cin>>money;
if(money>b[i]){
cout<<"minimum  balance\n";
}
else{
b[i]=b[i]-money;
cout<<"money left="<<b[i]<<"\n";
}
f=1;
break;
}
}
if(f==0){
cout<<"accno  wrong\n";
}
}
else if(c==4){
int num,f=0;
cout<<"enter accno to search: ";
cin>>num;
for(int i=0;i<t;i++){
if(a[i]==num){
cout<<"naam="<<n[i]<<"\n";
cout<<"paisa="<<b[i]<<"\n";
f=1;
break;
}
}
if(f==0){
cout<<"not found \n";
}
}
else if(c==5){
if(t==0){
cout<<"money not available\n";
}
for(int i=0;i<t;i++)
{
cout<<a[i]<<" -> "<<n[i]<<" -> "<<b[i]<<"\n";
}
}
else
{
cout<<"wrong input \n";
}
}
return 0;
}
