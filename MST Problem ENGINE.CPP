 #include<conio.h>
 #include<iostream.h>
 #include<graphics.h>
 #include<math.h>

//aii

 void main()
 {
 clrscr();
 float x1,y1,x2,y2,scl,work,tmean,pi;
 pi=3.1425;
 x1=100;
 y1=300;
 cout<<"Enter the values of Min. Torque and Max Torque:";
float tmn,tmx;
cin>>tmn>>tmx;

if(tmx>200)
{
scl = tmx/200;
}
else
{
scl=1;
}
//assuming 2pi =50
clrscr();
work = (6*pi+2*pi)*(tmx-tmn)/2+tmn*8*pi;
tmean=work/(8.0*pi);
int gd,gm;
detectgraph(&gd,&gm);
initgraph(&gd,&gm,"c:\\tc\\bgi");

cout<<"Work Done:"<<work;
cout<<"\nTmean:"<<tmean;
//setcolor(2);
line(x1,y1,x1+600,y1);
//setcolor(4);
line(x1,y1,x1,0);
setcolor(4);

line(x1,y1,x1,y1-tmn);
line(x1,y1-tmn,x1+50,y1-tmx-tmn);
line(x1+50,y1-tmx-tmn,x1+50+50,y1-tmx-tmn);
line(x1+50+50,y1-tmx-tmn,x1+50+50+50,y1-tmn);
line(x1+50+50+50,y1-tmn,x1+50+50+50+50,y1-tmn);
line(x1+50+50+50+50,y1-tmn,x1+50+50+50+50,y1);
setcolor(5);
line(x1,y1-tmean,x1+210,y1-tmean);
getch();
}