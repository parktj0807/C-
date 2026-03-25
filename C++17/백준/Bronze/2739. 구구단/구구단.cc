#include <iostream>
using namespace std;

int main()
{
    int num;

    cout << "";
    cin >> num;

    int count =1;

    while (count<10)
    {
        cout << num << " * " << count << " = " << num*count <<"\n";
        count ++;
    }
   
    return 0;
}