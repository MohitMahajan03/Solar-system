#include<iostream.h>
#include<conio.h>
#include<math.h>
#include<graphics.h>
class solar
{
	private:
	int j;
	double i,x,f;
	public:
	void show();
	void revolve();
};

void solar::show()
{
	double i,x;
	i=0;
	//sun
	x=i+0;
	setfillstyle(1,14);
	fillellipse(320,240,20,20);
	//mercury
	circle(320,240,32);
	setfillstyle(1,6);
	x=i+1.5;
	fillellipse(320+(cos(x)*32),240+(sin(x)*32),4,4);

	//venus
	circle(320,240,56);
	setfillstyle(1,14);
	x=i+3.14;
	fillellipse(320+(sin(x)*56),240+(cos(x)*56),5,5);
	//earth
	circle(320,240,80);
	setfillstyle(1,9);
	x=i-0.7;
	fillellipse(320+(cos(x)*80),240+(sin(x)*80),6,6);

	//mars
	circle(320,240,100);
	setfillstyle(1,4);
	x=i-1.5;
	fillellipse(320+(cos(x)*100),240+(sin(x)*100),5,5);

	//jupiter
	circle(320,240,140);
	setfillstyle(1,12);
	x=i+0.7;
	fillellipse(320+(cos(x)*140),240+(sin(x)*140),16,16);
	setfillstyle(1,4);
	fillellipse(320+(cos(x)*140),240+(sin(x)*140),12,12);
	setfillstyle(1,14);
	fillellipse(320+(cos(x)*140),240+(sin(x)*140),6,6);
	setfillstyle(1,15);
	fillellipse(320+(cos(x)*140),240+(sin(x)*140),2,2);

	//saturn
	circle(320,240,180);
	setfillstyle(1,12);
	x=i-3.14;
	fillellipse(320+(cos(x)*180),240+(sin(x)*180),10,10);
	ellipse(320+(cos(x)*180),240+(sin(x)*180),0,360,20,20);
	ellipse(320+(cos(x)*180),240+(sin(x)*180),0,360,22,22);
	ellipse(320+(cos(x)*180),240+(sin(x)*180),0,360,24,24);
	ellipse(320+(cos(x)*180),240+(sin(x)*180),0,360,26,26);

	//uranus
	circle(320,240,210);
	setfillstyle(1,2);
	x=i+2.35;
	fillellipse(320+(cos(x)*210),240+(sin(x)*210),10,10);
	ellipse(320+(cos(x)*210),240+(sin(x)*210),0,360,14,14);

	//neptune
	circle(320,240,240);
	setfillstyle(1,1);
	x=i+0;
	fillellipse(320+(cos(x)*240),240+(sin(x)*240),10,10);

}
void solar::revolve()
{
	for(i=0;i<100;i++)
	{
		for(j=0;j<10;j++)
		{
			//sun
			x=i+0;
			setfillstyle(1,14);
			fillellipse(320,240,20,20);
			//mercury
			circle(320,240,32);
			setfillstyle(1,6);
			x=i+1.5;
			fillellipse(320+(cos(x)*32),240+(sin(x)*32),4,4);

			//venus
			circle(320,240,56);
			setfillstyle(1,14);
			x=i+3.14;
			fillellipse(320+(sin(x)*56),240+(cos(x)*56),5,5);

			//earth
			circle(320,240,80);
			setfillstyle(1,9);
			x=i-0.7;
			fillellipse(320+(cos(x)*80),240+(sin(x)*80),6,6);

			//mars
			circle(320,240,100);
			setfillstyle(1,4);
			x=i-1.5;
			fillellipse(320+(cos(x)*100),240+(sin(x)*100),5,5);

			//jupiter
			circle(320,240,140);
			setfillstyle(1,12);
			x=i+0.7;
			fillellipse(320+(cos(x)*140),240+(sin(x)*140),16,16);
			setfillstyle(1,4);
			fillellipse(320+(cos(x)*140),240+(sin(x)*140),12,12);
			setfillstyle(1,14);
			fillellipse(320+(cos(x)*140),240+(sin(x)*140),6,6);
			setfillstyle(1,15);
			fillellipse(320+(cos(x)*140),240+(sin(x)*140),2,2);

			//saturn
			circle(320,240,180);
			setfillstyle(1,12);
			x=i-3.14;
			fillellipse(320+(cos(x)*180),240+(sin(x)*180),10,10);
			ellipse(320+(cos(x)*180),240+(sin(x)*180),0,360,20,20);
			ellipse(320+(cos(x)*180),240+(sin(x)*180),0,360,22,22);
			ellipse(320+(cos(x)*180),240+(sin(x)*180),0,360,24,24);
			ellipse(320+(cos(x)*180),240+(sin(x)*180),0,360,26,26);

			//uranus
			circle(320,240,210);
			setfillstyle(1,2);
			x=i+2.35;
			fillellipse(320+(cos(x)*210),240+(sin(x)*210),10,10);
			ellipse(320+(cos(x)*210),240+(sin(x)*210),0,360,14,14);

			//neptune
			circle(320,240,240);
			setfillstyle(1,1);
			x=i+0;
			fillellipse(320+(cos(x)*240),240+(sin(x)*240),10,10);

		}
		cleardevice();
	}
	show();
}
void main()
{
	clrscr();
	int gdriver=DETECT,gm,j;
	initgraph(&gdriver, &gm, "c:/turboc3/bgi");
	solar s;
	s.show();
	getch();
	s.revolve();
	getch();
}

