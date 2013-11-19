#include <graphics.h>
#include <stdlib.h>
#include <conio.h>
#include <stdio.h>
#include <ctype.h>
#include <dos.h>
int tx,ty;//mouse readers
union REGS i,o;//traction
int cl;//trac cliq
int gapi,gapk,gapt;//gap loading tools
int pay=0;//payment select


int da=35;//date control
char dater[30];//date store
char ch;//date input
int wf;//1 or 2 way
int from,to,suit;
int m1c,m2c,adc,chdc,inc;//menu 1+2 counter
int adno,chno,inno;//finalised adult,children,infant number.
int tvar;

//registry parts
int dac,dbc;//capcha input
int infcount=0,cc=0;//infcount to differ traction 1and2.
char buffer[130];//details fill-up
int outx,outy,ind,j,f,s,pxc,pyc;//captcha tools generator
char p,cap[30],l,m;//captcha character reader+string
int tx,ty,ix,iy;char ch;//details fill-up

struct custom
{
char fname[30],lname[30],add[40],city[30],state[30];
char pin[10],mobile[15],mail[30],cmail[30],pass[20];
}cus[10];                 //title seen in registry
void bk1()
{  cleardevice();
   setbkcolor(0);
   //setfillstyle(7,9);
   //bar(0,0,700,500);
   //setfillstyle(7,0);
   //bar(0,0,150,70);
   setcolor(7);
   rectangle(0,0,getmaxx(),getmaxy());
   setcolor(15);settextstyle(3,0,5);
   outtextxy(10,4,"isp@ce");
   setcolor(15);settextstyle(2,0,5);
   outtextxy(10,50,"ready.book.discover");
}
void bk()                //title header
{  cleardevice();
   setbkcolor(0);
   setcolor(3);settextstyle(3,0,5);
   outtextxy(10,4,"isp@ce");
   setcolor(15);settextstyle(2,0,3);
   outtextxy(100,4,"sm");

   setcolor(3);settextstyle(2,0,5);
   outtextxy(10,50,"ready.book.discover.");
   setfillstyle(10,15);
   //bar(250,0,700,50);
   setcolor(15);settextstyle(11,0,2);
   outtextxy(110,340,"All rights reserved.ispace 2011.impact incorporated.");

}

void travel()   //main page book your travel
{
setfillstyle(1,1);
bar(0,90,200,300);setfillstyle(1,14);bar(0,90,200,110);
setcolor(8);settextstyle(1,0,1);
outtextxy(0,90,"BOOK YOUR TRAVEL");

setcolor(0);settextstyle(5,0,1);    //5 1
outtextxy(14,102,"one way");

//setcolor(15);settextstyle(2,0,5);outtextxy(2,111,"0");
//outtextxy(105,111,"0");
setcolor(0);settextstyle(5,0,1);
outtextxy(117,102,"return trip");
outtextxy(2,259,"date:");
setcolor(15);settextstyle(2,0,4);
outtextxy(45,284,"e.g.09jun11");

setfillstyle(1,15);
bar(2,117,10,123);bar(105,117,113,123);//set bar
setfillstyle(1,2);
bar(3,118,9,122); //default green

setcolor(0);settextstyle(5,0,1);
outtextxy(5,130,"from");
setcolor(0);settextstyle(5,0,1);
outtextxy(120,130,"going to");
setfillstyle(1,15);
bar(2,160,90,170); bar(110,160,198,170); //w8 bar

setfillstyle(1,9);    //blue bar
bar(81,160,90,170);bar(189,160,198,170);

setcolor(15);settextstyle(11,0,5);
outtextxy(191,162,"V");outtextxy(83,162,"V");  //drop menu

setfillstyle(1,15);
bar(2,195,40,207); bar(80,195,110,207); bar(150,195,190,207);   //a c i

setcolor(0);settextstyle(5,0,1);
outtextxy(2,170,"adults");
settextstyle(5,0,1);
outtextxy(80,170,"child");
settextstyle(5,0,1);
outtextxy(150,170,"infant");

setfillstyle(1,9);    //blue bar
bar(31,195,40,207);bar(101,195,110,207); bar(181,195,190,207);


setcolor(15);settextstyle(11,0,5);
outtextxy(33,197,"V");outtextxy(103,197,"V"); outtextxy(183,197,"V");  //drop menu //drop menu

setcolor(0);settextstyle(5,0,1);
outtextxy(2,210,"cabin/class");
outtextxy(14,230,"economy");outtextxy(132,230,"business");

setfillstyle(1,15);
bar(2,246,10,252);bar(105,246,113,252);//set bar
setfillstyle(1,2);
bar(3,247,9,251); //default green

setfillstyle(1,15);
bar(40,270,150,285);
}
void gravitas()      //for ads and design
{
setcolor(1);settextstyle(2,0,5);
outtextxy(550,300,"follow us on");
setfillstyle(1,3);
bar(550,315,570,340);
setfillstyle(1,9);
bar(575,315,595,340);
setfillstyle(1,14);
bar(600,315,620,340);

setcolor(9);settextstyle(10,0,1);outtextxy(555,303,"t");
setcolor(15);settextstyle(10,0,1);outtextxy(580,303,"f");
setcolor(4);settextstyle(3,0,1);outtextxy(600,320,"");
setcolor(3);settextstyle(11,0,5);

outtextxy(220,4,".");outtextxy(215,10,".");
outtextxy(210,16,".");outtextxy(205,22,".");
outtextxy(200,28,".");outtextxy(195,34,".");
outtextxy(190,40,".");outtextxy(185,46,".");
outtextxy(180,52,".");//st

outtextxy(212,22,".");outtextxy(215,28,".");
outtextxy(218,34,".");//r8 side f.wing
outtextxy(193,46,".");outtextxy(195,52,".");//r8 side b.wing

outtextxy(203,17,".");outtextxy(196,19,".");
outtextxy(189,21,".");//left side f.wing
outtextxy(182,41,".");outtextxy(176,43,"."); //left side b.wing

setcolor(15);settextstyle(11,0,5);
outtextxy(300,10,"m   s a e");
setcolor(12);
outtextxy(300,10," y   p c  ");
setcolor(3);
outtextxy(455,10,"new comer?");setcolor(15);
outtextxy(538,10,"sign up");setcolor(12);
outtextxy(600,10,"here.");
//outtextxy(300,10,"m   s a e");
setcolor(12);
//outtextxy(300,10," y   p c  ");

setfillstyle(1,10);
bar(350,150,400,200); bar(355,205,360,215);bar(395,205,390,215);
bar(403,160,408,140);bar(347,160,342,140);//hand
setcolor(10);
arc(375,140,0,180,20);
line(356,140,394,140);
setcolor(15);settextstyle(5,0,2);
outtextxy(300,110,"make me to see you");
outtextxy(300,150,"celebrate this diwali");
outtextxy(300,170,"with me + ispace");
setcolor(15);settextstyle(11,0,5);
outtextxy(290,217,"Available in market now!");

setcolor(15);settextstyle(11,0,2);
outtextxy(110,340,"All rights reserved.ispace 2011.impact incorporated.");
}

void isp()
{
setcolor(3);settextstyle(11,0,5);
outtextxy(1,307,"why should you");outtextxy(1,317,"prefer");
outtextxy(49,327,"here for more...");  //dr
setcolor(15);
outtextxy(1,327,"click"); outtextxy(58,317,"ispace");  //dr
}

void way(int wf)
{                                               //way high l8
if(wf)
{setfillstyle(1,15);bar(2,117,10,123);
setfillstyle(1,2);bar(106,118,112,122);}
if(!wf)
{setfillstyle(1,15);bar(105,117,113,123);
setfillstyle(1,2);bar(3,118,9,122);}
}
void ecob(int eb)
{
if(eb==1)
{
setfillstyle(1,15);
bar(2,246,10,252);
setfillstyle(1,2);
bar(106,247,112,251);

}
if(eb==0)
{
setfillstyle(1,15);
bar(105,246,113,252);
setfillstyle(1,2);
bar(3,247,9,251);
}
}

void menu1()
{
setfillstyle(1,15);
bar(2,170,90,350);setcolor(1);line(81,170,81,350);
setfillstyle(1,9);bar(81,170,90,179);bar(81,341,90,350);
setcolor(15);settextstyle(11,0,10);
outtextxy(83,172,"V");outtextxy(83,342,"^");
setcolor(1);
line(2,170,90,170);
}
void menu2()
{
setfillstyle(1,15);
bar(110,171,198,350);setcolor(1);line(189,170,189,350);
setfillstyle(1,9);bar(189,170,198,179);bar(189,341,198,350);
setcolor(15);settextstyle(11,0,10);
outtextxy(192,172,"V");outtextxy(192,342,"^");
setcolor(1);line(100,168,200,168); //border to sep column and header
}




void ibar()
{
setfillstyle(1,15);bar(68,180,79,350);
setcolor(4);settextstyle(2,0,4);setfillstyle(1,15);bar(2,160,80,169);
}
void tbar()
{
setfillstyle(1,15);bar(178,180,188,350);
setcolor(4);settextstyle(2,0,4);setfillstyle(1,15);bar(110,160,188,167);

}


void admenu()
{
setfillstyle(1,15);
bar(2,207,40,350);
setcolor(1);line(31,207,31,350);
setfillstyle(1,9);bar(32,207,40,217);bar(32,341,40,350);
setcolor(15);settextstyle(11,0,10);
outtextxy(33,210,"V");outtextxy(33,342,"^");
setcolor(1);
line(2,206,40,206);
}


void chmenu()
{
setfillstyle(1,15);
bar(80,207,110,350);
setcolor(1);line(101,203,101,350);
setfillstyle(1,9);bar(102,207,110,216);bar(102,341,110,350);
setcolor(15);settextstyle(11,0,10);
outtextxy(104,210,"V");outtextxy(104,342,"^");
setcolor(1);
line(80,204,110,204);
}

void inmenu()
{
setfillstyle(1,15);
bar(150,207,190,350);
setcolor(1);line(181,207,181,350);
setfillstyle(1,9);bar(182,207,190,216);bar(182,341,190,350);
setcolor(15);settextstyle(11,0,10);
outtextxy(183,210,"V");outtextxy(183,342,"^");
setcolor(1);
line(150,206,190,206);
}



