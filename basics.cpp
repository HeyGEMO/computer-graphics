#include<stdio.h>
#include<graphics.h>
int main()
{
int gd=DETECT,gm;
initgraph(&gd,&gm," ");
circle(300,300,100);
circle(250,250,50);
circle(350,250,50);
rectangle(250,370,350,320);
rectangle(250,500,350,400);
getch();
closegraph();
return 0;
}
