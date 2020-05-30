#include<graphics.h>
#include<conio.h>
#include<dos.h>
int main()
{
    //iniatialising window
    initwindow(639,479);
    //setting backgroundcolor work with loop only
    setbkcolor(WHITE);
    int y=0;
    int x=0;
    while(1)
    {
    delay(250);//time delay
    cleardevice();
	
	//1st red rectangle
	setcolor(RED);
    	setfillstyle(SOLID_FILL,RED);
	line(290,179+y,310,179+y);
	line(270,295+y,290,295+y);
	line(290,179+y,270,295+y);
	line(290,295+y,310,179+y);
	int p2[]={290,179+y,310,179+y,290,295+y,270,295+y};
	fillpoly(4,p2);
	
	//2nd red rectangle
	setfillstyle(SOLID_FILL,LIGHTRED);
	line(310,179+y,360,189+y);
	line(360,189+y,340,305+y);
	line(340,305+y,290,295+y);
	
	int p1[]={310,179+y,360,189+y,340,305+y,290,295+y};
	fillpoly(4,p1);
	
    	//3rd red rectangle
	
	setfillstyle(SOLID_FILL,RED);
	line(340,305+y,360,315+y);
	line(360,189+y,380,199+y);
	line(360,315+y,380,199+y);
	int p3[]={360,189+y,380,199+y,360,315+y,340,305+y};
	fillpoly(4,p3);
	
	
	//eyes and mouth
	//mouth
	setcolor(BLACK);
	setfillstyle(SOLID_FILL,BLACK);
	circle(319,239+y,3);
	floodfill(319,239+y,BLACK);
	//1st eye
	setfillstyle(SOLID_FILL,BLACK);
         circle(304,219+y,5);
   	floodfill(304,219+y,BLACK);
    	//2nd eye
	setfillstyle(SOLID_FILL,BLACK);
	circle(334,219+y,5);
	floodfill(334,219+y,BLACK);
	
	//yellow part
	setcolor(YELLOW);
	setfillstyle(SOLID_FILL,YELLOW);
	line(290,295+y,270,295+y);
	line(340,305+y,360,315+y);
	line(290,295+y,340,305+y);
	line(270,295+y,305,345+y);
	line(360,315+y,305,345+y);
	int p4[]={290,295+y,270,295+y,305,345+y,360,315+y,340,305+y};
	fillpoly(5,p4);
	
	//pencil lead
	setcolor(RED);
	setfillstyle(SOLID_FILL,RED);
	line(310,320+y,286,320+y);
	line(310,320+y,334,330+y);
	line(286,320+y,305,345+y);
	line(334,330+y,305,345+y);
	int p5[]={310,320+y,286,320+y,305,345+y,334,330+y};
	fillpoly(4,p5);

    //hands and arm
    
    //hand
	setcolor(BLACK);
	setfillstyle(SOLID_FILL,BLACK);
	circle(247,286+x,5);
	floodfill(247,286+x,BLACK);
	//arm
	line(245,285+x,272,285+y);
	line(272,285+y,272,290+y);
	line(272,290+y,245,290+x);
	line(245,290+x,245,285+x);
	int p6[]={245,285+x,272,285+y,272,290+y,245,290+x};
	fillpoly(4,p6);	
	
	//hand
	circle(325,286+x,5);
	floodfill(325,286+x,BLACK);
	//arm
	line(323,285+x,350,285+y);
	line(350,285+y,350,290+y);
	line(350,290+y,323,290+x);
	line(323,290+x,323,285+x);
	int p7[]={323,285+x,350,285+y,350,290+y,323,290+x};
	fillpoly(4,p7);	
	
    //for motion 
    y=(y==0)?10:0;
    x=(x==0)?2:0;
	
	
	
}
	getch();
}