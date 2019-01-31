#include<iostream.h>
#include<conio.h>
#include<math.h>

void main()
{
clrscr();
float t,s,p,D,d;
cout<<"\nEnter tensile strength of material(Mpa):";
cin>>t;
cout<<"\nEnter shear strength of material(Mpa):";
cin>>s;
cout<<"\nEnter load to be transmitted(N):";
cin>>p;
D=sqrt((4*p)/(3.1415*t));
d=sqrt((2*p)/(3.1415*s));
cout<<"\nDiameter of shaft:"<<D;
cout<<"\nDaimeter of pin:"<<d;
getch();

}
