#include <graphics.h>
#include <stdlib.h>
#include <conio.h>
#include<stdio.h>
#include<dos.h>
#include<ctype.h>

int tx,ty;
union REGS i,o;
int cl;
int dac,dbc;//capcha input

int ic=0;
int outx,outy,ind,j,f,s,pxc,pyc;
char p,cap[30],l,m;//cap
int tx,ty,ix,iy,custom;char ch;
char buffer[130];
struct custom
{
char fname[30],lname[30],add[40],city[30],state[30];
char pin[10],mobile[15],mail[30];
};

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

void captcha()
{
setfillstyle(1,15);bar(10,230,200,290);
setcolor(4);rectangle(10,230,200,290);
rectangle(15,267,118,287);
setcolor(0);line(10,256,200,256);
setcolor(8);settextstyle(2,0,4);
outtextxy(20,256,"type the word");
setcolor(4);settextstyle(2,0,4);
outtextxy(160,262,"aptcha");
outtextxy(140,262,"e");
settextstyle(3,0,2);
outtextxy(130,250,"R");
outtextxy(148,250,"C");
setcolor(9);settextstyle(2,0,4);
outtextxy(130,270,"stop spam");
outtextxy(130,278,"read books.");
randomize();pxc=30,pyc=220;j=2;
f=random(5-1+1)+1;

for(ind=0;ind<5;ind++)
{ p=random(122-97+1)+97;if(ind%2)++j;else --j;
  printf("         %d",f);
  sprintf(cap,"%c",p);
  if(f==5)
  {setcolor(1);settextstyle(5,0,2);
  outtextxy(pxc+20,pyc+j,cap);pxc=pxc+20;}
  if(f==4 || f==3)
  {pyc=225;setcolor(4);settextstyle(3,0,2);
  outtextxy(pxc+15,pyc+j,cap);pxc=pxc+15;}
  if(f==2)
  {pyc=235;setcolor(5);settextstyle(2,0,5);
  outtextxy(pxc+10,pyc+j,cap);pxc=pxc+10;}
  if(f==1)
  {pyc=229;setcolor(8);settextstyle(1,0,1);
  outtextxy(pxc+10,pyc+j,cap);pxc=pxc+10;}
}
}
void info2()
{ ic=10;
bk1();
setfillstyle(0,1);
bar(470,330,getmaxx()-3,348);

setfillstyle(1,9);bar(1,70,600,90);setcolor(15);
setcolor(15);settextstyle(7,0,1);outtextxy(10,67,"confirmation");
settextstyle(11,0,1);
outtextxy(8,107,"confirm Email-id:");
rectangle(160,100,550,120);
rectangle(160,140,550,160);
outtextxy(8,145,"set new password:");
settextstyle(2,0,4);outtextxy(160,160,"your password must be of 8-16 character");
rectangle(11,332,25,342);//box
outtextxy(30,330,"i accept all the terms and conditions of ispace provided.(please click the box)");
line(530,100,530,120);line(530,140,530,160);
captcha();
}

void feed(int da,int db,int color)
{l=da; m=db;ic++; ch=0;
setcolor(color);settextstyle(2,0,5);

while(ch!=13)
{
if(kbhit())
{
da+=8; ch=getch();
if(isalnum(ch) ||ch==46 ||ch==64)
{sprintf(buffer,"%c",ch);
outtextxy(da,db,buffer);}

if(ch==8 && da>=l+10 && da<=l+500)
{da=da-8;
setfillstyle(0,1);  bar(da,db,da+8,db+16);
da=da-8;}
}}
ch=0;
}

void get()
{

if((tx>=230 && tx<=250) && (ty>=100 && ty<=120) && (cl==1))
{setcolor(4);settextstyle(11,0,1);
outtextxy(10,107,"First name:");feed(102,102,15);}

if((tx>=530 && tx<=550) && (ty>=100 && ty<=120) && (cl==1))
{setcolor(4);settextstyle(11,0,1);
outtextxy(315,107,"Last name:");feed(402,102,15);}

if((tx>=530 && tx<=550) && (ty>=130 && ty<=160) && (cl==1))
{setcolor(4);settextstyle(11,0,1);
outtextxy(33,145,"Address:");feed(102,140,15);}

if((tx>=230 && tx<=250) && (ty>=170 && ty<=200) && (cl==1))
{setcolor(4);settextstyle(11,0,1);
outtextxy(55,183,"City:");feed(102,175,15);}

if((tx>=530 && tx<=550) && (ty>=170 && ty<=200) && (cl==1))
{setcolor(4);settextstyle(11,0,1);
outtextxy(347,183,"State:");feed(402,175,15);}

if((tx>=230 && tx<=250) && (ty>=200 && ty<=230) && (cl==1))
{setcolor(4);settextstyle(11,0,1);
outtextxy(63,219,"pin:");feed(102,215,15);}

if((tx>=530 && tx<=550) && (ty>=200 && ty<=230) && (cl==1))
{setcolor(4);settextstyle(11,0,1);
outtextxy(340,219,"mobile:");feed(402,215,15);}

if((tx>=530 && tx<=550) && (ty>=250 && ty<=280) && (cl==1))
{setcolor(4);settextstyle(11,0,1);
outtextxy(23,260,"email-id:");feed(102,257,15);}
}
void get2()
{
if((tx>=530 && tx<=550) && (ty>=100 && ty<=120) && (cl==1))
{setcolor(4);settextstyle(11,0,1);
outtextxy(8,107,"confirm Email-id:");feed(155,105,15);}

if((tx>=530 && tx<=550) && (ty>=140 && ty<=160) && (cl==1))
{setcolor(4);settextstyle(11,0,1);
outtextxy(8,145,"set new password:");feed(155,145,15);}

if((tx>=16 && tx<=116) && (ty>=268 && ty<=286) && (cl==1))
{setcolor(4);settextstyle(2,0,4);
outtextxy(20,256,"type the word");dac=20;dbc=270;
ch=0;
while(ch!=13)
{
if(kbhit())
{
dac+=8; ch=getch();
if((ch>='a'&&ch<='z')||(ch>'A'&&ch<='Z')||(ch>=48 && ch<=57))
{sprintf(buffer,"%c",ch);
outtextxy(dac,dbc,buffer);}

if(ch==8 && dac>=20 && dac<=120)
{dac=dac-8;
setfillstyle(1,15);  bar(dac,dbc,dac+8,dbc+16);
dac=dac-8;}
}}
ch=0;
}
}



void traction()
{
i.x.ax=0;
int86(0x33,&i,&o);
i.x.ax=1;
int86(0x33,&i,&o);

while(!kbhit())
{
i.x.ax=3;  cl=o.x.bx;
int86(0x33,&i,&o);
gotoxy(200,2);
tx=o.x.cx;ty=o.x.dx;       //trac control.
printf("x->=%d     \n y->=%d    %d  ",o.x.cx,o.x.dx,cl);
if((tx>=430 && tx<=640) && (ty>=330 && ty<=350) && (cl==2))
{cleardevice();setbkcolor(0);break;}//must check 1st iz fild
if(ic<=8)get();
if(ic>9)get2();

//datashow();
}

i.x.ax=2;
int86(0x33,&i,&o);
}


void info()
{bk1();
setfillstyle(1,9);bar(1,70,600,90);setcolor(15);
rectangle(100,100,250,120);//fn
rectangle(400,100,550,120);//ln
rectangle(100,137,550,157);//ad
rectangle(100,174,250,194);//city
rectangle(400,174,550,194);//st
rectangle(100,211,250,231);//pin
rectangle(400,211,550,231);//mobile
rectangle(100,256,550,276);//mail

setcolor(15);settextstyle(7,0,1);outtextxy(10,67,"personal information");

setcolor(15);settextstyle(11,0,1);
outtextxy(10,107,"First name:");outtextxy(315,107,"Last name:");
outtextxy(33,145,"Address:");outtextxy(55,183,"City:");outtextxy(347,183,"State:");
outtextxy(63,219,"pin:");outtextxy(340,219,"mobile:");outtextxy(23,260,"email-id:");
setcolor(15);settextstyle(2,0,5);
line(230,100,230,120);//fn
line(530,100,530,120);//ln
line(530,137,530,157);//a
line(230,174,230,194);//c
line(530,174,530,194);//s
line(230,211,230,231);//p
line(530,211,530,231);//m
line(530,256,530,276);//ml

setcolor(3);settextstyle(11,0,1);
outtextxy(450,340,"right click to continue");
traction();
}


/*void feedinfo()
{
traction();

scanf("");



} */






//
/*scanf("%c",&fname);scanf("%c",&lname);
scanf("%c",&city);scanf("%c",&state);
scanf("%c",&pin);scanf("%c",&add);
scanf("%c",&mail);scanf("%c",&);*/

/*void out()
{setcolor(15);settextstyle(3,0,5);
outtextxy();
}
void bar()
{
}
void datashow()
{
while(ch!=13)
{
if(kbhit())
{
ix+=8; ch=getch();
if(ch>='a'&&ch<='z'||ch>'A'&&ch<='Z'||ch>=48 && ch<=57)
{sprintf(buffer,"%c",ch);
//outtextxy(da,272,buffer);
//out();
}

if(ch==8 && da>=45 && ch<=80)
{da=da-8;
setfillstyle(1,15);
//bar(da,272,da+8,285);
//bar();
da=da-8;}
}}

} */
int poly[8],poly1[8];
int counter,c;
void bk2()
{
setfillstyle(1,4);
bar(300,1,getmaxx()-1,30);
poly[0] = 300;
poly[1] = 1;poly[2] = getmaxx()-1;poly[3] = 1;
poly[4] = getmaxx()-1;poly[5] = 30;poly[6] = 200;
poly[7] = 30;
setcolor(4);
fillpoly(4,poly);
setcolor(15);settextstyle(2,0,5);
outtextxy(580,5,"log out");
outtextxy(450,5,"ready book");
outtextxy(300,5,"book history");

setfillstyle(1,15);
bar(200,30,getmaxx()-1,50);
setcolor(0);settextstyle(2,0,5);
outtextxy(205,32,"edit profile");outtextxy(350,32,"hi user");
}


void main()
{
struct  custom cus[10];
int gdriver = EGA, gmode = EGAHI, errorcode;
initgraph(&gdriver, &gmode, "c:\\tc\\bgi");
cleardevice();
info();
info2();
traction();

getch();
closegraph();

}