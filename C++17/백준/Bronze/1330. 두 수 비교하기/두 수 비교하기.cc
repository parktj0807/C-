#include <iostream>
using namespace std;

int main()
{
    int num1,num2;

    cout << "";
    cin >> num1;

    cout << "";
    cin >> num2;

    if (num1 > num2)
        cout << ">\n";
    
    if (num1 < num2)
        cout << "<\n";

    if (num1 == num2)
        cout << "==\n";
   
    return 0;
}