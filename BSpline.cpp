#include<conio.h>
#include<graphics.h>
#include<stdio.h>
#include<math.h>
#include<iostream.h>
void main()
{
	clrscr();
	int i,j,k,l,gd,gm,n,s,r;
	float t,p[100][2],x[1000],y[1000],u,v,xx,yy,p0x,p0y,p1x,p1y,dx0,dy0,dx1,dy1;
	cout<<"\n Enter no. of control points:";
	cin>>n;
	cout<<"\n Enter control points:";
	for(i=0;i<n;i++)
	{
		cout<<"\n Enter point "<<i+1<<"\n";
		for(j=0;j<2;j++)
		{
			cin>>p[i][j];
		}
	}
	cout<<"\n Enter straight line end points:\n";
	cin>>p0x>>p0y>>p1x>>p1y;

	cout<<"\n Enter\n 1. Quadratic Spline\n 2. Cubic Spline";
	cin>>s;

	detectgraph(&gd,&gm);
	initgraph(&gd,&gm,"c:\\tc\\bgi");
	switch(s)
	{
		case 1:
		{
			for(i=2;i<n;i++)
			{
				for(t=0;t<=1;t=t+0.001)
				{
					k=i-2;j=i-1;
					xx=0.5*((t*t-2*t+1)*p[k][0]+(-2*t*t+2*t+1)*p[j][0]+(t*t)*p[i][0]);
					yy=0.5*((t*t-2*t+1)*p[k][1]+(-2*t*t+2*t+1)*p[j][1]+(t*t)*p[i][1]);
					putpixel(xx,yy,k);
				}
			}
			break;
		}

		case 2:
		{
			dx0=p0x-x[0];
			dy0=p0y-y[0];
			dx1=p1x-p0x;
			dy1=p1y-p0y;
			for(v=0;v<=1;v=v+0.01)
			{

			for(i=3;i<n;i++)
			{

				r=0;
				for(t=0;t<=1;t=t+0.001)
				{
					l=i-3;k=i-2;j=i-1;
					x[r]=((-t*t*t+3*t*t-3*t+1)*p[l][0]+(3*t*t-6*t*t+4)*p[k][0]+(-3*t*t*t+3*t*t+3*t+1)*p[j][0]+(t*t*t)*p[i][0])/6;
					y[r]=((-t*t*t+3*t*t-3*t+1)*p[l][1]+(3*t*t-6*t*t+4)*p[k][1]+(-3*t*t*t+3*t*t+3*t+1)*p[j][1]+(t*t*t)*p[i][1])/6;

					xx=(1-v)*(x[r])+v*(x[r]+dx1);
					yy=(1-v)*(y[r])+v*(y[r]+dy1);
					xx=xx-dx0;yy=yy-dy0;
					putpixel(xx,yy,3);
					r++;
				}
			}
			}
			/*
			dx0=p0x-x[0];
			dy0=p0y-y[0];
			dx1=p1x-p0x;
			dy1=p1y-p0y;
			for(v=0;v<=1;v=v+0.01)
			{
				for(u=0;u<r;u++)
				{
					xx=(1-v)*(x[u])+v*(x[u]+dx1);
					yy=(1-v)*(y[u])+v*(y[u]+dy1);
					xx=xx-dx0;yy=yy-dy0;
					putpixel(xx,yy,3);
				}
			}    */


			break;
		}
	}


	getch();
}

