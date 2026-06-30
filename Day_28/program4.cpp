#include<iostream>
#include<string>
using namespace std;
string n[100];
string p[100];
string e[100];
int s=0;



int main()
{
int c;


while(1)
{
cout<<"\n=== CONTACT BOOK ===\n";
cout<<"1. Add\n2. Show All\n3. Search\n4. Delete\n5. Exit\n";
cout<<"choose: ";
cin>>c;
if(c==5){
cout<<"bye bye!!\n";
break;
}
if(c==1)

{
if(s>=100)

{
cout<<"phone storage full \n";
}else{
cout<<"enter name: ";
cin>>n[s];
cout<<"enter phone number: ";
cin>>p[s];
cout<<"enter email: ";
cin>>e[s];
s=s+1;
cout<<"saved successfully!!\n";
}
}
else if(c==2){
if(s==0){
cout<<"no contacts found\n";
}
for(int i=0;i<s;i++){
cout<<n[i]<<" - "<<p[i]<<" - "<<e[i]<<"\n";
}
}
else if(c==3){
string x;
int f=0;
cout<<"enter name to search: ";
cin>>x;
for(int i=0;i<s;i++){
if(n[i]==x){
cout<<"found!!\n";
cout<<"phone: "<<p[i]<<"\n";
cout<<"email: "<<e[i]<<"\n";
f=1;
break;
}
}
if(f==0){
cout<<"not found!!\n";
}
}
else if(c==4){
string x;
int k=-1;
cout<<"enter name to delete: ";
cin>>x;
for(int i=0;i<s;i++){
if(n[i]==x){
k=i;
break;
}
}
if(k==-1){
cout<<"cannot delete!!\n";
}    


else
{
for(int i=k;i<s-1;i++){
n[i]=n[i+1];
p[i]=p[i+1];
e[i]=e[i+1];
}
s=s-1;
cout<<"deleted!!\n";
}
}
else
    {
cout<<"wrong choice!!\n";
     }
   }
}

