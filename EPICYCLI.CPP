#include<iostream.h>
#include<conio.h>
#include<graphics.h>
#include<math.h>
void main()
{
int a,b,c,m,x1,y1,j;
a=30;
b=60;
c=150;
m=4;
x1=100;
y1=100;
float d1,d2,d3;
d1=a*m;
d2=b*m;
d3=c*m;
if((d1+d2+d3)>600)
{
j = (d1+d2+d3)/300;
}
else
{
j=1;
}


int gd,gm;
detectgraph(&gd,&gm);
initgraph(&gd,&gm,"c:\\tc\\bgi");
circle(x1,y1,d1/2/j);
circle(x1+d1/j/2+d2/j/2,y1,d2/2/j);
circle(x1,y1,d3/j/2);
line(x1,y1,x1+d1/j/2+d2/j/2,y1);
getch();
}