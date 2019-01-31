#include<conio.h>
#include<graphics.h>
#include<stdio.h>
#include<math.h>
#include<iostream.h>
float fun(int a,int b)
{
	int c,facta=1,factb=1,factab=1;
	float r;
	while(a>=1)
	{
		facta=facta*a;
		a--;
	}

	while(b>=1)
	{
		factb=factb*b;
		b--;
	}
	c=a-b;
	while(c>=1)
	{
		factab=factab*c;
		c--;
	}
	r=facta/(factb*factab);
	return(r);
}

float main()
{
	clrscr();
	int i,m;
	int j,k,n,gd,gm;
	float t,p[1000][2],x[1001],y[1001];
	float r,s,u,v;
	cout<<"\n Enter degree of the curve:";
	cin>>n;
	cout<<"\n Enter control points:\n";
	detectgraph(&gd,&gm);
	initgraph(&gd,&gm,"c:\\tc\\bgi");
	for(i=0;i<=n;i++)
	{
		cout<<i<<" pt:";
		for(j=0;j<2;j++)
		{
			cin>>p[i][j];
		}
		cout<<"\n";
	}
	k=1001;
	j=0;
	for(t=0;t<=1;t=t+0.001)
	{

		x[j]=0;y[j]=0;
		for(i=0;i<=n;i++)
		{
			r=1;u=1;
			for(m=1;m<=i;m++)
			{
				r=r*t;
			}
			v=n-i;
			for(m=1;m<=v;m++)
			{
				u=u*(1-t);
			}
			x[j]=x[j]+(p[i][0]*r*u*fun(n,i));
			y[j]=y[j]+(p[i][1]*r*u*fun(n,i));
		}
		j++;
	}
	for(i=0;i<k;i++)
	{
		putpixel(100+x[i],100+y[i],3);
	}
	getch();
	return 0;
}

