#include<conio.h>
#include<iostream.h>
#include<math.h>
#include<graphics.h>
#include<dos.h>
void main()
{
int cnt,i;
float pnt[100][2];
cnt=0;
clrscr();
//scott russel
cout<<"Enter Side OB:";
float ob,bc,bd,theta,phi,pi;
cin>>ob;
bc = ob;
bd=ob;
float x1,y1,x2,y2,x3,y3,x4,y4;
x1=200.0;
y1=200.0;
pi=3.14215;

int gd,gm;
detectgraph(&gd,&gm);
initgraph(&gd,&gm,"c:\\tc\\bgi");
theta=30.0;

for(theta=0;theta<=80.0;theta++)
{
clrscr();
x2=x1+ob*cos(theta*pi/180);
y2=x1+ob*sin(theta*pi/180);
x3=x2+ob*cos(theta*pi/180);
y3=y1;
for(i=0;i<=10;i++)
{
line(x3,y3,x3+10,y3+i);
}
x4 = x3-2*bc*cos(theta*pi/180);
y4 =y1+ 2*bc*sin(theta*pi/180);
pnt[cnt][0]=x4;
pnt[cnt][1]=y4;
setcolor(2);
line(x1,y1,x2,y2);
circle(x4,y4,3);
setcolor(3);
line(x2,y2,x3,y3);
setcolor(4);
line(x3,y3,x4,y4);
for(i=1;i<=cnt;i++)
{
putpixel(pnt[i][0],pnt[i][1],1);
}
delay(100);
cnt++;
}


getch();
}
