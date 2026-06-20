#include<iostream>
using namespace std;
int main()
{
    cout<<"Enter the row and column of  matrix1 ";
    int m,n;
    cin>>m;
    cin>>n;
    int array1[m][n]; 
    
    cout<<"Enter the row and column of  matrix2 ";
    int p,q;
    cin>>p;
    cin>>q;
    int array2[p][q];

    if(n!=p)
    {
        cout<<"Multiplication not possible";
    }


    else
    {
    cout<<"Enter the element of matrix1";
    for(int i=0;i<m;i++)
    {
        for(int j=0;j<n;j++)
        {
            cin>>array1[i][j];
           
        }
        
    }
    

    cout<<"Enter the element of matrix2";
    for(int i=0;i<p;i++)
    {
        for(int j=0;j<q;j++)
        {
            cin>>array2[i][j];
           
        }
        
    }
    int array3[m][q];
    int sum;

    for( int i=0;i<m;i++)
    {
        for(int j=0;j<q;j++)
        {
          int sum=0;
          for(int k=0;k<n;k++)
          {
            sum=sum+array1[i][k]*array2[k][j];
          }
        array3[i][j]=sum;
        }
    }

    cout<<"The resultant matrix is"<<"\n";
    for(int i=0;i<m;i++)
    {
        for(int j=0;j<q;j++)
        {
            cout<<array3[i][j]<<"  ";
           
        }
        cout << endl;
        
    }




   }
}