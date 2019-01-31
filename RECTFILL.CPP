#include<conio.h>
#include<iostream.h>
#include<math.h>
#include<graphics.h>
void main()
{
clrscr();
cout<<"Enter the Length and Width of the Rectangle";
int s;
float len,wid,x,y;
cin>>len>>wid;
clrscr();
cout<<"You can Change Color by Pressing Up arrow";
int col;

col=1;
int gd,gm;
detectgraph(&gd,&gm);
initgraph(&gd,&gm,"c:\\tc\\bgi");

aii:
clrscr();
x=100;
y=100;
int i;
if (col>7)
{
	col=0;
}
setcolor(col);
for (i=1;i<=len;i++)
{
	line(x,y,x,y+wid);
	x++;
}
s = getch();
if(s==72)
{ col++;
  goto aii;
}
else
{
	if(s==48)
	{
	}
	else
	{
	goto aii;
	}
}

getch();
}