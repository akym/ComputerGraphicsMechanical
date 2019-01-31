#include<iostream.h>
#include<conio.h>
#include<math.h>
#include<graphics.h>
void main()
{
int gd,gm;
double r;
int x,y,xc,yc,x1,y1,x3[12],y3[12];
float x2,y2;
cout<<"enter centre co-ordinates of circle:";
cin>>xc>>yc;
clrscr();
detectgraph(&gd,&gm);
initgraph(&gd,&gm,"c:\\tc\\bgi");
for(int i=0;i<=180;i++)
{
x=xc+(50*cos(i*3.142/180));
y=yc+(50*sin(i*3.142/180));
putpixel(x,y,5);
}
	for(i=0;i<=60;i=i+1)
	{
	x1=(50+(20*(1-cos(3.142*i/60))))*cos(i*3.142/180);
	y1=(50+(20*(1-cos(3.142*i/60))))*sin(i*3.142/180);
       putpixel(x1+xc,yc-y1,3);
       putpixel(xc-x1,yc-y1,3);
       }
r=sqrt((x1*x1)+(y1*y1));
arc(xc,yc,60,120,r);
getch();
}