#include <iostream>

int main()
{
    int N, M;
    int a,b;
    std::cin>>N>>M;
    int arr[101];

    for(int i=0; i<N; i++)
    {
        arr[i]=i+1;
    }

    for(int j=0; j<M; j++)
    {
        std::cin>>a>>b;
        arr[N + 1] = arr[a-1];
        arr[a-1] = arr[b-1];
        arr[b-1] = arr[N + 1];
    }

    for (int i=0; i<N;i++)
    {
        std::cout<<arr[i]<<" ";
    }


    return 0;
}