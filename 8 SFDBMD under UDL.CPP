#include<iostream.h>
#include<conio.h>
#include<stdio.h>
#include<graphics.h>
#include<math.h>
void main()
{
clrscr();
float len,udl;
cout<<"Enter length of Simply Supported:";
cin>>len;
cout<<"Enter UDL value:";
cin>>udl;
clrscr();
int gd,gm;
detectgraph(&gd,&gm);
initgraph(&gd,&gm,"c:\\tc\\bgi");
cout<<" SFD & BMD";
float w;
w = udl/len;
int x1,y1;
x1 =100;
y1=100;
line(x1,y1,x1+len,y1);
int i;
float xt1,yt1;
yt1=w*(len/2);
line(x1,y1,x1,y1-yt1);
for(i=0;i<=len;i++)
{
yt1=w*(len/2-i);
putpixel(x1+i,y1-yt1,3);
}
line(x1+len,y1,x1+len,y1-yt1);
y1=y1-yt1+75; //shifting bmd down

line(x1,y1,x1+len,y1);
for(i=0;i<=len;i++)
{
yt1=(w*i/2*(len-i))/50;
putpixel(x1+i,y1-yt1,5);
}
getch();
}