#include<aii.h>
void main()
{
clrscr();
startgraph();
cout<<"Enter How many Points are there in the diagram:" ;
int i;
cin>> i;
transform m(i);
m.takpoint();
clrscr();
cout<<"Actual Object is as shown";
m.iso();
m.display(1,1);
getch();
m.reset();
setcolor(4);
cout<<"Translatiing it in x y z direction";
m.translat(50,50,50);
m.iso();
m.display(1,1);
getch();

}