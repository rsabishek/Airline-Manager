char wrangler[20];int w;    //captcha words capture
int corr=1;//correct or not..checks the money transfer captcha with human input.

void feed(int da,int db,int color,int chk,int brut,int store)
{
l=da; m=db; ch=0;
setcolor(color);settextstyle(2,0,4);

while(ch!=13)
{
if(kbhit())
{
ch=getch();
if(  (chk==0 || (chk==1 && isdigit(ch)) || ch==46 || ch==64) && ch!=8 )
{
 if( (brut==0&&da<220) || (brut==9&&da<520)  || (brut==7&&da<515) )
   {da=da+8;
    sprintf(buffer,"%c",ch);
    outtextxy(da,db,buffer);}

 if(brut==19 && da<283)
{da=da+8;
sprintf(buffer,"%c",ch);
outtextxy(da,db,"*");}

}
gotoxy(10,20);
printf("%d\n\n",da);
gotoxy(30,20);
printf("%d\n\n",db);

if( (ch==8) && ((brut==0 && da>l) || (brut==9 && da>402) || (brut==7 && da>l) || (brut==19 && da>160))  )
{setfillstyle(0,1); bar(da,db,da+6,db+14);
da=da-8;}

}
}
ch=0;
if(store==1)strcpy(cus[cc].fname,buffer);if(store==2)strcpy(cus[cc].lname,buffer);
if(store==3)strcpy(cus[cc].add,buffer);if(store==4)strcpy(cus[cc].city,buffer);
if(store==5)strcpy(cus[cc].state,buffer);if(store==6)strcpy(cus[cc].pin,buffer);
if(store==7)strcpy(cus[cc].mobile,buffer);if(store==8)strcpy(cus[cc].mail,buffer);
if(store==9)strcpy(cus[cc].cmail,buffer);if(store==10)strcpy(cus[cc].pass,buffer);
}












void captcha()             //recaptcha generator.
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
//  printf("%d",f);
  sprintf(cap,"%c",p);wrangler[w++]=p;
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

void get()             //registry inputs first page passes to feed
{

if((tx>=230 && tx<=250) && (ty>=100 && ty<=120) && (cl==1))
{setcolor(4);settextstyle(11,0,1);
outtextxy(10,107,"First name:");feed(102,102,15,0,0,1);}

if((tx>=530 && tx<=550) && (ty>=100 && ty<=120) && (cl==1))
{setcolor(4);settextstyle(11,0,1);
outtextxy(315,107,"Last name:");feed(402,102,15,0,9,2);}

if((tx>=530 && tx<=550) && (ty>=130 && ty<=160) && (cl==1))
{setcolor(4);settextstyle(11,0,1);
outtextxy(33,145,"Address:");feed(102,140,15,0,7,3);}

if((tx>=230 && tx<=250) && (ty>=170 && ty<=200) && (cl==1))
{setcolor(4);settextstyle(11,0,1);
outtextxy(55,183,"City:");feed(102,176,15,0,0,4);}

if((tx>=530 && tx<=550) && (ty>=170 && ty<=200) && (cl==1))
{setcolor(4);settextstyle(11,0,1);
outtextxy(347,183,"State:");feed(402,176,15,0,9,5);}

if((tx>=230 && tx<=250) && (ty>=200 && ty<=230) && (cl==1))
{setcolor(4);settextstyle(11,0,1);
outtextxy(63,219,"pin:");feed(102,215,15,1,0,6);}

if((tx>=530 && tx<=550) && (ty>=200 && ty<=230) && (cl==1))
{setcolor(4);settextstyle(11,0,1);
outtextxy(340,219,"mobile:");feed(402,215,15,1,9,7);}

if((tx>=530 && tx<=550) && (ty>=250 && ty<=280) && (cl==1))
{setcolor(4);settextstyle(11,0,1);
outtextxy(23,260,"email-id:");feed(102,257,15,0,7,8);}
}
void get2()       //registry inputs secod page passes to feed()
{
if((tx>=530 && tx<=550) && (ty>=100 && ty<=120) && (cl==1))
{setcolor(4);settextstyle(11,0,1);
outtextxy(8,107,"confirm Email-id:");feed(155,103,15,0,7,9);}

if((tx>=530 && tx<=550) && (ty>=140 && ty<=160) && (cl==1))
{setcolor(4);settextstyle(11,0,1);
outtextxy(8,145,"set new password:");feed(155,143,15,0,19,10);}

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
void info()        //inputs 1 and 2 pages design
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
infcount=1;
}

void info2()
{
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

