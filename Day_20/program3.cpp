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


   
    for(int i=0;i<m;i++)
    {
        int sum=0;
        for(int j=0;j<n;j++)
        {
            sum=sum+array1[i][j];
           
        }
        cout<<"The sum of "<<i+1<<" row is "<<sum<<"\n";
        
    }

}