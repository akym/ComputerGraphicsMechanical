#include<conio.h>
#include<iostream.h>
#include<graphics.h>
#include<math.h>
void lina(float x, float y,float len,float ang)
{
int a[2];
line(x,y,x+len*cos(ang*3.14159/180),y+len*sin(ang*3.14159/180.0));
}
float sid,hit;
void main()
{
clrscr();
float x1,y1,pi;
pi=3.1415;
int i;
x1=200;
y1=10;
clrscr();
cout<<"Enter Side Of Hexagonal Pyramid:";
cin>>sid;
cout<<"\nEnter Height of Pyramid:";
cin>>hit;
clrscr();
int gd,gm;
detectgraph(&gd,&gm);
initgraph(&gd,&gm,"c:\\tc\\bgi");

float h1,h2;

h2=2*atan((sid/2)/hit)*180/pi;
h1=sqrt((sid/2.0*sid/2.0)+hit*hit);
cout<<h1;
/*lina(x1,y1,sid,0.0);
line(x1+sid/2,y1+hit,x1,y1);
line(x1+sid/2,y1+hit,x1+sid,y1);

line(x1+sid,y1,x1+sid+sid*cos(30.0*pi/180.0),y1+sid*cos(30.0*pi/180.0));
line(x1+sid+sid*cos(30.0*pi/180.0),y1+sid*cos(30.0*pi/180.0),x1+sid/2,y1+hit);
*/
lina(x1+sid/2,y1+hit,h1,0);
lina(x1+sid/2,y1+hit,h1,h2);
lina(x1+sid/2,y1+hit,h1,2*h2);
lina(x1+sid/2,y1+hit,h1,3*h2);
lina(x1+sid/2,y1+hit,h1,4*h2);
lina(x1+sid/2,y1+hit,h1,5*h2);
lina(x1+sid/2,y1+hit,h1,6*h2);




//line(x1+sid+sid*cos(30.0*pi/180.0)+sid*cos(60.0*pi/180.0),y1+sid*cos(30.0*pi/180.0)


getch();
}
