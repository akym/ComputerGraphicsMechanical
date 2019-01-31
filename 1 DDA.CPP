#include<iostream.h>
#include<conio.h>
#include<stdio.h>
#include<math.h>
#include<graphics.h>
void main()
{
clrscr();

cout<<"\n Lengh of line and Angle with X axis:\n";
float len,ang;
cin>>len>>ang;
int x1,y1,x2,y2;
x1=100;
y1=100;
float pi;
pi=3.141592654;
ang = ang*pi/180;
x2 = x1+len*cos(ang);
y2 = y1+len*sin(ang);
//dda algo starts;
float i,step,dx,dy,xinc,yinc,x,y;
int gd,gm;

clrscr();

detectgraph(&gd,&gm);
initgraph(&gd,&gm,"c:\\tc\\bgi");
dx = x2-x1;
dy = y2-y1;
if(dx>dy)
{
step = dx;
}
else
{
step = dy;
}
xinc = dx/step;
yinc = dy/step;
x=x1;
y=y1;
putpixel(x,y,1);
for(i=0;i<=step;i++)
{
x = x+xinc;
y = y+yinc;
putpixel(x,y,1);
}
getch();
}