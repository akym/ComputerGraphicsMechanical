#include<conio.h>
#include<iostream.h>
#include<math.h>
#include<graphics.h>
void main()
{
//cout<<"Select the type of Line You Draw,\n1.Dotted Line\n2.Center Line\n3.Dashhed Line";
clrscr();
int gd,gm;
detectgraph(&gd,&gm);
initgraph(&gd,&gm,"c:\\tc\\bgi");
int x1,y1,i;
x1=100;
y1=25;
cout<<"\nDotted Line";
for(i=1;i<=800;i=i+2)
{
putpixel(x1+i,y1,3);
}

cout<<"\n\n\n\n\n\nCentre line";
y1=y1+95;
for(i=1;i<=800;i=i+12)
{
putpixel(x1+i,y1,5);
putpixel(x1+i+1,y1,5);
putpixel(x1+i+2,y1,5);
putpixel(x1+i+3,y1,5);
putpixel(x1+i+4,y1,5);
putpixel(x1+i+5,y1,5);
putpixel(x1+i+6,y1,5);
putpixel(x1+i+7,y1,5);
putpixel(x1+i+8,y1,0);
putpixel(x1+i+9,y1,5);
putpixel(x1+i+10,y1,5);
putpixel(x1+i+11,y1,0);
putpixel(x1+i+12,y1,0);

}

cout<<"\n\n\n\n\n\nDashed line";
y1=y1+95;
for(i=1;i<=800;i=i+6)
{
putpixel(x1+i,y1,4);
putpixel(x1+i+1,y1,4);
putpixel(x1+i+2,y1,4);
putpixel(x1+i+3,y1,4);
putpixel(x1+i+4,y1,0);
putpixel(x1+i+5,y1,0);
}

getch();
}
