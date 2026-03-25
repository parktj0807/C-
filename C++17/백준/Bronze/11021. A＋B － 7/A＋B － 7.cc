#include <iostream>
using namespace std;

int main()
{
    int count,x,y;

    cin >> count;

    for(int a=1; a<count+1; a++)
    {
        cin >> x >> y;
        cout << "Case #" << a << ": " << x+y << "\n";
    }
    return 0;
}