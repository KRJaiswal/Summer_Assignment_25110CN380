#include<iostream>
#include<string>
using namespace std;
int t[100];
string n[100];
string m[100];
int s=0;
int main()
{
int c;
while(1)
{
cout<<"\n=== TRAIN SYSTEM ===\n";
cout<<"1. Book\n2. Show\n3. Find\n4. Cancel\n5. Exit\n";
cout<<"choose: ";
cin>>c;
if(c==5){
cout<<"bye bye!!\n";
break;
}
if(c==1){
if(s>=100){
cout<<"no seats left!!\n";
}else{
cout<<"enter ticket number: ";
cin>>t[s];
cout<<"enter name: ";
cin>>n[s];
cout<<"enter train: ";
cin>>m[s];
s=s+1;
cout<<"booked successfully!!\n";
}
}
else if(c==2){
if(s==0){
cout<<"no bookings yet\n";
}
for(int i=0;i<s;i++){
cout<<t[i]<<" - "<<n[i]<<" - "<<m[i]<<"\n";
}
}
else if(c==3){
int x,f=0;
cout<<"enter ticket number: ";
cin>>x;
for(int i=0;i<s;i++){
if(t[i]==x){
cout<<"found!!\n";
cout<<"name: "<<n[i]<<"\n";
cout<<"train: "<<m[i]<<"\n";
f=1;
break;
}
}
if(f==0){
cout<<"not found!!\n";
}
}
else if(c==4){
int x,k=-1;
cout<<"enter ticket number: ";
cin>>x;
for(int i=0;i<s;i++){
if(t[i]==x){
k=i;
break;
}
}
if(k==-1){
cout<<"cannot cancel!!\n";
}
else{
for(int i=k;i<s-1;i++){
t[i]=t[i+1];
n[i]=n[i+1];
m[i]=m[i+1];
}
s=s-1;
cout<<"cancelled!!\n";
}
}
else{
cout<<"wrong choice!!\n";
}
}
return 0;
}
