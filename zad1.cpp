#include <iostream>
using namespace std;

int main()
{int x,y,z,c,v;
    cout<<"podaj liczbe 1\n";
    cin>>x;
    cout<<"podaj liczbe 2\n";
    cin>>y;
    if (x<y)
    {
    cout<<"podana liczba jest wieksza od poprzedniej. Program konczy dzialanie";
    return 0;
    }
    else
    cout<<"podaj liczbe 3\n";
    cin>>z;
    if (y<z)
    {
        cout<<"podana liczba jest wieksza od poprzedniej. Program konczy dzialanie";
        return 0;
    }
    else
    cout<<"podaj liczbe 4\n";
    cin>>c;
    if (z<c)
    {
       cout<<"podana liczba jest wieksza od poprzedniej. Program konczy dzialanie";
       return 0;
    }
    else
    cout<<"podaj liczbe 5\n";
    cin>>v;
    if (z<v)
    {
        cout<<"podana liczba jest wieksza od poprzedniej. Program konczy dzialanie";
    }

return 0;
}