# include<iostream>
using namespace std;
int main()
{
    int i,m;
    cout<<"Enter the number of row (number must be less than 27)";
    cin>>m;
char j;
    for(i=1;i<=m;i++)
    {
        for(j=65;j<65+i;j++)
        {
            cout<<j;
        }
        cout<<"\n";
    }
}    









    

