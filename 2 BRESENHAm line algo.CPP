#include<conio.h>
#include<iostream.h>
#include<graphics.h>
#include<math.h>
void main()
{
clrscr();
int x1,y1,x2,y2;
float ang,pi;
cout<<"Enter Start Point of Line:\n";
cin>>x1;
cout<<"And\n";
cin>>y1;
cout<<"Enter end point of Line:\n";
cin>>x2;
cout<<"And\n";
cin>>y2;

//algo starts
float dx,dy,x,y,d;
dx = x2-x1;
dy = y2-y1;
d = 2*dy - dx;
x = x1;
y=y1;

int gd,gm;
detectgraph(&gd,&gm);
initgraph(&gd,&gm,"c:\\tc\\bgi");

putpixel(x,y,1);
 do
{
 if (d<0)
 {
 d = d+2*dy;
 x = x+1;
 }
 else
 {
 d = d+2*dy-2*dx;
 x = x+1;
 y = y+1;
 }
 putpixel(x,y,5);
 }while(x<x2);

 getch();
 }

