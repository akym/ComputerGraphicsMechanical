#include<iostream.h>
#include<conio.h>
#include<graphics.h>
#include<math.h>
void main()
{
clrscr();
cout<<"Enter Radius of circle: ";
float r;
cin>>r;
int xt1,yt1;
xt1 = 200;
yt1 = 200;
int x,y,d;
x=0;
y=r;
d = 3-2*r;
int gd,gm;
detectgraph(&gd,&gm);
initgraph(&gd,&gm,"c:\\tc\\bgi");
putpixel(x+xt1,y+yt1,1);
putpixel(-1 * x+xt1,y+yt1,1);
putpixel(x+xt1,-1*y+yt1,1);
putpixel(-1*x+xt1,-1*y+yt1,1);


do
{
if (d<0)
{
d = d + 4*x+6;
x = x+1;
}
else
{
d=d + 4*x-4*y+10;
x = x+1;
y = y-1;
}

putpixel(x+xt1,y+yt1,2);
//mirror
putpixel(-1*x+xt1,y+yt1,3);
putpixel(x+xt1,-1*y+yt1,4);
putpixel(-1*x+xt1,-1*y+yt1,5);
putpixel(1*y+yt1,1*x+xt1,7);
putpixel(1*y+yt1,-1*x+xt1,8);
putpixel(-1*y+yt1,1*x+xt1,5);
putpixel(-1*y+yt1,-1*x+xt1,6);
}while (x<y);
getch();
}





