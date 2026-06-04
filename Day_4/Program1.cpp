#include <iostream>
int main()
{
    int i = 0, j = 1, k, num;

    std::cout << "Enter the number of term";
    std::cin >> num;

    
    for (int term = 1; term <= num; term++)
    {
        std::cout<<i<<"\n";
        k = i + j; // k=1,i=1,j=1//k=2,i=1,j=2//k=3,i=2,j=3//k=5,i=3,j=5
        i = j;
        j = k;
       
    }
}