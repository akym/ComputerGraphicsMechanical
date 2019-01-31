#include<conio.h>
#include<iostream.h>
#include<math.h>
#include<graphics.h>
#include<dos.h>

class transform
{
	public:

	//float ans[4][2000];
	int m,n,pi;
	float mat[4][4];
	float **pointmat,**disp,**ans,**oper;
	int g,r;
	transform(int x);
	void realpoint(int,float,float,float);
	void reset();
	void prepmat(int,float,float,float);
	void takpoint();
	void rotate(float,float);
	void translat(float,float,float);
	void scale(float,float);
	void mirror(float);
	void shear(float,float);
	void iso();
	void display(float,float);
	//void dis();
};


void transform::realpoint(int j,float x,float y,float z)
{

	pointmat[0][j]=x;
	pointmat[1][j]=y;
	pointmat[2][j]=z;
	pointmat[3][j]=1;
	oper[0][j]=x;
	oper[1][j]=y;
	oper[2][j]=z;
	oper[3][j]=1;
       //	cout<<"Point"<<pointmat[0][j]<<" "<<pointmat[1][j];

}

void transform::reset()
{
	int i,j;
	for(i=0;i<4;i++)
	{
		for(j=0;j<n;j++)
		{
			pointmat[i][j]=oper[i][j];
		}
	}
}


void transform::display(float a,float s)
{
	int i,j;
	       /*	for(i=0;i<4;i++)
	{
		for(j=0;j<n;j++)
		{
			cout<<" "<<pointmat[i][j];
		}
		cout<<"\n";
	}

 getch();*/


	if(a==1)//front view
	{
		for(i=0;i<=n;i++)
		{       //cout<<"\n"<<i;
			disp[0][i]=pointmat[0][i];
			disp[1][i]=pointmat[1][i];
		       //cout<<"Point"<<pointmat[0][i]<<" "<<pointmat[1][i];
		}

	}
	else
	{
		if(a==2)//sideview
		{
			for(i=0;i<=n;i++)
			{
				disp[0][i]=pointmat[1][i];
				disp[1][i]=pointmat[2][i];
			}

		}
		else
		{
			if(a==3)
			{
				for(i=0;i<=n;i++)
				{
					disp[0][i]=pointmat[0][i];
					disp[1][i]=pointmat[2][i];
				}

			}
		}
	}


       if(s==1)
       {
	for(i=0;i<n-1;i++)
	{       getch();
	     //	cout<<"\nline:"<<disp[0][i]<<","<<disp[1][i]<<"to"<<disp[0][i+1]<<","<<disp[1][i+1];
	   line(disp[0][i],disp[1][i],disp[0][i+1],disp[1][i+1]);
	}
       }
       else
       {
	     g++;
       for(i=0;i<n;i++)
       {

	 if(g>10)
	 {
		 r=r+1;
	       g=1;
	       if(r>7)
	       {
		      r	=1;
	       }

	 }
       putpixel(disp[0][i],disp[1][i],r);
       //cout<<"\n"<<disp[0][i]<< " "<<disp[1][i]<<" "<<n;
       }
       }

}


void transform::iso()
{
rotate(3,45.0);
rotate(2,35.26);
}

void transform::rotate(float a,float b)
{
	int i,j;
	transform temp(4);
	temp.prepmat(1,0,0,0);
	if(a<=4)
	{
		temp.prepmat(3,a,b,0);
		for(i=0;i<4;i++)
		{
			for(j=0;j<n;j++)
			{
				ans[i][j]=temp.mat[i][0]*pointmat[0][j]+temp.mat[i][1]*pointmat[1][j]+temp.mat[i][2]*pointmat[2][j]+temp.mat[i][3]*pointmat[3][j];

			}
		}
	}
	else
	{
			cout<<"plese Check the parameter a, It should be less than 4";

	}

       //cout<<"\n";
	for(i=0;i<4;i++)
	{
		for(j=0;j<n;j++)
		{
			pointmat[i][j]=ans[i][j];
		       //	cout<<": "<<pointmat[i][j];
		}
		//cout<<"\n";
	}


}
void transform::translat(float a,float b,float c)
{
	int i,j;

	transform temp(4);
	temp.prepmat(1,0,0,0);
	temp.prepmat(2,a,b,c);

      /*	for(i=0;i<m;i++)
	{
	for(j=0;j<n;j++)
	{
	cout<<" "<<pointmat[i][j];
	}
	cout<<"\n";
	}
	getch(); */
	       for(i=0;i<4;i++)
		{
			for(j=0;j<n;j++)
			{
			       ans[i][j]=temp.mat[i][0]*pointmat[0][j]+temp.mat[i][1]*pointmat[1][j]+temp.mat[i][2]*pointmat[2][j]+temp.mat[i][3]*pointmat[3][j];
			      //cout<<"\n "<<temp.mat[i][0]<<"*"<<pointmat[0][j]<<"+"<<temp.mat[i][1]<<"*"<<pointmat[1][j]<<"+"<<temp.mat[i][2]<<"*"<<pointmat[2][j]<<"+"<<temp.mat[i][3]<<"*"<<pointmat[3][j];
			}

		}



	for(i=0;i<4;i++)
	{
		for(j=0;j<n;j++)
		{
			pointmat[i][j]=ans[i][j];

		}


	}
    /*for(i=0;i<4;i++)
	{
		//for(j=0;j<n;j++)
		//{
		//delay(200);

		       //	cout<<" "<<pointmat[1][i];
		//}
	//	cout<<"\n";
	}
	getch();*/
}


void transform::mirror(float a)
{
	int i,j;
	transform temp(4);
	transform dev(n);
	temp.prepmat(1,0,0,0);
	temp.prepmat(5,a,0,0);
		for(i=0;i<4;i++)
		{
			for(j=0;j<n;j++)
			{
				ans[i][j]=temp.mat[i][0]*pointmat[0][j]+temp.mat[i][1]*pointmat[1][j]+temp.mat[i][2]*pointmat[2][j]+temp.mat[i][3]*pointmat[3][j];

			}
		}



}

void transform::shear(float a,float b)
{
	int i,j;
	transform temp(4),dev(n);
	temp.prepmat(1,0,0,0);
	temp.prepmat(6,a,b,0);
		for(i=0;i<4;i++)
		{
			for(j=0;j<n;j++)
			{
				ans[i][j]=temp.mat[i][0]*pointmat[0][j]+temp.mat[i][1]*pointmat[1][j]+temp.mat[i][2]*pointmat[2][j]+temp.mat[i][3]*pointmat[3][j];

			}
		}

}

void transform::scale(float a,float b)
{
	int i,j;
	transform temp(4),dev(n);
	temp.prepmat(1,0,0,0);
	temp.prepmat(4,a,b,0);
		for(i=0;i<4;i++)
		{
			for(j=0;j<n;j++)
			{
				ans[i][j]=temp.mat[i][0]*pointmat[0][j]+temp.mat[i][1]*pointmat[1][j]+temp.mat[i][2]*pointmat[2][j]+temp.mat[i][3]*pointmat[3][j];

			}
		}

}

void transform::takpoint()
{
	int i;
	for(i=0;i<n;i++)
	{
		cout<<"Enter "<<i+1<<"th point:";
		cin>>pointmat[0][i]>>pointmat[1][i]>>pointmat[2][i];
		oper[0][i]=pointmat[0][i];
		oper[1][i]=pointmat[1][i];
		oper[2][i] = pointmat[2][i];
		oper[3][i]=1;
		pointmat[3][i]=1;

	}
}


transform::transform(int y)
{
pi=3.1421;
m=4;
n=y;
g=1;
r=1;
pointmat = new float *[m];
ans = new float *[m];
disp = new float *[2];
oper = new float *[m];

for(int i=0;i<m;i++)
{
pointmat[i]=new float[n];
disp[i]=new float[n];
ans[i]=new float[n];
oper[i]=new float[n];
}
}


void transform::prepmat(int a,float x,float y,float z)
{
 int i,j;
      switch(a)
      {
	case 1:
	//preparing unt mtrx
	for(i=0;i<4;i++)
		{
			for(j=0;j<4;j++)
			{
				mat[i][j] =0;
				mat[i][i]=1;
			}
		}
	break;

	case 2:
	//for translation
		mat[0][3]=x;
		mat[1][3]=y;
		mat[2][3]=z;
	break;

	case 3:
	// for ratation
	//about z axis
		if (x==1)
		{
			mat[0][0]=cos(pi/180.0*y);
			mat[0][1]=-sin(pi/180.0*y);
			mat[1][0]=sin(pi/180.0*y);
			mat[1][1]=cos(pi/180.0*y);
		}
		else
		{
			if (x==2) //roration about x
			{
				mat[1][1]=cos(pi/180.0*y);
				mat[1][2]=-sin(pi/180.0*y);
				mat[2][1]=sin(pi/180.0*y);
				mat[2][2]=cos(pi/180.0*y);
			}
			else
			{
				if (x==3) //rotation about y
				{
					mat[0][0]=cos(pi/180.0*y);
					mat[0][2]=sin(pi/180.0*y);
					mat[2][0]=-sin(pi/180.0*y);
					mat[2][2]=cos(pi/180.0*y);
				}
			 }
		}
	break;

	case 4:
	//scaling in x y z
		mat[0][0]=x;
		mat[1][1]=y;
		mat[2][2]=z;
	break;

	case 5:
	// mirror x
		if(x==1)
		{
			mat[0][0]=-1;
		}
		else
		{
			if(x==2)//mir about y
			{
				mat[1][1]=-1;
			}
			else
			{
				if(x==3)     //mir abt z
				{
				mat[2][2]=-1;
				}
			}
		}
	break;

	case 6:
	// shear x
		if(x==1)
		{
			mat[0][0]=y;
		}
		else
		{
			if(x==2)//shear y
			{
				mat[1][1]=y;
			}
			else
			{
				if(x==3)     //shear z
				{
				mat[2][2]=y;
				}
			}
		}
	break;
	}


//this is to see the prepared transform

/*for(i=0;i<m;i++)
{
for(j=0;j<n;j++)
{
cout<<" "<<mat[i][j];
}
cout<<"\n";
}
getch();*/

}


void startgraph()
{
int gd,gm;
detectgraph(&gd,&gm);
initgraph(&gd,&gm,"c:\\tc\\bgi");
}

void main()
{
clrscr();
cout<<"Enter H and K:";
float h,k,pi;
pi=3.1415;
cin>>h>>k;
//cout<<"\nEnter radius:" ;
float r;
//cin>>r;
float i,j;
transform m(100);
startgraph();
float g;
g=0.01;
i=0;
for(i=1;i<360;i++)
{
 for(j=0;j<100;j++)
 {

 m.realpoint(j,g*200,(3*g*g*g-6*g*g+3*g)*200,0);
 g=g+0.01;
 }
 g=0;
delay(20);
//g = (r/360)*i;
//g++;
m.rotate(2,i);
m.iso();
//cout<<"\n"<<i;
m.translat(200.0,200.0,200.0);

m.display(1,2);

}
getch();
}
