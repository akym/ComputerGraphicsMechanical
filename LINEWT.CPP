#include<conio.h>
#include<iostream.h>
#include<math.h>
#include<graphics.h>
void main()
{
clrscr();
cout<<"Use Up and Down Arrows for Incresing and Decresing Line Weight";
int gd,gm;
int x1,y1,i,j,k,s;
j=1;
aii:
x1=100;
y1=25;
if(j<1)
{
j=1;
}
detectgraph(&gd,&gm);
initgraph(&gd,&gm,"c:\\tc\\bgi");
cout<<"\nDotted Line";
for(i=1;i<=800;i=i+2)
{
for(k=0;k<j;k++)
{
putpixel(x1+i,y1+k,3);
}
}

cout<<"\n\n\n\n\n\nCentre line";
y1=y1+95;
for(i=1;i<=800;i=i+12)
{
for(k=0;k<j;k++)
{
putpixel(x1+i,y1+k,5);
putpixel(x1+i+1,y1+k,5);
putpixel(x1+i+2,y1+k,5);
putpixel(x1+i+3,y1+k,5);
putpixel(x1+i+4,y1+k,5);
putpixel(x1+i+5,y1+k,5);
putpixel(x1+i+6,y1+k,5);
putpixel(x1+i+7,y1+k,5);
putpixel(x1+i+8,y1+k,0);
putpixel(x1+i+9,y1+k,5);
putpixel(x1+i+10,y1+k,5);
putpixel(x1+i+11,y1+k,0);
putpixel(x1+i+12,y1+k,0);
}
}

cout<<"\n\n\n\n\n\nDashed line";
y1=y1+95;
for(i=1;i<=800;i=i+6)
{
for(k=0;k<j;k++)
{
putpixel(x1+i,y1+k,4);
putpixel(x1+i+1,y1+k,4);
putpixel(x1+i+2,y1+k,4);
putpixel(x1+i+3,y1+k,4);
putpixel(x1+i+4,y1+k,0);
putpixel(x1+i+5,y1+k,0);
}
}
s=getch();
//cout<<"Getch:"<<s;
getch();
if(s==72)
{
j=j+1;
goto aii;
}
if(s==80)
{
j=j-1;
goto aii;
}
cout<<"Exiting Program";
getch();
}
