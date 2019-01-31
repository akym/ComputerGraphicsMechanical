
#include<aii.h>

void main()
{
//aiihelp

transform m(720);
float x,y,pi; // point on the curve
clrscr();
pi=3.1415;
cout<<"Enter Amplitude:" ;
float r;
cin>>r;
float i,j;
startgraph();     //function to intialise graphics
float g;
g=0;
for(i=1;i<100;i++)
{
 for(j=0;j<720;j++)
 {
  m.realpoint(j,j,200+g+r*sin(j*pi/180),g);
 }
 g=g+0.5;
//g = (100*i/r);
//g++;
//m.rotate(3,i);
m.iso();
//cout<<"\n"<<i;
//m.translat(0,0,);

m.display(1,2);

}
getch();
}
