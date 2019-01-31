#include<iostream.h>
#include<graphics.h>
#include<conio.h>
#include<math.h>
void main()
{
int xt1,yt1;
xt1 =100;
yt1 = 100;
double x,y,r;
double d;
double s;
clrscr();
cout<<"Enter Radius of circle:";
cin>>r;
aii:
cout<<"\nEnter S value for lamme's Curve: ";
cin>>s;
int gd,gm;
detectgraph(&gd,&gm);
initgraph(&gd,&gm,"c:\\tc\\bgi");
x = 0;
y=r;
d = 1.00+pow((r-1.0/2),2.0/s)-pow(r,2.0/s);
putpixel(x+xt1,y+yt1,1);
putpixel(-x+xt1,y+yt1,2);
putpixel(x+xt1,-y+yt1,3);
putpixel(-x+xt1,-y+yt1,4);
if (s<=2)
{
do
{
if (d<0)
{
d = pow((x+2.0),2.0/s)+pow((y-1.0/2.0),2.0/s)-pow(r,2.0/s);
x=x+1;
}
else
{
d = pow((x+2.0),2.0/s)+pow((y-3.0/2.0),2.0/s)-pow(r,2.0/s);
x=x+1;
y=y-1;
}
putpixel(x+xt1,y+yt1,1);
putpixel(-x+xt1,y+yt1,2);
putpixel(x+xt1,-y+yt1,3);
putpixel(-x+xt1,-y+yt1,4);
putpixel(y+yt1,x+xt1,1);
putpixel(-y+yt1,x+xt1,2);
putpixel(y+yt1,-x+xt1,3);
putpixel(-y+yt1,-x+xt1,4);
} while(x<y);
}
else
{
 do
{
if (d<0)
{
d = pow((x+2.0),2.0/s)+pow((y-1.0/2.0),2.0/s)-pow(r,2.0/s);
y=y-1;
x=x+1;
}
else
{
d = pow((x+2.0),2.0/s)+pow((y-3.0/2.0),2.0/s)-pow(r,2.0/s);
y=y-1;
}
putpixel(x+xt1,y+yt1,1);
putpixel(-x+xt1,y+yt1,2);
putpixel(x+xt1,-y+yt1,3);
putpixel(-x+xt1,-y+yt1,4);
putpixel(y+yt1,x+xt1,1);
putpixel(-y+yt1,x+xt1,2);
putpixel(y+yt1,-x+xt1,3);
putpixel(-y+yt1,-x+xt1,4);

} while(x<y);

}
cout<<"Press 1 to Use it again and 2 to Quit:";
int e;
cin>>e;
if (e==1)
{
clrscr();
goto aii;
}
getch();
}