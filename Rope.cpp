#include<iostream.h>
#include<conio.h>
#include<math.h>
#include<graphics.h>
void main()
{
	int gm,gd;
	float x,y,r;
	clrscr();
	cout<<"Enter the Center - ";
	cin>>x>>y;
	cout<<"Enter the Radius - ";
	cin>>r;
	detectgraph(&gm,&gd);
	initgraph(&gm,&gd,"c:\\tc\\bgi");

	circle(x,y,3*r);
	circle(x,y,r);
	circle(x+2*r,y,r);
	circle(x-2*r,y,r);
	circle(x+r,y+1.732*r,r);
	circle(x+r,y-1.732*r,r);
	circle(x-r,y+1.732*r,r);
	circle(x-r,y-1.732*r,r);

	getch();

}
