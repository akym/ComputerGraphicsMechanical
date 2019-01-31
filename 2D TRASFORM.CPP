#include<iostream.h>
#include<conio.h>
#include<stdio.h>
#include<graphics.h>
#include<math.h>
float p[3][10],p1[3][10],oper[3][3],ans[3][10],pi,z1,z2;
void trans(float,float);
void rotat(float,float,float);
void scali();
void sher();
void mirorr();
void clenoper();
void mul();
void disp(int);
int sids;


void main()
{
clrscr();
aii1:
cout<<"Enter no of sides of polygon:(max 10 sides):";
int i,j;
cin>>sids;

for(i=0;i<sids;i++)
{
	cout<<"\nEnter X  and Y Cordinats for "<<i+1<<" Point of polygon:";
	cin>>p[0][i]>>p[1][i];
	p1[0][i]=p[0][i];
	p1[1][i]=p[1][i];
	p[2][i]=1;
	p1[2][i]=1;

}
clrscr();
cout<<"\nYou Have Entered following polygon";
disp(1);
getch();
bck:
clrscr();
pi=3.141592654;
cout<<"Select Transformation You Want to Perform:";
int selct;
cout<<"\nEnter:\n 1. Translation\n 2. Rotation\n 3. Scaling\n 4. Mirror \n 5. Shearing\n:";
cin>>selct;
float x,y,ang;
switch(selct)
{
	case 1:
		cout<<"Enter Transformation in Direction of X and Y:";
		cin>>x>>y;
		trans(x,y);
		clrscr();
		cout<<"After Translation Polygon Will be:";
		clrscr();
		//setcolor(4);
		disp(2);
	break;

	case 2:
		cout<<"Enter the point about which you want to rotate:(if about origin, then press 0 0):";
		cin>>x>>y;
		cout<<"\nEnter angle:" ;
		cin>>ang;
		rotat(x,y,ang);
		disp(2);
	break;

	case 3:
		scali();
		disp(2);
	break;

	case 4:
		mirorr();
	break;

	case 5:
		sher();
		disp(2);
	break;

	default:
		cout<<"\nEnter Proper Selection";
		goto bck;
}
getch();
}




void cleanoper()  //function for cleaning operator matrix
{
 int i,j;
  for(i=0;i<3;i++)
  {
	for(j=0;j<3;j++)
	{
		oper[i][j]=0;
	}
  }

	for(j=0;j<3;j++)
	{
		oper[j][j]=1;
	}
}                               //cleanoper ends







void trans(float x, float y)    //function for translation
	{
	 cleanoper();
	 oper[0][2]=x;
	 oper[1][2]=y;
	 mul();
	}                               //function for translation ends




void mirorr()
{
cout<<"\n 1. About line with Equation X=____ \n 2. About line with equation Y=MX+C\n";
float chk,r,m,c;
cin>>chk;
if(chk==1)
{
	cout<<"\nEnter Equation of line:\n X=";
	cin>>r;
	trans(-r,0);
	cleanoper();
	oper[0][0]=-1;
	mul();
	trans(r,0);

}
else
{
if(chk==2)
{
	cout<<"\nEnter Equation of line:\n Y=Mx+c;\nEnter M and c";
	cin>>m>>c;
	trans(0,-c);
	rotat(0,0,atan(m));
	cleanoper();
	oper[1][1]=-1;
	mul();
	rotat(0,0,-atan(m));
	trans(0,c);

}
}
disp(2);
}

void mul()                       //function for multiplication
	{
	int i,j;

		for(i=0;i<3;i++)
		{
			for(j=0;j<sids;j++)
			{
		       //cout<<oper[i][0]<<"*"<<p1[0][j]<<"+"<<oper[i][1]<<"*"<<p1[1][j]<<"+"<<oper[i][2]<<"*"<<p1[2][j];
			ans[i][j]=oper[i][0]*p1[0][j]+oper[i][1]*p1[1][j]+oper[i][2]*p1[2][j];
			//cout<<"="<<ans[i][j]<<"  ";
			//getch();
			}
			//cout<<"\n";
	       }

	//giving all values of ans to p1
	for(i=0;i<3;i++)
		{
			for(j=0;j<sids;j++)
			{
			p1[i][j] = ans[i][j];
			}
		}   //transfering value to  p1
	}          //matrix mupltiplication completed



void disp(int f)
	{
	int gd,gm;
	detectgraph(&gd,&gm);
	initgraph(&gd,&gm,"c:\\tc\\bgi");
	 int i;
	 setcolor(1);
	 for(i=0;i<sids;i++)
	 {

		if(i<sids-1)
		{
		       line(p[0][i],p[1][i],p[0][i+1],p[1][i+1]);
		}
		 else
		{
			line(p[0][0],p[1][0],p[0][i],p[1][i]);
		}
	 }

	 if(f==2)
	 {
		cout<<"ORIGINAL OBJECT YOU ENTERED IS IN BLUE AND TRANSFORMED OBJECT IS IN RED COLOR";
		setcolor(4);
		for(i=0;i<sids;i++)
		 {

			if(i<sids-1)
			{
			 line(p1[0][i],p1[1][i],p1[0][i+1],p1[1][i+1]);
			}
			 else
			{
			 line(p1[0][0],p1[1][0],p1[0][i],p1[1][i]);
			}
		  }
	 }
	 else
	 {
	 cout<<"ORIGINAL OBJECT YOU ENTERED IS AS SHOWN";
	 }
	 getch();
	closegraph();
}

void rotat(float x,float y, float ang)
{
cleanoper();
trans(-1*x,-1*y);
cleanoper();
oper[0][0]=cos(ang*pi/180);
oper[0][1]=-1*sin(ang*pi/180);
oper[1][0]=sin(ang*pi/180);
oper[1][1]=cos(ang*pi/180);
mul();
cleanoper();
trans(x,y);
}

void scali()
{
cout<<"\nEnter the Scaling Factors in Directions of x and y:";
float sx,sy,x,y;
cin>>sx>>sy;
cout<<"\nEnter the Base Point About Which object has to be scaled:";
cin>>x>>y;
trans(-1*x,-1*y);
cleanoper();
oper[0][0]=sx;
oper[1][1]=sy;
mul();
trans(x,y);
}

void sher()
{
cout<<"Enter Shearing Factors in Direction of X and Y:";
float sx,sy,chk,x,y,r,m,c;
int drctn;
cin>>sx>>sy;
cout<<"\n Enter the line about which object has to rotated";
cout<<"\n 1. For line with Equation X=____ \n 2. For line with equation Y=MX+C\n:";
cin>>chk;
cout<<"Enter   \n 1. to shear object in direction ox X \n 2. To Shear in Direction of ONLY Y\n 3. To Shear in Both Directions\n:";
cin>>drctn;
if(drctn!=1&&drctn!=2&&drctn!=3)
{
 clrscr();
 cout<<"Invalid Data Entry!!!! Program will Terminate";
 goto edl;
}
if(chk==1)
{
	cout<<"\nEnter Equation of line:\n X=";
	cin>>r;
	trans(-r,0);
	if(drctn==1)
	{
		cleanoper();
		oper[0][1]=sx;
		mul();
		trans(r,0);
	}
	else
	{
		if(drctn==2)
		{
			//rotat(0,0,90.0);
			cleanoper();
			oper[1][0] = sy;
			mul();
			trans(r,0);
		}
		else
		{
			if(drctn==3)
			{
			cleanoper();
			oper[1][0]=sy;
			oper[0][1]=sx;
			mul();
			trans(r,0);
			}
		}
	}
}
if(chk==2)
{
	cout<<"\nEnter Equation of line:\n Y=Mx+c;\nEnter M and c";
	cin>>m>>c;
	trans(0,-c);
	rotat(0,0,atan(m));
	if(drctn==1)
	{       cleanoper();
		oper[0][1]=sx;
		mul();
		trans(0,c);
	}
	else
	{
		if(drctn==2)
		{
			cleanoper();
			oper[1][0] = sy;
			mul();
			trans(0,c);
		}
		else
		{
			if(drctn==3)
			{
			cleanoper();
			oper[1][0]=sy;
			oper[0][1]=sx;
			mul();
			trans(0,c);
			}
		}
	}

}
edl:
}


