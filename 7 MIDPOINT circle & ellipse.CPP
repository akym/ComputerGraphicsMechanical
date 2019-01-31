#include<conio.h>
#include<iostream.h>
#include<graphics.h>
#include<math.h>
void main()
{
int xt1,xt2;
xt1 = 100;
xt2 = 100;
float a,b,x,y,d,i;
clrscr();
cout<<"What you want to Draw?\n";
cout<<"Press 1. for Circle and 2.For Ellipse\n:";
cin>>i;
if (i==1)
{
cout<<"\nEnter Radius: ";
cin>>a;
b = a;
}
else
{
cout<<"\n Enter a for ellipse: ";
cin>>a;
cout<<"\n Enter b for Ellipse: ";
cin>>b;
}

// algo starts
x=0;
y=b;
d = b * b - a*a*b+a*a/4;
int gd,gm;
detectgraph(&gd,&gm);
initgraph(&gd,&gm,"c:\\tc\\bgi");
putpixel(x+xt1,y+xt2,1);
putpixel(-x+xt1,y+xt2,1);
putpixel(x+xt1,-y+xt2,1);
putpixel(-x+xt1,-y+xt2,1);

do
{
if (d<0)
{
d = d+b*b*(2*x+3);
x=x+1;
}
else
{
d =d + b*b*(2*x+3) + a*a*(-2*y+3);
x=x+1;
y=y-1;
}
putpixel(x+xt1,y+xt2,2);
putpixel(-x+xt1,y+xt2,3);
putpixel(x+xt1,-y+xt2,4);
putpixel(-x+xt1,-y+xt2,5);
} while(a*a*(y-1/2)>b*b*(x+1));

//region 2
d = b*b*(x+1/2)*(x+1/2)+a*a*(y-1)*(y-1)-a*a*b*b;
do
{
if(d<0)
{
d = d+b*b*(2*x+2)+a*a*(-2*y+3);
x=x+1;
y=y-1;
}
else
{
d =d+a*a*(-2*y+3);
y = y-1;
}
putpixel(x+xt1,y+xt2,2);
putpixel(-x+xt1,y+xt2,3);
putpixel(x+xt1,-y+xt2,4);
putpixel(-x+xt1,-y+xt2,5);

}while(y>0);

getch();
}

