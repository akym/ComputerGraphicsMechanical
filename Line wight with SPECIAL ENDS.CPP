#include<conio.h>
#include<iostream.h>
#include<graphics.h>
#include<math.h>
void main()
{
clrscr();
cout<<"Enter the start point of the line:";
float x1,y1;
cin>>x1>>y1;
cout<<"\nEnter Length and Angle:";
float x2,y2,legt,ang;
cin>>legt>>ang;
float pi;
pi=3.141592654;
ang = ang *pi/180.0;
x2 = x1+legt*cos(ang);
y2=y1+legt*sin(ang);
int le;
le=1;
cout<<"\nEnter Line Weight(from 0 to 10):";
int ilen;
cin>>ilen;
clrscr();
int gd,gm;
detectgraph(&gd,&gm);
initgraph(&gd,&gm,"c:\\tc\\bgi");
cout<<"            Drawing Center line";
//for loop
float dx,dy,step;
dx=x2-x1;
dy=y2-y1;

if(dx>dy)
{
 step=dx;
}
else
{
step = dy;
}
float xinc,yinc,x,y;
xinc=dx/step;
yinc=dy/step;
x=x1;
y=y1;
putpixel(x,y,1);
int i,st;
st=0;
setcolor(1);
for (i=1;i<=step;i++)
{
	x=x+xinc;
	y=y+yinc;

	if (st==0)
		{
			if(le<=6)
			{
				putpixel(x,y,1);
				line(x,y,x+ilen*cos(-(pi/2-ang)),y+ilen*sin(-(pi/2-ang)));
				le=le+1;
			}
			else
			{
				le=1;
				st=1;
			}
		}
		else
		{
			if(le<=2)
			{
				putpixel(x,y,0);
				le=le+1;
			}
			else
			{	if(le<=4)
				{
					putpixel(x,y,1);
					line(x,y,x+ilen*cos(-(pi/2-ang)),y+ilen*sin(-(pi/2-ang)));
					le=le+1;
				}
				else
				{
					if(le<=6)
					{
						putpixel(x,y,0);
						le=le+1;
					}
					else
					{
						le=1;
						st=0;
					}
				}
			}
		}

}




getch();
}