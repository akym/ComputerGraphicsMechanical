#include<aii.h>

void main()
{
clrscr();
cout<<"Enter H and K:";
float h,k,pi;
pi=3.1415;
cin>>h>>k;
cout<<"\nEnter radius:" ;
float r;
cin>>r;
float i,j;
transform m(360);
startgraph();
float g;
g=1;
for(i=0;i<285;i++)
{
 for(j=0;j<360;j++)
 {
  m.realpoint(j,4*r+r*cos(pi/180*j),r*sin(pi/180*j),0);
 }

delay(20);
g = (r/360)*i;
//g++;
m.rotate(3,i);
m.rotate(1,20);
//m.iso();
//cout<<"\n"<<i;
m.translat(h,k,200.0);

m.display(3,2);

}

//getch();
for(i=95;i>-180;i--)
{
 for(j=0;j<360;j++)
 {
  m.realpoint(j,4*r+r*cos(pi/180*j),r*sin(pi/180*j),0);
 }

delay(20);

g = (r/360)*i;
//g++;
m.rotate(3,i);
//
m.rotate(1,20);

//cout<<"\n"<<i;
m.translat(h,k,200.0+8*r);

m.display(3,2);

}
getch();
}
