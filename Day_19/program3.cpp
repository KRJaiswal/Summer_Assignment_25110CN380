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


    cout<<" matrix before transpose"<<"\n";
    for(int i=0;i<m;i++)
    {
        for(int j=0;j<n;j++)
        {
            cout<<array1[i][j];
           cout<<"  ";
        }
        cout<<"\n";
    }


    //doing transpose
     for(int i=0;i<m;i++)
    {
        for(int j=0;j<n;j++)
        {
            if(j>i)
            {
           swap(array1[i][j],array1[j][i]);
            }
        }
        
    }


    //display matrix
     cout<<" matrix after transpose"<<"\n";
    for(int i=0;i<m;i++)
    {
        for(int j=0;j<n;j++)
        {
            cout<<array1[i][j];
                cout<<"  "; 
        }
        cout<<"\n";
    }

}