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
for(i=1;i<r;i=i+0.5)
{
 for(j=0;j<360;j++)
 {
  m.realpoint(j,h+i*cos(pi/180*j),k+i*sin(pi/180*j),0);
 }
delay(20);
g = (100*i/r);
//g++;
//m.rotate(3,i);
m.iso();
//cout<<"\n"<<i;
m.translat(0,0,g+100);

m.display(2,2);

}
getch();
}