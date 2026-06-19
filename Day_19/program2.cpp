#include<iostream>
using namespace std;
int main()
{
    cout<<"Enter the row and column of  matrix1 and matrix2"; 
    int m,n;
    cin>>m;
    cin>>n;
    int array1[m][n]; 
    int array2[m][n];


    cout<<"Enter the element of matrix1";
    for(int i=0;i<m;i++)
    {
        for(int j=0;j<n;j++)
        {
            cin>>array1[i][j];
           
        }
        
    }
    

    cout<<"Enter the element of matrix2";
    for(int i=0;i<m;i++)
    {
        for(int j=0;j<n;j++)
        {
            cin>>array2[i][j];
           
        }
        
    }

    //find difference and store ,update in matrix1 and display
    
 cout<<"the subtraction of input matrix is "<<"\n";
    for(int i=0;i<m;i++)
    {
        for(int j=0;j<n;j++)
        {
         array1[i][j]=array1[i][j]-array2[i][j];
         cout<<array1[i][j];
           cout<<"  ";
        }
        cout<<"\n";


    }

}