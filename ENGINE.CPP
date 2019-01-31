#include<iostream.h>
#include<conio.h>
#include<math.h>
#include<graphics.h>
void main()
{
  clrscr();
int gd,gm;
float p,n,p1,d,y,x,w,r1,r2,theta,t,b,D;
cout<<"\nEnter power (in kW) & rpm:";
cin>>p>>n;
cout<<"\nintensity of normal pressure (N/mm2):";
cin>>p1;
cout<<"\nEnter value of x:";
cin>>x;
w=(2*3.1415*n)/60;
t=(p*1000)/w;
y=(t*1000)/(2*3.1415*0.2*p1*x*x);
b=pow(y,0.333);
cout<<"\nWidth="<<b;
theta=(12.5*3.1415)/180;
r1=((2*x*b)+(b*sin(theta)))/2;
r2=(2*x*b)-r1;
D=r1*2;
d=r2*2;
cout<<"Outer dia="<<D;
cout<<"Inner dia="<<d;
getch();
clrscr();
detectgraph(&gd,&gm);	//write appropiate
initgraph(&gd,&gm,"c:\\tc\\bgi");		//write appropiate
circle(450,300,r1);
circle(450,300,r2);
float x1,x2,x3,x4,y1,y2,y3,y4;

x1=150+(b*cos(theta)*0.25);
y1=300+r1;
x2=150+(b*cos(theta)*0.25);
y2=300-r1;
x3=150;
y3=300+r2;
x4=150;
y4=300-r2;
line(x1,y1,x2,y2);
line(x3,y3,x4,y4);
line(x4,y4,x2,y2);
line(x3,y3,x1,y1);
getch();

}