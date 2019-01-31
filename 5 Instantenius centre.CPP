#include<conio.h>
#include<stdio.h>
#include<iostream.h>
#include<graphics.h>
#include<math.h>

void main()
{
clrscr();
float x1,y1,phi,leng,lencrank,lencon;

/*cout<<"Enter X1: ";
cin>>x1;
cout<<"\nEnter Y1: ";
cin>>y1;*/
x1=150;
y1=150;
cout<<"\nEnter Angle between x axis and crank:";
cin>>phi;
cout<<"\nEnter length of crank:";
cin>>lencrank;
cout<<"\nEnter length of connector:";
cin>>lencon;
clrscr();
cout<<"One instantenious centre is lying on green Colored Infinite Line.\n\n\nPRESS ANY KEY TO SEE THE RESULTS!!!";
getch();
clrscr();
float theta,a,pi,x2,y2;
pi=3.141592654;
a = lencrank * sin(pi*phi/180);
theta =180/pi* asin(a/lencon);
leng = lencrank * cos ( pi / 180 * phi) + lencon * cos ( pi /180*theta);
int gd,gm;
detectgraph(&gd,&gm);
initgraph(&gd,&gm,"c:\\tc\\bgi");
line(x1,y1, x1+leng,y1);
x2 = x1 + lencrank * cos ( pi /180 * phi);
y2 = y1 + lencrank * sin ( pi/180 * phi);
line(x1,y1,x2,y2);
line( x2,y2,x1+leng,y1);
int i;
for(i=0; i<=20; i++) //code for showing the slider.
{
line(x1+leng+i,y1,x1+leng+i,y1+10);
}
//drawing construction line for in. centre.
int ney1,ney2;
ney1=y1+(y1-y2)/(x1+leng-x2)*(-leng);
setcolor(6);
line(x1,y1,x1,ney1);
line(x2,y2,x1,ney1);
ney2=(y1-y2)/(x1-x2)*leng+y1;
line(x2,y2,x1+leng,ney2);
line(x1+leng,y1,x1+leng,ney2);
setcolor(2);
line(x1+leng,ney2,(x1+leng),1500);
line(x1+leng,y1,(x1+leng),-1500);

//drawing instantenious centre
setcolor(4);
circle(x1,y1,3);
circle(x1+leng,y1,3);
circle(x2,y2,3);
circle(x1,ney1,3);
circle(x1+leng,ney2,3);
getch();
}



