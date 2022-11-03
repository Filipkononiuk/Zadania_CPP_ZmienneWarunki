#include <iostream>
#include <math.h>
using namespace std;
int main()

{float a,b,c,delta,x,x1,x2;
cout<<"podaj a ";
cin>>a;
cout<<"podaj b ";
cin>>b;
cout<<"podaj c ";
cin>>c;
delta=(b*b)-(4*a*c);
if
(delta<0)
{
    cout<<"delta wynosi 0 brak rozwiazania\n";
}
if (delta==0)
{
x=-b/(2*a);
cout<<"jedno rozwiazanie x = "<<x;
}
if (delta>0)
{
x1=(-b-sqrt(delta))/2*a;
x2=(-b+sqrt(delta))/2*a;
cout<<"x1= " <<x1<<"x2= "<<x2<<"";
}
return 0;
}
