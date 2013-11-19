#include"office.h"
#include"import.h"
#include"base.h"
#include"rimotion.h"
void select_pay(int pay)
{
if(pay==0)
{
setcolor(4);settextstyle(2,0,5);
outtextxy(40,130,"credit");
setcolor(15);
outtextxy(40,140,"debit");
outtextxy(40,150,"net banking.");
}
if(pay==1)
{
setcolor(4);settextstyle(2,0,5);
outtextxy(40,140,"debit");
setcolor(15);
outtextxy(40,130,"credit");
outtextxy(40,150,"net banking.");
}
if(pay==2)
{
setcolor(4);settextstyle(2,0,5);
outtextxy(40,150,"net banking.");
setcolor(15);
outtextxy(40,130,"credit");
outtextxy(40,140,"debit");
}

}

void money_transfer()
{

char num,number[20],type[5];int n=0,t=0,coff=1;
setcolor(15);settextstyle(2,0,5);
setfillstyle(0,0);
bar(20,120,100,180);bar(300,10,500,50);
cleardevice();setbkcolor(0);
outtextxy(30,314,"Enter the 10-digit Pin number:");
rectangle(260,314,600,334);
num=0;
while(num!=13)
{
setcolor(15);settextstyle(2,0,4);
if(kbhit())
{
num=getch();
if(isdigit(num) && num!=8 && n<100){
sprintf(number,"%c",num);outtextxy(265+n,314,"*");n+=10;}

if(num==8 && n>0 && n<=100)
{setfillstyle(0,1); bar(265+n,314,265+n-10,328);n-=10;
}

}}

captcha();

num=0;n=0;w=0;

while(num!=13)
{
settextstyle(2,0,4);
if(kbhit())
{
num=getch();
if(num!=8 && n<60){
sprintf(number,"%c",num);
outtextxy(20+n,272,number);n+=10;}

if(num==8 && n>0 && n<=60)
{setfillstyle(1,15); bar(20+n,272,20+n-10,283);n-=10;}

}}

setfillstyle(0,0);
bar(30,305,400,330);

cleardevice();setbkcolor(0);num=0;bk();
setcolor(15);settextstyle(2,0,5);
outtextxy(40,150,"accept the whole fare to transfer from your account?");
outtextxy(70,200,"yes(y)");outtextxy(130,200,"no(n)");
num=getch();

sprintf(number,"%c",num);
outtextxy(40,230,number);

if(num=='y')
{cleardevice();setcolor(0);setcolor(3);settextstyle(2,0,5);bk();
outtextxy(50,240,"transaction is complete.successfully transmitted from your account.");
}
else
{
cleardevice();setcolor(3);settextstyle(2,0,5);
outtextxy(50,240,"interupt caused.transaction stopped.");
}
}


void secure()
{
char cha,daff[30];int s=0;
setcolor(15);settextstyle(2,0,5);
cleardevice();setbkcolor(0);
bk();setcolor(15);rectangle(0,0,getmaxx(),getmaxy());
//outtextxy(250,14,"username");rectangle(320,13,600,28);
outtextxy(250,40,"password");rectangle(320,40,600,55);

settextstyle(2,0,4);cha=0;
while(cha!=13)
{
if(kbhit())
{
cha=getch();
if(cha!=8 && s<=200)
{sprintf(daff,"%c",cha);outtextxy(330+s,14,daff);
s+=10;}

if(cha==8 && s>0 && s<=210)
{setfillstyle(0,1); bar(330+s,14,330+s-10,24);s-=10;}

}}

cha=0;
s=0;

while(cha!=13)
{
if(kbhit())
{
cha=getch();
if(cha!=8 && s<200)
{sprintf(daff,"%c",cha);outtextxy(330+s,40,"*");s+=10;}

if(cha==8 && s>0 && s<=210)
{setfillstyle(0,1); bar(330+s,42,330+s-10,50);s-=10;}
}}
cha=0;

cleardevice();setbkcolor(0);
setcolor(3);settextstyle(2,0,5);
outtextxy(40,100,"Payment mode");
setcolor(4);
outtextxy(40,130,"credit");
setcolor(15);
outtextxy(40,140,"debit");
outtextxy(40,150,"net banking.");

pay=0;cha=0;
while(cha!=27)
{
if(kbhit())
{ cha=getch();
if(cha==80 && pay<2)
{pay++;select_pay(pay);}
if(cha==72 && pay>0)
{pay--;select_pay(pay);}
if(cha==13)
break;
}}

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
gotoxy(2,2);  tx=o.x.cx;ty=o.x.dx;       //trac control.
printf("x->=%d     \n y->=%d    %d  ",o.x.cx,o.x.dx,cl);
if((tx>=500 && tx<=575 && (ty>=30 && ty<=40) &&cl==1))
{exit(0);}
if((tx>=300 && tx<=400) && (ty>=10 && ty<=15) && cl==1)
{cleardevice();setbkcolor(15);break;}
if((tx>=540 && tx<=591) && (ty>=10 && ty<=15) && cl==1)
{cleardevice();info();}
if(tx>=500 && tx<=575 && cl==1)
{ if(ty>=69  &&ty<=79) {setfillstyle(0,0);bar(10,105,575,330);}
  if(ty>=110 &&ty<=120){setfillstyle(0,0);bar(10,145,575,330);bar(10,69,575,100);}
  if(ty>=150 &&ty<=160){setfillstyle(0,0);bar(10,185,575,330);bar(10,69,575,145);}
  if(ty>=190 &&ty<=200){setfillstyle(0,0);bar(10,225,575,330);bar(10,69,575,187);}
  if(ty>=230 &&ty<=241){setfillstyle(0,0);bar(10,69,575,225);}
}
}
i.x.ax=2;
int86(0x33,&i,&o);
}
void ip_traction()
{
i.x.ax=0;
int86(0x33,&i,&o);
i.x.ax=1;
int86(0x33,&i,&o);

while(!kbhit())
{
i.x.ax=3;  cl=o.x.bx;
int86(0x33,&i,&o);
gotoxy(2,2);  tx=o.x.cx;ty=o.x.dx;       //trac control.
printf("x->=%d     \n y->=%d    %d  ",o.x.cx,o.x.dx,cl);
get2();
}
i.x.ax=2;
int86(0x33,&i,&o);
}

void signup_traction()
{
i.x.ax=0;
int86(0x33,&i,&o);
i.x.ax=1;
int86(0x33,&i,&o);

while(!kbhit())
{
i.x.ax=3;  cl=o.x.bx;
int86(0x33,&i,&o);
gotoxy(2,2);  tx=o.x.cx;ty=o.x.dx;       //trac control.
printf("x->=%d     \n y->=%d    %d  ",o.x.cx,o.x.dx,cl);

if((tx>=540 && tx<=591) && (ty>=10 && ty<=15) && cl==1)
{cleardevice();info();}
get();


if((tx>=451 && tx<=629) && (ty>=341 && ty<=345) && cl==2)
{cleardevice();info2();ip_traction();}
}
i.x.ax=2;
int86(0x33,&i,&o);
}
void main(){
int gdriver = EGA, gmode = EGAHI, errorcode;
initgraph(&gdriver, &gmode, "c:\\tc\\bgi");
bk(); travel(); gravitas();
tvar=0;
m1c=m2c=adc=chdc=0;
signup_traction();

while(ch!=27)
{
if(kbhit())
{
ch=getch();
if(ch==77) {way(1);}
if(ch==75) {way(0);}
if(ch==80) {menu1();setcolor(6);settextstyle(2,0,4);
outtextxy(68,180,"<-");break;}
}}
flag1:
city();
m1c=0;
while(ch!=27)
{
gravitas();
if(kbhit())
{
ch=getch();

if(ch==80 && m1c<=15)                         //i city
{menu1();city();++m1c;ibar();tarrow(m1c);mcounter(m1c);}

if(ch==72 && m1c>=1 && m1c<=15)
{menu1();city();m1c--;ibar();tarrow(m1c);mcounter(m1c);}

if(ch==80 && m1c>=16 && m1c<=33)                 //2 city
{menu1();city2();m1c++;ibar();tarrow(m1c);mcounter(m1c);}

if(ch==72 && m1c>=16 && m1c<=33)
{menu1();city2();m1c--;ibar();tarrow(m1c);mcounter(m1c);}

if(ch==80 && m1c>=34 && m1c<=51)                 //3 city
{menu1();city3();m1c++;ibar();tarrow(m1c);mcounter(m1c);}

if(ch==72 && m1c>=34 && m1c<=51)
{menu1();city3();m1c--;ibar();tarrow(m1c);mcounter(m1c);}

if(ch==80 && m1c>=52 && m1c<56)                //4 city
{menu1();city4();m1c++;ibar();tarrow(m1c);mcounter(m1c);}

if(ch==72 && m1c>=52 && m1c<=56)
{menu1();city4();m1c--;ibar();tarrow(m1c);mcounter(m1c);}

if(ch==13)
{from=m1c; bk(); travel(); mcounter(m1c);from=m1c;if(tvar)tmcounter(m2c);break;}

if(ch==77) { bk();travel();menu2();tcity();mcounter(m1c);from=m1c;menu2();break;}
}}

//flag2:
m2c=0;
while(ch!=27)
{
gravitas();
if(kbhit())
{
ch=getch();

if(ch==80 && m2c<=15)                         //i city
{menu2();tcity();++m2c;tbar();arrow(m2c);tmcounter(m2c);}

if(ch==72 && m2c>=1 && m2c<=15)
{menu2();tcity();m2c--;tbar();arrow(m2c);tmcounter(m2c);}

if(ch==80 && m2c>=16 && m2c<=33)                 //2 city
{menu2();tcity2();m2c++;tbar();arrow(m2c);tmcounter(m2c);}

if(ch==72 && m2c>=16 && m2c<=33)
{menu2();tcity2();m2c--;tbar();arrow(m2c);tmcounter(m2c);}

if(ch==80 && m2c>=34 && m2c<=51)                 //3 city
{menu2();tcity3();m2c++;tbar();arrow(m2c);tmcounter(m2c);}

if(ch==72 && m2c>=34 && m2c<=51)
{menu2();tcity3();m2c--;tbar();arrow(m2c);tmcounter(m2c);}

if(ch==80 && m2c>=52 && m2c<56)                //4 city
{menu2();tcity4();m2c++;tbar();arrow(m2c);tmcounter(m2c);}

if(ch==72 && m2c>=52 && m2c<=56)
{menu2();tcity4();m2c--;tbar();arrow(m2c);tmcounter(m2c);}

if(ch==13)
{to=m2c; bk(); travel(); tvar=1;tmcounter(m2c);to=m2c;mcounter(m1c);break;}

if(ch==75)
{bk();travel(); to =m2c; tvar=1; tmcounter(m2c);to=m2c;menu1(); //goto flag1;
break;}

}
}

while(ch!=27)
{
gravitas();
if(kbhit())
{
ch=getch();
if(ch==80 && adc<10)
{admenu();adult();  adc++; adarrow(adc); adcounter(adc);}
if(ch==72 && adc>0)
{admenu();adult(); adc--; adarrow(adc);adcounter(adc);}
if(ch==77)
{adno=adc;chmenu();bk(); travel();tmcounter(m2c);mcounter(m1c);adcounter(adc);break;}
if(ch==13)
{adno=adc;bk(); travel();tmcounter(m2c);mcounter(m1c);adcounter(adc);break;}
}}

while(ch!=27)
{
gravitas();
if(kbhit())
{
ch=getch();
if(ch==80 && chdc<10)
{chmenu();child(); chdc++; charrow(chdc); chcounter(chdc);}
if(ch==72 && chdc>0)
{chmenu();child(); chdc--; charrow(chdc);chcounter(chdc);}
if(ch==77)
{chno=chdc;chmenu();bk(); travel();tmcounter(m2c);mcounter(m1c);adcounter(adc);chcounter(chdc); break;}
if(ch==13)
{chno=chdc;bk(); travel();tmcounter(m2c);mcounter(m1c);adcounter(adc);chcounter(chdc); break;}
}}

while(ch!=27)
{ gravitas();
if(kbhit())
{
ch=getch();
if(ch==80 && inc<10)
{inmenu();infant(); inc++; inarrow(inc); incounter(inc);}
if(ch==72 && inc>0)
{inmenu();infant(); inc--; inarrow(inc);incounter(inc);}
if(ch==77)
{inno=inc;inmenu();bk(); travel();tmcounter(m2c);mcounter(m1c);adcounter(adc);chcounter(chdc);incounter(inc); break;}
if(ch==13)
{inno=chdc;bk(); travel();tmcounter(m2c);mcounter(m1c);adcounter(adc);chcounter(chdc);incounter(inc); break;}
}}

while(ch!=27)
{
gravitas();
if(kbhit())
{
ch=getch();
if(ch==77) {ecob(1);suit=1;}
if(ch==75) {ecob(0);suit=0;}
if(ch==13) {break;}
}
}

setcolor(1);settextstyle(2,0,4);
ch=0;
while(ch!=13)
{
if(kbhit())
{da+=8;
ch=getch();
if(isalnum(ch) && da<=95)
{sprintf(dater,"%c",ch);
outtextxy(da,272,dater);}

if(ch==8 && da>=45 && da<=180)
{da=da-8;
setfillstyle(1,15);  bar(da,272,da+8,285);
da=da-8;}
}}

if(suit==0)flight(to);
if(suit==1)bflight(to);
traction();
secure();
money_transfer();

getch();
closegraph();}



