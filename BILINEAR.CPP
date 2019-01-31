#include<conio.h>
#include<graphics.h>
#include<stdio.h>
#include<math.h>
void main()
{
 int gd,gm;
 float qx,qy,qz,x0,y0,z0,x1,y1,z1,x2,y2,z2,x3,y3,z3,u,v,t,xn;
   printf("enter the value of x0,y0,z0,x1,y1,z1,x2,y2,z2,x3,y3,z3 \n");
   scanf("%f%f%f%f%f%f%f%f%f%f%f%f",&x0,&y0,&z1,&x1,&y1,&z1,&x2,&y2,&z2,&x3,&y3,&z3);
   printf("\nenter the value ofangle t ");
   scanf("%f",&t);
 detectgraph(&gd,&gm);
 initgraph(&gd,&gm,"c:\\tc\\bgi");
   for(u=0;u<=1;u=u+0.01)
   {
   for(v=0;v<=1;v=v+0.01)
   {
    qx=(1-v)*(1-u)*x0+(1-v)*u*x1+(1-u)*v*x2+(u*v)*x3;
    qy=(1-v)*(1-u)*y0+(1-v)*u*y1+(1-u)*v*y2+(u*v)*y3;
    qz=(1-v)*(1-u)*z0+(1-v)*u*z1+(1-u)*v*z2+u*v*z3;
    xn=qx*cos((3.14/180)*t)+qz*sin((3.14/180)*t);
    putpixel(xn+200,qy+200,12);
    }
    }
    getch();
    }