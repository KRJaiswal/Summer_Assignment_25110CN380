#include<iostream>





using namespace std;
int main()
{
    cout<<"Enter the row and column of square matrix";
    int m,n;
    cin>>m;
    cin>>n;
    int array1[m][n]; 
    

    cout<<"Enter the element of matrix1";
    for(int i=0;i<m;i++)
    {
        for(int j=0;j<n;j++)
        {
            cin>>array1[i][j];
           
        }
        
    }

    cout<<"\n";

     for(int i=0;i<m;i++)
    {
        for(int j=0;j<n;j++)
        {
            cout<<array1[i][j];
           cout<<"  ";
        }
        cout<<"\n";
    }


    int sum=0;
     for(int i=0;i<m;i++)
    {
        for(int j=0;j<n;j++)
        {
            if(i==j)
            {
             sum=sum+array1[i][j];
            }
        }
        
    }


    cout<<"The sum of diagonal of given matrix is \n"<<sum;

}