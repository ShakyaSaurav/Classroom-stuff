
//Graphics simple project
#include<conio.h>
#include<stdio.h>
#include<graphics.h>
#include<dos.h>

//changelog ft3
//changelog1
//also in github
void main()
{
int i,gd=DETECT,gm,j;
initgraph(&gd,&gm,"C:\\TURBOC3\\BGI");
setbkcolor(BLACK);
for(i=0;i<200;i++)
{
//top ko red part
setfillstyle(SOLID_FILL,RED);
ellipse(350,300-i,120,170,70,100);
ellipse(277,300-i,10,60,70,100);
line(285,261-i,342,261-i);
floodfill(310,250-i,WHITE);
//ellipse wala body
setfillstyle(SOLID_FILL,WHITE);
ellipse(350,300-i,170,215,70,100);
ellipse(277,300-i,325,60,70,100);
line(291,358-i,336,358-i);
floodfill(315,357-i,WHITE);

//BICH KO JHYAL
setfillstyle(SOLID_FILL,DARKGRAY);
setcolor(BLACK);
circle(313,280-i,15);
circle(313,280-i,10);
floodfill(313,268-i,BLACK);

setfillstyle(SOLID_FILL,BLUE);
floodfill(313,279-i,BLACK);
setcolor(WHITE);

//BOOSTER KO PART
setfillstyle(SOLID_FILL,DARKGRAY);
int arr[]={293,358-i,334,358-i,338,367-i,289,367-i,293,358-i};
drawpoly(5,arr);
floodfill(294,359-i,WHITE);

//LEFT SIDE KO PART
setfillstyle(SOLID_FILL,RED);
int larr[]={280,315-i,270,320-i,255,355-i,287,345-i,280,315-i};
drawpoly(5,larr);
floodfill(275,340-i,WHITE);

//RIGHT SIDE KO PART
setfillstyle(SOLID_FILL,RED);
int rarr[]={346,315-i,355,320-i,370,355-i,340,345-i,346,315-i};
drawpoly(5,rarr);
floodfill(347,318-i,WHITE);

//MOON
setcolor(WHITE);
setfillstyle(SOLID_FILL,LIGHTGRAY);
circle(313,950-i,650-4*i);

if(i<60)
{
line(0,getmaxy(),getmaxx(),getmaxy());
floodfill(313,getmaxy()-2,WHITE);
 }

//THRUSTER
setcolor(RED);
setfillstyle(SOLID_FILL,YELLOW);
int tharr[]={289,367-i,338,367-i,360,400-i,340,380-i,314,500-i,287,380-i,267,400-i,289,367-i};
drawpoly(8,tharr);
floodfill(300,369-i,RED);
setcolor(WHITE);

delay(25);
cleardevice();
}
getch();
closegraph();

}
