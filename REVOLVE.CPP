#include<stdio.h>
#include<conio.h>
#include<math.h>
#include<graphics.h>

void main()
{
	int gd,gm;
	float t,a,x1,x2,y1,y2,xt,yt,zt,x,y;
	clrscr();
	printf("Enter the line co-ordinates:");
	scanf("%f%f%f%f",&x1,&y1,&x2,&y2);

	detectgraph(&gd,&gm);
	initgraph(&gd,&gm,"c:\\tc\\bgi");

	for(a=0;a<=(2*3.14);a=a+0.01)
	{
		for(t=0;t<=1;t=t+0.1)
		{
			xt=x1+(x2-x1)*t;
			yt=(y1+(y2-y1)*t)*cos(2*3.14*a);
			zt=(y1+(y2-y1)*t)*sin(2*3.14*a);

			  //isometric projection
			x=cos(45*3.14/180)*xt+sin(45*3.14/180)*zt;
			y=sin(35.26*3.14/180)*sin(45*3.14/180)*xt+cos(35.26*3.14/180)*yt-sin(35.26*3.14/180)*cos(45*3.14/180)*zt;
			putpixel(x+250,y+250,3);
		}
	 }
getch();
}

