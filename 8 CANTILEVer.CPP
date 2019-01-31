#include<iostream.h>
#include<conio.h>
#include<graphics.h>
#include<math.h>
void main()
{
float x1,y1,len,w;
int i,gd,gm;
x1=100.0;
y1=100.0;
cout<<"Enter length of Beam:";
cin>>len;
cout<<"\nPress 1 for UDL and 2 for point load:";
cin>>i;
float x2,y2;
if( i == 1)
{
// UDL
cout<<"\nEnter UDL value:";
cin>>w;
clrscr();
detectgraph(&gd,&gm);
initgraph(&gd,&gm,"c:\\tc\\bgi");
y2 =w*len;
cout<<"Max Shear Force is "<<y2;
line(x1,y1,x1+len,y1);
line(x1,y1,x1,y1-y2/500);
line(x1,y1-y2/500,x1+len,y1);
y2=w*len*len/2;
y1=y1+100;
cout<<"\nMax Bending Moment is "<<y2;
line(x1,y1,x1+len,y1);
line(x1,y1,x1,y1+y2/15000);
line(x1,y1+y2/15000,x1+len,y1);
}
else
{//point load
cout<<"\nEnter Point load value:\n";
cin>>w;
clrscr();
detectgraph(&gd,&gm);
initgraph(&gd,&gm,"c:\\tc\\bgi");
y2 =w;
cout<<"Max Shear Force= "<<y2;
line(x1,y1,x1+len,y1);
line(x1,y1,x1,y1-y2/10);
line(x1,y1-y2/10,x1+len,y1-y2/10);
line(x1+len,y1-y2/10,x1+len,y1);
y2=w*len;
y1=y1+100;
cout<<"\nMax Bending Moment="<<y2;
line(x1,y1,x1+len,y1);
line(x1,y1,x1,y1+y2/500);
line(x1,y1+y2/500,x1+len,y1);
}
getch();

}
