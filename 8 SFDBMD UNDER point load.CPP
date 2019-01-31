#include<iostream.h>
#include<conio.h>
#include<stdio.h>
#include<graphics.h>
#include<math.h>

void main()
{
clrscr();

cout<<"Enter Length of Simply Supported Beam:\n";
float len,x,w;
cin>>len;
cout<<"\nEnter the force applied:\n";
cin>>w;
cout<<"\nEnter the distance of application of force from one end:\n";
cin>>x;
float r1,r2;
r1 = w*x/len;
r2 = w*(len-x)/len;
//drawing SFD
float x1,y1,bm;
x1=100;
y1 =100;
int gd,gm;
detectgraph(&gd,&gm);
initgraph(&gd,&gm,"c:\\tc\\bgi");
cout<<"Max Shear force=";
if(r1<r2)
{
cout<<r2;
}
else
{
cout<<r1;
}
line(x1,y1,x1+len,y1);   //drawn beam
line(x1,y1,x1,y1-r1);
line(x1+len,y1,x1+len,y1+r2);
line(x1,y1-r1,x1+x,y1-r1);
line(x1+x,y1-r1,x1+x,y1+r2);
line(x1+x,y1+r2,x1+len,y1+r2);
//Drawing BMD;
y1=y1+r2+100;
bm = w * x * (len-x)/len/50;
cout<<"        Max Bending Moment will be"<<bm*50;
line(x1,y1,x1+len,y1);   //drawn beam
line(x1,y1,x1+x,y1-bm);
line(x1+x,y1-bm,x1+len,y1);
getch();
}