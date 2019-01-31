#include<iostream.h>
#include<conio.h>
#include<stdio.h>
#include<graphics.h>
#include<math.h>
#include<dos.h>
float pi;
//void lina(float,float,float,float);
void main()
{
pi=3.141529;
clrscr();
cout<<"Enter the Length of smallest link:";
float len;
cin>>len;
float x1,y1,ang;
int gd,gm;
detectgraph(&gd,&gm);
initgraph(&gd,&gm,"c:\\tc\\bgi");
cin>>ang;
float cnt;
cnt=0;
do
{getch();
clrscr();
x1=150;
y1=150;
setcolor(2);
line(x1,y1,x1+2*len,y1);
setcolor(5);
line(x1,y1,x1+2.5*len*cos(pi*(ang+cnt)/180),y1+2.5*len*sin(pi*(ang+cnt)/180));
line(x1+2*len,y1,x1+2.5*len*cos(pi*(180-(ang-cnt))/180)+2*len,y1+2.5*len*sin(pi*(180-(ang-cnt))/180));
line(x1+2.5*len*cos(pi*(ang+cnt)/180),y1+2.5*len*sin(pi*(ang+cnt)/180),x1+2.5*len*cos(pi*(180-(ang-cnt))/180)+2*len,y1+2.5*len*sin(pi*(180-(ang-cnt))/180));
cnt=cnt+1;
delay(100);
}while(cnt<360);
getch();
}

/*void lina(float x1,float y1,float len,float ang)
{
float x2,y2;
x2 = x1+len*cos(ang*pi/180);
y2 = y1+len*sin(ang*pi/180);
line(x1,y1,x2,y2);
}*/