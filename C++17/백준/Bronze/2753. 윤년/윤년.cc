#include <iostream>
using namespace std;

int main()
{
    int num1,num2;

    cout << "";
    cin >> num1;

    if (num1%4 == 0)
    {
        if (num1%100 == 0)
        {
            if (num1%400==0)
                cout << "1\n";
            else
                cout << "0\n";
        }

        else
            cout << "1\n";

    }

    else
        cout << "0\n";
   
    return 0;
}