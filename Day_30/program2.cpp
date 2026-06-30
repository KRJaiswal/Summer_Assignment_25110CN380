#include<iostream>
#include<string>
using namespace std;
int main()
{
string bname[100];
int id[100];
string auth[100];
int status[100];
int total=0;
int ch;
cout<<" Library System"<<endl;
while(true)
{
cout<<"\n1.Add\n2.Show\n3.Issue\n4.Exit\nChoice:";
cin>>ch;
if(ch==1)
{
if(total<100)
{
cout<<"ID: ";
cin>>id[total];cin.ignore();
cout<<"Name: ";
getline(cin,bname[total]);
cout<<"Author: ";
getline(cin,auth[total]);
status[total]=1;
total++;
cout<<"Book Added"<<endl;
}
else
{
cout<<"No space"<<endl;
}
}
else if(ch==2)
{
if(total==0)
{
cout<<"No books"<<endl;
}
for(int i=0;i<total;i++)
{
cout<<"ID:"<<id[i]<<"  Name:"<<bname[i]<<" Auth:"<<auth[i];
if(status[i]==1)
{
cout<<" [Available]"<<endl;
}
else
{
cout<<" [Issued]"<<endl;
}
}
}
else if(ch==3)
{
int search;int f=0;
cout<<"Enter ID to issue: ";cin>>search;
for(int i=0;i<total;i++)
{
if(id[i]==search)
{
f=1;
if(status[i]==1)
{
status[i]=0;
cout<<"Issued successfully"<<endl;
}
else
{
cout<<"Already taken"<<endl;
}
break;
}
}
if(f==0)
{
cout<<"Not found"<<endl;
}
}
else if(ch==4)
{
cout<<"Exit"<<endl;
break;
}
else
{
cout<<"Invalid"<<endl;
}
}
return 0;
}

