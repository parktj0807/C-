#include <iostream>

int main()
{
    int N;

    std::cin>>N;
    int arr[10000001];
    for(int i=0;i<N;i++)
    {
        std::cin>>arr[i];
    }

    int min = arr[0], max = arr[0];
    for (int j=0; j<N;j++)
    {
        if(arr[j]<min)
        {
            min = arr[j];
        }

        if(arr[j]>max)
        {
            max=arr[j];
        }
    }

    std::cout<<min<<" "<<max;



    return 0;
}