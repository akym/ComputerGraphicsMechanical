#include<iostream.h>
#include<conio.h>
#include<math.h>
#include<graphics.h>

float vlx(float);
float vly(float);
float x1,y1,x2,y2,s1,s2;
void main()
{clrscr();
cout<<"Enter Starting point of curve:";
float x,y,t;
cin>>x1>>y1;
cout<<"\nEnter end point of curve:";
cin>>x2>>y2;
cout<<"\nEnter slope at staring point:";
cin>>s1;
cout<<"\nEnter Slope at End Point:";
cin>>s2;
clrscr();
int gd,gm;
detectgraph(&gd,&gm);
initgraph(&gd,&gm,"c:\\tc\\bgi");

for(t=0.0;t<=1;t=t+0.001)
{
x = vlx(t);
y = vly(t);
putpixel(x,y,3);
}
getch();
}

float vlx( float t)
{
float x;
x = (2*t*t*t-3*t*t+1)*x1+(-2*t*t*t+3*t*t)*x2+(t*t*t-2*t*t+t)*s1+(t*t*t-t*t)*s2;
return(x);
}

float vly( float t)
{
float y;
y = (2*t*t*t-3*t*t+1)*y1+(-2*t*t*t+3*t*t)*y2+(t*t*t-2*t*t+t)*s1+(t*t*t-t*t)*s2;
return(y);
}

