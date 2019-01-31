 #include<conio.h>
 #include<math.h>
 #include<iostream.h>
 #include<stdio.h>
 #include<graphics.h>
 void aai( int,int,int,int);

 void main()
{
float dx,dy,step,xinc,yinc,x,y;
float omega,nr;
 cout<<"Assuming all masses roating at same speed";
 //cin>>omega;
 getch();
 clrscr();

 cout<<"How many masses are attached to shaft?\n";
 int xx;
 cin>>xx;
 clrscr();
cout<<"Enter Radius of the new mass= ";
cin>>nr;
clrscr();
 float m,rad,ang[15],f[15];
 int i;
 for (i=1;i<=xx;i++)
 {
 cout<<"Mass of M"<<i<<"= ";
 cin>>m;
 cout<<"\nRadius of rotaion of M"<<i<<"= ";
 cin>>rad;
 cout<<"\nAngle of M"<<i<<"= ";
 cin>>ang[i];
 f[i] = m*rad;
 clrscr();
 }
 int x1,y1,x2,y2,g1,g2,x3,y3,x4,y4,gd,gm;
 detectgraph(&gd,&gm);
 initgraph(&gd,&gm,"c:\\tc\\bgi");
 setcolor(3);
 x1=150;
 y1=100;
 g1 = x1;
 g2=y1;
 x3 = 500;
 y3 = 100;
 double pi;
 pi=3.141592654;
 for(i=1; i<=xx;i++)
 {
  x2 = x1+f[i]*cos(pi*ang[i]/180.0);
  y2 = y1+f[i]*sin(pi*ang[i]/180.0);
  line(x1,y1,x2,y2);
  x4 = x3+f[i]*cos(pi*ang[i]/180.0);
  y4 = y3+f[i]*sin(pi*ang[i]/180.0);
  line(x3,y3,x4,y4);
  x1 = x2;
  y1 = y2;
  circle(x4,y4,3);
  }
setcolor(7);
line(x1,y1,g1,g2);
float nx,ny,nlen,nang,nm;
//cout<<"g1:"<<g1<<" g2:"<<g2<<" x1:"<<x1<<" x2:"<<g4;
nx = g1-x1;
ny = g2-y1;
nlen = sqrt(ny*ny+nx*nx);
nm = nlen / nr;
nang =180/pi* atan(ny / nx);
x4 = x3 + nlen*cos(pi/180*nang);
y4 = y3+ nlen*sin(pi/180*nang);
line(x3,y3,x4,y4);
circle(x4,y4,2);
cout<<"\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\t\t\tRESULTS";
cout<<"\n Mass to be attached = "<<nm;
cout<<"\n Angle at which to be connected = "<<nang;

getch();

 getch();
 }


