#include<iostream>
using namespace std;
int main()
{
    int num,i,j,k;
    cout<<"Enter the range \n";
    cin>>i;
    cout<<"to  ";
    cin>>j;
     
    while(i<=j)
    {   
        int count=0;
            for(k=2;k<i;k++)
                 {
                   if(i%k==0)
                   {
                     count++;
                     break;
                   }
                
                 }

        
        if((count==0)&&(i!=1))
        {
            cout<<i<<"\n";
        }
        i++;
    }


    

}
