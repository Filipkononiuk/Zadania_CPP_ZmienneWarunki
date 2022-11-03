#include <iostream>
using namespace std;
int main()
{int a,b;
    cout<<"podaj liczbe a\n";
    cin>>a;
    cout<<"podaj liczbe b\n";
    cin>>b;
    if (a>0)
    {
        cout<<"funkcja jest rosnaca";
        return 0;
    }
    if (a==0)
    {
        cout<<"funkcja jest stala";
        return 0;
    }
    else
    cout<<"funkcja jest malejaca";

return 0;
}