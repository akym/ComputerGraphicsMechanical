#include<conio.h>
#include<stdio.h>
#include<iostream.h>
#include<graphics.h>
#include<math.h>
float pi;
void lina(float,float,float,float);
void main()
{
pi=3.141592654;
clrscr();
float wega,x1,y1,phi,leng,lencrank,lencon;
float theta,a,x2,y2;


/*cout<<"Enter X1: ";
cin>>x1;
cout<<"\nEnter Y1: ";
cin>>y1;*/
cout<<"Enter the Velocity of crank in RPM: ";
cin>>wega;
wega = 2*pi*wega/60;
cout<<"\nEnter Angle between x axis and crank:";
cin>>phi;
cout<<"\nEnter length of crank:";
cin>>lencrank;
cout<<"\nEnter length of connector:";
cin>>lencon;
int gd,gm;
detectgraph(&gd,&gm);
initgraph(&gd,&gm,"c:\\tc\\bgi");
aii:
clrscr();
x1=50;
y1=150;
a = lencrank * sin(pi*phi/180);
//cout<<"  a="<<a;
theta =180/pi* asin(a/lencon);
//cout<<"\n Theta= "<<theta;
leng = lencrank * cos ( pi / 180 * phi) + lencon * cos ( pi /180*theta);

line(x1,y1, x1+leng,y1);
x2 = x1 + lencrank * cos ( pi /180 * phi);
y2 = y1 + lencrank * sin ( pi/180 * phi);
line(x1,y1,x2,y2);
line( x2,y2,x1+leng,y1);
int i;
for(i=0; i<=20; i++)
{
line(x1+leng+i,y1,x1+leng+i,y1+5);
}
//completed drawing slider crank mechanism
//drawing velocity diagram
x1=x1+lencon+lencrank+180;
float vel,vel2;
vel=lencrank*wega;

float fact;
if(vel>100)
{
 fact = vel/100.0;
}
else
{
fact=1;
}
float a2,b2,a3,b3;
a2 = x1+vel/fact*cos(pi/180*(phi+90));
b2 = y1+vel/fact*sin(pi/180*(phi+90));
setcolor(3);
line(x1,y1,a2,b2);
b3=a2-(vel/fact*sin(pi/180*(phi+90)))*tan((theta)*pi/180);
setcolor(2);
circle(a2,b2,3);
line(a2,b2,b3,y1);
setcolor(4);
line(b3,y1,x1,y1);
a3= x1-b3;
cout<<"Velocity of Slider is "<<a3*fact<<" for angle "<<phi<<"\nUse up and Down arrow to Change Angle";
int s;
s = getch();
if(s==72)
{
 if(phi<360)
   {
    phi=phi+1;
  }
  else
  {
  phi=0;
  }
  goto aii;
}
if(s==80)
{
 if(phi>0)
   {
    phi=phi-1;
  }
  else
  {
  phi=0;
  }
  goto aii;
}

if (s!=48)
{//cout<<"Use Proper Key";
goto aii;
}

getch();
}






void lina(float a,float b,float len, float ang)
{
}
