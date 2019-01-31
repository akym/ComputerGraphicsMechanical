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
for(i=1;i<360;i++)
{
 for(j=0;j<360;j++)
 {
  m.realpoint(j,h+r*cos(pi/180*j),k+r*sin(pi/180*j),0);
 }

delay(20);
g = (r/360)*i;
//g++;
m.rotate(3,i);
m.iso();
//cout<<"\n"<<i;
m.translat(200.0,g,200.0);

m.display(1,2);

}
getch();
}
