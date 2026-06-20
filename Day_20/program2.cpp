#include<iostream>
#include<algorithm>




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


    int count=0;

    for(int i=0;i<m;i++)
    {
        for(int j=0;j<n;j++)
        {
            if(array1[i][j]!=array1[j][i])
            {
                count++;
                
            }
           
        }
        
    }

    if(count==0)
    {
        cout<<"it is symmetric matrix";
    }
    else
    {
         cout<<"it is not symmetric matrix";
    }

}
