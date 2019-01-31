#include<iostream.h>
#include<graphics.h>
#include<conio.h>
#include<math.h>
#include<dos.h>
void main()
{
clrscr();
int gd,gm,ang,cnt,nt,t;
double pi,circ,dcirc,dx,dy,r;
pi = 3.141592654;
cout<<"Enter the radius of circle: ";
cin>>r;
detectgraph(&gd,&gm);
initgraph(&gd,&gm,"c:\\tc\\bgi");
cnt=0;
float theta;
float toplot1[360],toplot2[360];
for(ang=-180;ang<=180;ang=ang+1)
{
 clrscr();
 cnt=cnt+1;
 theta = ang*pi/180;
 dx = r * sin(theta)+theta*r;
 dy = r+r *cos(theta);
  setcolor(5);
  circle(theta*r+200,100+r,r);
  setcolor(6);
  putpixel(dx+200,dy+100,1);
 toplot1[ang+181]=dx+200;
 toplot2[ang+181]=dy+100;
 setcolor(4);
for (t=1;t<=3;t=t+1)
  {
  circle(dx+200,dy+100,t);
  }

 circle(dx-2*r*sin(theta)+200,dy-2*r*cos(theta)+100,3);
 setcolor(2);
for(nt=1;nt<=cnt;nt++)
 {
 line(0,100,760,100);
 setcolor(1);
 putpixel(toplot1[nt],toplot2[nt],4);
 }
delay(100);
}


getch();
}

