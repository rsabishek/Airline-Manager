void gapload()
{
cleardevice(); gapk=0; gapt=0;
setbkcolor(15);setcolor(8);rectangle(230,150,375,170);

setcolor(8);settextstyle(2,0,7);
outtextxy(80,30,"we are searching for the right combination");
outtextxy(220,50,"of the flights");
setcolor(8);settextstyle(2,0,5);
outtextxy(180,100,"This will take only few seconds...");

for(gapi=0;gapi<11;gapi++)
{gapk+=13;
setfillstyle(1,7);bar(231,151,230+gapk,169);
delay(200+gapt);gapt+=100;
}delay(300);
bar(231,151,374,169);
}

void book()
{
setcolor(15);settextstyle(5,0,1);
outtextxy(500,10,"log out");
setcolor(4);settextstyle(5,0,1);
outtextxy(500,60,"book now");outtextxy(500,100,"book now");
outtextxy(500,140,"book now");outtextxy(500,180,"book now");
outtextxy(500,220,"book now");

}

void flight(int t2)
{gapload();cleardevice();bk();
setcolor(15);rectangle(0,0,getmaxx(),getmaxy());

if(t2==1 || t2==11 || t2==21 || t2==31 || t2==41)
{
setcolor(15);settextstyle(2,0,4);
outtextxy(11,70,"JET KONNECT(jk1186)");
outtextxy(11,110,"AIR INDIA(AI1290)");
outtextxy(11,150,"FLY KINGFISHER(KF2811)");
outtextxy(11,190,"INDIGO(IG2644)");
outtextxy(11,230,"SPICE JET(S8211)");


setcolor(8);settextstyle(2,0,4);
outtextxy(200,70,"Dep: 10:30 am");
outtextxy(200,80,"Arr: 11:45 am");
outtextxy(400,70,"Class:Economy");
outtextxy(400,80,"Fare:4146 Rs");

   outtextxy(200,110,"Dep: 10:30 AM");
   outtextxy(200,120,"Arr: 11:45 AM");
   outtextxy(400,110,"Class:economy");
   outtextxy(400,120,"Fare:3126 Rs");

   outtextxy(200,150,"Dep: 05:45 PM");
   outtextxy(200,160,"Arr: 06:30 PM");
   outtextxy(400,150,"Class:economy");
   outtextxy(400,160,"Fare:6026 Rs");

   outtextxy(200,190,"Dep: 07:30 AM");
   outtextxy(200,200,"Arr: 08:30 AM");
   outtextxy(400,190,"Class:economy");
   outtextxy(400,200,"Fare:2999 Rs");

   outtextxy(200,230,"Dep: 01:45 PM");
   outtextxy(200,240,"Arr: 2:30 PM");
   outtextxy(400,230,"Class:economy");
   outtextxy(400,240,"Fare:2999 Rs");}

   if(t2==4 || t2==14 || t2==24 || t2==34 || t2==44)
   {setcolor(15);settextstyle(2,0,4);
   outtextxy(11,70,"INDIAN(I1127)");
   outtextxy(11,110,"PARAMOUNT(PA1100");
   outtextxy(11,150,"FLY KINGFISHER(KF2811)");
   outtextxy(11,190,"INDI GO(IG2644)");
   outtextxy(11,230,"SILK AIR(S8211)");

   setcolor(8);settextstyle(2,0,4);
   outtextxy(200,70,"Dep: 10:30 AM");
   outtextxy(200,80,"Arr: 12:00PM ");
   outtextxy(400,70,"Class:Economy");
   outtextxy(400,80,"Fare:5980 Rs");


   outtextxy(200,110,"Dep: 3:30 PM");
   outtextxy(200,120,"Arr: 5:00 PM");
   outtextxy(400,110,"Class:economy");
   outtextxy(400,120,"Fare:5888 Rs");

   outtextxy(200,150,"Dep: 1:30 PM");
   outtextxy(200,160,"Arr: 2:30 PM");
   outtextxy(400,150,"Class:economy");
   outtextxy(400,160,"Fare:6343 Rs");

   outtextxy(200,190,"Dep: 10:30 am");
   outtextxy(200,200,"Arr: 11:45 am");
   outtextxy(400,190,"Class:economy");
   outtextxy(400,200,"Fare:4999 Rs");

   outtextxy(200,230,"Dep: 12:30 PM");
   outtextxy(200,240,"Arr: 02:30 PM");
   outtextxy(400,230,"Class:economy");
   outtextxy(400,240,"Fare:6999 Rs");}

   if(t2==8 || t2==18 || t2==28 ||t2==0|| t2==38 || t2==48)
   {
   setcolor(15);settextstyle(2,0,4);
   outtextxy(11,70,"GO AIR(G16617)");
   outtextxy(11,110,"JET AIRWAYS(JT1111");
   outtextxy(11,150,"DECCAN(DC7811)");
   outtextxy(11,190,"TAJ AIR(T2894)");
   outtextxy(11,230,"AIR INDIA EXPRESS (AI8211)");
   setcolor(8);settextstyle(2,0,4);
   outtextxy(200,70,"Dep: 08:20 AM");
   outtextxy(200,80,"Arr: 10:00 AM ");
   outtextxy(400,70,"Class:Economy");
   outtextxy(400,80,"Fare:4559 Rs");

   outtextxy(200,110,"Dep: 01:45 PM");
   outtextxy(200,120,"Arr:03:00 PM");
   outtextxy(400,110,"Class:economy");
   outtextxy(400,120,"Fare:5196 Rs");

   outtextxy(200,150,"Dep: 07:30 PM");
   outtextxy(200,160,"Arr: 09:00 PM");
   outtextxy(400,150,"Class:economy");
   outtextxy(400,160,"Fare:6348 Rs");

   outtextxy(200,190,"Dep: 04:00 PM ");
   outtextxy(200,200,"Arr: 105:30 PM ");
   outtextxy(400,190,"Class:economy");
   outtextxy(400,200,"Fare:4999 Rs");

   outtextxy(200,230,"Dep: 12:30 PM");
   outtextxy(200,240,"Arr: 01:30 PM");
   outtextxy(400,230,"Class:economy");
   outtextxy(400,240,"Fare:6999 Rs");}
   if(t2==10 || t2==20 || t2==30 || t2==40 || t2==50)
   {
   setcolor(15);settextstyle(2,0,4);
   outtextxy(11,70,"INDIAN(I1127)");
   outtextxy(11,110,"GO AIR(G1600");
   outtextxy(11,150,"JET AIRWAYS(JA6611)");
   outtextxy(11,190,"JET KONNECT(JK2844)");
   outtextxy(11,230,"SPICE JET(S81211)");
   setcolor(8);settextstyle(2,0,4);
   outtextxy(200,70,"Dep: 6:30 AM");
   outtextxy(200,120,"Arr: 8:00PM ");
   outtextxy(400,90,"Class:Economy");
   outtextxy(400,120,"Fare:6380 Rs");

   outtextxy(200,90,"Dep: 3:20 PM");
   outtextxy(200,120,"Arr: 5:00 PM");
   outtextxy(400,90,"Class:economy");
   outtextxy(400,120,"Fare:5888 Rs");

   outtextxy(200,180,"Dep: 1:30 PM");
   outtextxy(200,210,"Arr: 2:10 PM");
   outtextxy(400,180,"Class:economy");
   outtextxy(400,210,"Fare:4343 Rs");

   outtextxy(200,270,"Dep: 10:30 am");
   outtextxy(200,300,"Arr: 11:15 am");
   outtextxy(400,270,"Class:economy");
   outtextxy(400,300,"Fare:4559 Rs");

   outtextxy(200,340,"Dep: 12:00 AM");
   outtextxy(200,370,"Arr: 01:30 AM");
   outtextxy(400,340,"Class:economy");
   outtextxy(400,370,"Fare:5699 Rs");}
    if(t2==3 || t2==13 || t2==23 || t2==33 || t2==43)
   {
   setcolor(15);settextstyle(2,0,4);
   outtextxy(11,70,"FLY KINGFISHER(K11327)");
   outtextxy(11,110,"SPICE JET(SP1900");
   outtextxy(11,150,"DECCAN(DC2711)");
   outtextxy(11,190,"JET LITE(JL2044)");
   outtextxy(11,230,"JET AIRWAYS(JA8611)");
   setcolor(8);settextstyle(2,0,4);
   outtextxy(200,70,"Dep: 11:30 AM");
   outtextxy(200,80,"Arr: 01:00PM ");
   outtextxy(400,70,"Class:Economy");
   outtextxy(400,80,"Fare:15980 Rs");


   outtextxy(200,110,"Dep: 01:30 PM");
   outtextxy(200,120,"Arr: 03:00 PM");
   outtextxy(400,110,"Class:economy");
   outtextxy(400,120,"Fare:15888 Rs");

   outtextxy(200,150,"Dep: 02:30 PM");
   outtextxy(200,160,"Arr: 04:30 PM");
   outtextxy(400,150,"Class:economy");
   outtextxy(400,160,"Fare:6343 Rs");

   outtextxy(200,190,"Dep: 10:30 am");
   outtextxy(200,200,"Arr: 11:45 am");
   outtextxy(400,190,"Class:economy");
   outtextxy(400,200,"Fare:10999 Rs");

   outtextxy(200,230,"Dep: 12:30 PM");
   outtextxy(200,240,"Arr: 01:30 PM");
   outtextxy(400,230,"Class:economy");
   outtextxy(400,240,"Fare:16999 Rs");}
   if(t2==6 || t2==16 || t2==26 || t2==36 || t2==46)
   {
   setcolor(15);settextstyle(2,0,4);
   outtextxy(11,70,"AIR INDIA(AI1787)");
   outtextxy(11,110,"PARAMOUNT(PA1190");
   outtextxy(11,150,"FLY KINGFISHER(KF2811)");
   outtextxy(11,190,"INDI GO(IG2644)");
   outtextxy(11,230,"JET LITE(S8211)");
   setcolor(8);settextstyle(2,0,4);
   outtextxy(200,70,"Dep: 10:35 AM");
   outtextxy(200,80,"Arr: 12:00PM ");
   outtextxy(400,70,"Class:Economy");
   outtextxy(400,80,"Fare:8980 Rs");

   outtextxy(200,110,"Dep: 3:35 PM");
   outtextxy(200,120,"Arr: 5:00 PM");
   outtextxy(400,110,"Class:economy");
   outtextxy(400,120,"Fare:8888 Rs");

   outtextxy(200,150,"Dep: 01:35 PM");
   outtextxy(200,160,"Arr: 03:00 PM");
   outtextxy(400,150,"Class:economy");
   outtextxy(400,160,"Fare:6343 Rs");

   outtextxy(200,190,"Dep: 09:30 AM");
   outtextxy(200,200,"Arr: 11:00 AM");
   outtextxy(400,190,"Class:economy");
   outtextxy(400,200,"Fare:6999 Rs");

   outtextxy(200,230,"Dep: 12:55 PM");
   outtextxy(200,240,"Arr: 02:35 PM");
   outtextxy(400,230,"Class:economy");
   outtextxy(400,240,"Fare:6999 Rs");}
    if(t2==9 || t2==19 || t2==29 || t2==39 || t2==49)
   {
   setcolor(15);settextstyle(2,0,4);
   outtextxy(11,70,"JET KONNECT(JK8827)");
   outtextxy(11,110,"JET AIRWAYS(JA1100");
   outtextxy(11,150,"FLY KINGFISHER(KF2811)");
   outtextxy(11,190," SILK AIR(SA2644)");
   outtextxy(11,230,"LUFTHANSA(S8211)");
   setcolor(8);settextstyle(2,0,4);
   outtextxy(200,70,"Dep: 06:00 PM ");
   outtextxy(200,80,"Arr: O7:00 PM ");
   outtextxy(400,70,"Class:Economy");
   outtextxy(400,80,"Fare:3980 Rs");

   outtextxy(200,110,"Dep: 3:45 PM");
   outtextxy(200,120,"Arr: 5:00 PM");
   outtextxy(400,110,"Class:economy");
   outtextxy(400,120,"Fare:3008 Rs");

   outtextxy(200,150,"Dep: 11:45 PM");
   outtextxy(200,160,"Arr: 01:00 PM");
   outtextxy(400,150,"Class:economy");
   outtextxy(400,160,"Fare:6000 Rs");

   outtextxy(200,190,"Dep: 10:30 am");
   outtextxy(200,200,"Arr: 11:45 am");
   outtextxy(400,190,"Class:economy");
   outtextxy(400,200,"Fare:4999 Rs");

   outtextxy(200,230,"Dep: 12:30 PM");
   outtextxy(200,240,"Arr: 02:30 PM");
   outtextxy(400,230,"Class:economy");
   outtextxy(400,240,"Fare:8899 Rs");}
    if(t2==5 || t2==15 || t2==25 || t2==35 || t2==45)
   {
   setcolor(15);settextstyle(2,0,4);
   outtextxy(11,70,"JET LITE(JL2227)");
   outtextxy(11,110,"PARAMOUNT(PA1100");
   outtextxy(11,150,"JET AIRWAYS(J2811)");
   outtextxy(11,190,"SILK AIR(SA2644)");
   outtextxy(11,230,"VIRGIN ATLANTIC(V9911)");
   setcolor(8);settextstyle(2,0,4);
   outtextxy(200,70,"Dep: 08:00 PM");
   outtextxy(200,80,"Arr: 12:00 AM ");
   outtextxy(400,70,"Class:Economy");
   outtextxy(400,80,"Fare:15000 Rs");

   outtextxy(200,110,"Dep: 3:30 PM");
   outtextxy(200,120,"Arr: 5:00 PM");
   outtextxy(400,110,"Class:economy");
   outtextxy(400,120,"Fare:17088 Rs");

   outtextxy(200,150,"Dep: O8:30 PM");
   outtextxy(200,160,"Arr: 09:10 PM");
   outtextxy(400,150,"Class:economy");
   outtextxy(400,160,"Fare:26343 Rs");

   outtextxy(200,190,"Dep: 01:30 PM");
   outtextxy(200,200,"Arr: 03:45 PM");
   outtextxy(400,190,"Class:economy");
   outtextxy(400,200,"Fare:14999 Rs");

   outtextxy(200,230,"Dep: 12:30 PM");
   outtextxy(200,240,"Arr: 02:30 PM");
   outtextxy(400,230,"Class:economy");
   outtextxy(400,240,"Fare:26999 Rs");}
   if(t2==2 || t2==12 || t2==22 || t2==32 || t2==42)
   {
   setcolor(15);settextstyle(2,0,4);
   outtextxy(11,70,"AIRINDIA EXPRESS(AI6627)");
   outtextxy(11,110,"INDIAN(I1760");
   outtextxy(11,150,"FLY KINGFISHER(KF2811)");
   outtextxy(11,190,"JET AIRWAYS(JA2644)");
   outtextxy(11,230,"VIRGIN GALACTIC(VG98011)");
   setcolor(8);settextstyle(2,0,4);
   outtextxy(200,70,"Dep: 12:30 AM");
   outtextxy(200,80,"Arr: 01:30 PM ");
   outtextxy(400,70,"Class:Economy");
   outtextxy(400,80,"Fare:5980 Rs");

   outtextxy(200,110,"Dep: 3:30 PM");
   outtextxy(200,120,"Arr: 5:00 PM");
   outtextxy(400,110,"Class:economy");
   outtextxy(400,120,"Fare:5888 Rs");

   outtextxy(200,150,"Dep: 1:30 PM");
   outtextxy(200,160,"Arr: 2:30 PM");
   outtextxy(400,150,"Class:economy");
   outtextxy(400,160,"Fare:7343 Rs");

   outtextxy(200,190,"Dep: 10:30 PM");
   outtextxy(200,200,"Arr: 11:45 PM");
   outtextxy(400,190,"Class:economy");
   outtextxy(400,200,"Fare:3369 Rs");

   outtextxy(200,230,"Dep: 12:30 PM");
   outtextxy(200,240,"Arr: 02:30 PM");
   outtextxy(400,230,"Class:economy");
   outtextxy(400,240,"Fare:26999 Rs");}
   if(t2==51 || t2==17 || t2==53 || t2==37 || t2==55 || t2==47)
   {
   setcolor(15);settextstyle(2,0,4);
   outtextxy(11,70,"INDIAN(I1887)");
   outtextxy(11,110,"PARAMOUNT(PA1190");
   outtextxy(11,150,"FLY KINGFISHER(KF2891)");
   outtextxy(11,190,"INDI GO(IG2664)");
   outtextxy(11,230,"SILK AIR(S8233)");
   setcolor(8);settextstyle(2,0,4);
   outtextxy(200,70,"Dep: 11:00 AM");
   outtextxy(200,80,"Arr: 12:00PM ");
   outtextxy(400,70,"Class:Economy");
   outtextxy(400,80,"Fare:4000 Rs");

   outtextxy(200,110,"Dep: 3:30 PM");
   outtextxy(200,120,"Arr: 5:00 PM");
   outtextxy(400,110,"Class:economy");
   outtextxy(400,120,"Fare:6000 Rs");

   outtextxy(200,150,"Dep: 1:30 PM");
   outtextxy(200,160,"Arr: 2:30 PM");
   outtextxy(400,150,"Class:economy");
   outtextxy(400,160,"Fare:6343 Rs");

   outtextxy(200,190,"Dep: 11:00 am");
   outtextxy(200,200,"Arr: 11:45 am");
   outtextxy(400,190,"Class:economy");
   outtextxy(400,200,"Fare:4999 Rs");

   outtextxy(200,230,"Dep: 12:30 PM");
   outtextxy(200,240,"Arr: 02:30 PM");
   outtextxy(400,230,"Class:economy");
   outtextxy(400,240,"Fare:6999 Rs");}
   if(t2==7 || t2==52 || t2==27 || t2==54 || t2==56)
   {
   setcolor(15);settextstyle(2,0,4);
   outtextxy(11,70,"JET KONNECT(JK8997)");
   outtextxy(11,110,"JET LITE(JL6700");
   outtextxy(11,150,"JET AIRWAYS(JA2811)");
   outtextxy(11,190,"CONCORDE(C2688)");
   outtextxy(11,230,"GO AIR(GO2011)");

   setcolor(8);settextstyle(2,0,4);
   outtextxy(200,70,"Dep: 10:30 AM");
   outtextxy(200,80,"Arr: 12:00PM ");
   outtextxy(400,70,"Class:Economy");
   outtextxy(400,80,"Fare:5980 Rs");

   outtextxy(200,110,"Dep: 3:30 PM");
   outtextxy(200,120,"Arr: 5:00 PM");
   outtextxy(400,110,"Class:economy");
   outtextxy(400,120,"Fare:5888 Rs");

   outtextxy(200,150,"Dep: 1:30 PM");
   outtextxy(200,160,"Arr: 2:30 PM");
   outtextxy(400,150,"Class:economy");
   outtextxy(400,160,"Fare:6343 Rs");

   outtextxy(200,190,"Dep: 10:30 am");
   outtextxy(200,200,"Arr: 11:45 am");
   outtextxy(400,190,"Class:economy");
   outtextxy(400,200,"Fare:4999 Rs");

   outtextxy(200,230,"Dep: 12:30 PM");
   outtextxy(200,240,"Arr: 02:30 PM");
   outtextxy(400,230,"Class:economy");
   outtextxy(400,240,"Fare:6999 Rs");}
   book();
}


void bflight(int t2)
{
gapload();cleardevice();
bk();
setcolor(15);rectangle(0,0,getmaxx(),getmaxy());
if(t2==1 || t2==11 || t2==21 || t2==31 || t2==41)
{
setcolor(15);settextstyle(2,0,4);
outtextxy(11,70,"JET KONNECT(jk1186)");
outtextxy(11,110,"AIR INDIA(AI1290)");
outtextxy(11,150,"FLY KINGFISHER(KF2811)");
outtextxy(11,190,"INDIGO(IG2644)");
outtextxy(11,230,"SPICE JET(S8211)");


setcolor(8);settextstyle(2,0,4);
outtextxy(200,70,"Dep: 10:30 am");
outtextxy(200,80,"Arr: 11:45 am");
outtextxy(400,70,"Class:Buisness");
outtextxy(400,80,"Fare:14146Rs");

   outtextxy(200,110,"Dep: 10:30 AM");
   outtextxy(200,120,"Arr: 11:45 AM");
   outtextxy(400,110,"Class:Buisness");
   outtextxy(400,120,"Fare:14366 Rs");

   outtextxy(200,150,"Dep: 05:45 PM");
   outtextxy(200,160,"Arr: 06:30 PM");
   outtextxy(400,150,"Class:Buisness");
   outtextxy(400,160,"Fare:13456Rs");

   outtextxy(200,190,"Dep: 07:30 AM");
   outtextxy(200,200,"Arr: 08:30 AM");
   outtextxy(400,190,"Class:Buisness");
   outtextxy(400,200,"Fare:14568 Rs");

   outtextxy(200,230,"Dep: 01:45 PM");
   outtextxy(200,240,"Arr: 2:30 PM");
   outtextxy(400,230,"Class:Buisness");
   outtextxy(400,240,"Fare:17566 Rs");}

   if(t2==4 || t2==14 || t2==24 || t2==34 || t2==44)
   {setcolor(15);settextstyle(2,0,4);
   outtextxy(11,70,"INDIAN(I1127)");
   outtextxy(11,110,"PARAMOUNT(PA1100");
   outtextxy(11,150,"FLY KINGFISHER(KF2811)");
   outtextxy(11,190,"INDI GO(IG2644)");
   outtextxy(11,230,"SILK AIR(S8211)");

   setcolor(8);settextstyle(2,0,4);
   outtextxy(200,70,"Dep: 10:30 AM");
   outtextxy(200,80,"Arr: 12:00PM ");
   outtextxy(400,70,"Class:Buisness");
   outtextxy(400,80,"Fare:16546 Rs");


   outtextxy(200,110,"Dep: 3:30 PM");
   outtextxy(200,120,"Arr: 5:00 PM");
   outtextxy(400,110,"Class:Buisness");
   outtextxy(400,120,"Fare:13696 Rs");

   outtextxy(200,150,"Dep: 1:30 PM");
   outtextxy(200,160,"Arr: 2:30 PM");
   outtextxy(400,150,"Class:Buisness");
   outtextxy(400,160,"Fare:14596 Rs");

   outtextxy(200,190,"Dep: 10:30 am");
   outtextxy(200,200,"Arr: 11:45 am");
   outtextxy(400,190,"Class:Buisness");
   outtextxy(400,200,"Fare:19996 Rs");

   outtextxy(200,230,"Dep: 12:30 PM");
   outtextxy(200,240,"Arr: 02:30 PM");
   outtextxy(400,230,"Class:Buisness");
   outtextxy(400,240,"Fare:11236 Rs");}

   if(t2==8 || t2==18 || t2==28 ||t2==0|| t2==38 || t2==48)
   {
   setcolor(15);settextstyle(2,0,4);
   outtextxy(11,70,"GO AIR(G16617)");
   outtextxy(11,110,"JET AIRWAYS(JT1111");
   outtextxy(11,150,"DECCAN(DC7811)");
   outtextxy(11,190,"TAJ AIR(T2894)");
   outtextxy(11,230,"AIR INDIA EXPRESS (AI8211)");
   setcolor(8);settextstyle(2,0,4);
   outtextxy(200,70,"Dep: 08:20 AM");
   outtextxy(200,80,"Arr: 10:00 AM ");
   outtextxy(400,70,"Class:Buisness");
   outtextxy(400,80,"Fare:18456 Rs");

   outtextxy(200,110,"Dep: 01:45 PM");
   outtextxy(200,120,"Arr:03:00 PM");
   outtextxy(400,110,"Class:Buisness");
   outtextxy(400,120,"Fare:14146 Rs");

   outtextxy(200,150,"Dep: 07:30 PM");
   outtextxy(200,160,"Arr: 09:00 PM");
   outtextxy(400,150,"Class:Buisness");
   outtextxy(400,160,"Fare:15556 Rs");

   outtextxy(200,190,"Dep: 04:00 PM ");
   outtextxy(200,200,"Arr: 105:30 PM ");
   outtextxy(400,190,"Class:Buisness");
   outtextxy(400,200,"Fare:16654 Rs");

   outtextxy(200,230,"Dep: 12:30 PM");
   outtextxy(200,240,"Arr: 01:30 PM");
   outtextxy(400,230,"Class:Buisness");
   outtextxy(400,240,"Fare:14658 Rs");}
   if(t2==10 || t2==20 || t2==30 || t2==40 || t2==50)
   {
   setcolor(15);settextstyle(2,0,4);
   outtextxy(11,70,"INDIAN(I1127)");
   outtextxy(11,110,"GO AIR(G1600");
   outtextxy(11,150,"JET AIRWAYS(JA6611)");
   outtextxy(11,190,"JET KONNECT(JK2844)");
   outtextxy(11,230,"SPICE JET(S81211)");
   setcolor(8);settextstyle(2,0,4);
   outtextxy(200,70,"Dep: 6:30 AM");
   outtextxy(200,120,"Arr: 8:00PM ");
   outtextxy(400,90,"Class:Buisness");
   outtextxy(400,120,"Fare:17896 Rs");

   outtextxy(200,90,"Dep: 3:20 PM");
   outtextxy(200,120,"Arr: 5:00 PM");
   outtextxy(400,90,"Class:Buisness");
   outtextxy(400,120,"Fare:16549 Rs");

   outtextxy(200,180,"Dep: 1:30 PM");
   outtextxy(200,210,"Arr: 2:10 PM");
   outtextxy(400,180,"Class:Buisness");
   outtextxy(400,210,"Fare:12346 Rs");

   outtextxy(200,270,"Dep: 10:30 am");
   outtextxy(200,300,"Arr: 11:15 am");
   outtextxy(400,270,"Class:Buisness");
   outtextxy(400,300,"Fare:19896 Rs");

   outtextxy(200,340,"Dep: 12:00 AM");
   outtextxy(200,370,"Arr: 01:30 AM");
   outtextxy(400,340,"Class:Buisness");
   outtextxy(400,370,"Fare:15556 Rs");}
    if(t2==3 || t2==13 || t2==23 || t2==33 || t2==43)
   {
   setcolor(15);settextstyle(2,0,4);
   outtextxy(11,70,"FLY KINGFISHER(K11327)");
   outtextxy(11,110,"SPICE JET(SP1900");
   outtextxy(11,150,"DECCAN(DC2711)");
   outtextxy(11,190,"JET LITE(JL2044)");
   outtextxy(11,230,"JET AIRWAYS(JA8611)");
   setcolor(8);settextstyle(2,0,4);
   outtextxy(200,70,"Dep: 11:30 AM");
   outtextxy(200,80,"Arr: 01:00PM ");
   outtextxy(400,70,"Class:Buisness");
   outtextxy(400,80,"Fare:23656 Rs");


   outtextxy(200,110,"Dep: 01:30 PM");
   outtextxy(200,120,"Arr: 03:00 PM");
   outtextxy(400,110,"Class:Buisness");
   outtextxy(400,120,"Fare:24566 Rs");

   outtextxy(200,150,"Dep: 02:30 PM");
   outtextxy(200,160,"Arr: 04:30 PM");
   outtextxy(400,150,"Class:Buisness");
   outtextxy(400,160,"Fare:15546 Rs");

   outtextxy(200,190,"Dep: 10:30 am");
   outtextxy(200,200,"Arr: 11:45 am");
   outtextxy(400,190,"Class:Buisness");
   outtextxy(400,200,"Fare:24565 Rs");

   outtextxy(200,230,"Dep: 12:30 PM");
   outtextxy(200,240,"Arr: 01:30 PM");
   outtextxy(400,230,"Class:Buisness");
   outtextxy(400,240,"Fare:30000 Rs");}
   if(t2==6 || t2==16 || t2==26 || t2==36 || t2==46)
   {
   setcolor(15);settextstyle(2,0,4);
   outtextxy(11,70,"AIR INDIA(AI1787)");
   outtextxy(11,110,"PARAMOUNT(PA1190");
   outtextxy(11,150,"FLY KINGFISHER(KF2811)");
   outtextxy(11,190,"INDI GO(IG2644)");
   outtextxy(11,230,"JET LITE(S8211)");
   setcolor(8);settextstyle(2,0,4);
   outtextxy(200,70,"Dep: 10:35 AM");
   outtextxy(200,80,"Arr: 12:00PM ");
   outtextxy(400,70,"Class:Buisness");
   outtextxy(400,80,"Fare:56556 Rs");

   outtextxy(200,110,"Dep: 3:35 PM");
   outtextxy(200,120,"Arr: 5:00 PM");
   outtextxy(400,110,"Class:Buisness");
   outtextxy(400,120,"Fare:15693 Rs");

   outtextxy(200,150,"Dep: 01:35 PM");
   outtextxy(200,160,"Arr: 03:00 PM");
   outtextxy(400,150,"Class:Buisness");
   outtextxy(400,160,"Fare:18966 Rs");

   outtextxy(200,190,"Dep: 09:30 AM");
   outtextxy(200,200,"Arr: 11:00 AM");
   outtextxy(400,190,"Class:Buisness");
   outtextxy(400,200,"Fare:13265 Rs");

   outtextxy(200,230,"Dep: 12:55 PM");
   outtextxy(200,240,"Arr: 02:35 PM");
   outtextxy(400,230,"Class:Buisness");
   outtextxy(400,240,"Fare:18856 Rs");}
    if(t2==9 || t2==19 || t2==29 || t2==39 || t2==49)
   {
   setcolor(15);settextstyle(2,0,4);
   outtextxy(11,70,"JET KONNECT(JK8827)");
   outtextxy(11,110,"JET AIRWAYS(JA1100");
   outtextxy(11,150,"FLY KINGFISHER(KF2811)");
   outtextxy(11,190,"SILK AIR(SA2644)");
   outtextxy(11,230,"LUFTHANSA(S8211)");
   setcolor(8);settextstyle(2,0,4);
   outtextxy(200,70,"Dep: 06:00 PM ");
   outtextxy(200,80,"Arr: O7:00 PM ");
   outtextxy(400,70,"Class:Buisness");
   outtextxy(400,80,"Fare:14146 Rs");

   outtextxy(200,110,"Dep: 3:45 PM");
   outtextxy(200,120,"Arr: 5:00 PM");
   outtextxy(400,110,"Class:Buisness");
   outtextxy(400,120,"Fare:25565 Rs");

   outtextxy(200,150,"Dep: 11:45 PM");
   outtextxy(200,160,"Arr: 01:00 PM");
   outtextxy(400,150,"Class:Buisness");
   outtextxy(400,160,"Fare:50006 Rs");

   outtextxy(200,190,"Dep: 10:30 am");
   outtextxy(200,200,"Arr: 11:45 am");
   outtextxy(400,190,"Class:Buisness");
   outtextxy(400,200,"Fare:15652 Rs");

   outtextxy(200,230,"Dep: 12:30 PM");
   outtextxy(200,240,"Arr: 02:30 PM");
   outtextxy(400,230,"Class:Buisness");
   outtextxy(400,240,"Fare:15666 Rs");}
    if(t2==5 || t2==15 || t2==25 || t2==35 || t2==45)
   {
   setcolor(15);settextstyle(2,0,4);
   outtextxy(11,70,"JET LITE(JL2227)");
   outtextxy(11,110,"PARAMOUNT(PA1100");
   outtextxy(11,150,"JET AIRWAYS(J2811)");
   outtextxy(11,190,"SILK AIR(SA2644)");
   outtextxy(11,230,"VIRGIN ATLANTIC(V9911)");
   setcolor(8);settextstyle(2,0,4);
   outtextxy(200,70,"Dep: 08:00 PM");
   outtextxy(200,80,"Arr: 12:00 AM ");
   outtextxy(400,70,"Class:Buisness");
   outtextxy(400,80,"Fare:12369 Rs");

   outtextxy(200,110,"Dep: 3:30 PM");
   outtextxy(200,120,"Arr: 5:00 PM");
   outtextxy(400,110,"Class:Buisness");
   outtextxy(400,120,"Fare:18945 Rs");

   outtextxy(200,150,"Dep: O8:30 PM");
   outtextxy(200,160,"Arr: 09:10 PM");
   outtextxy(400,150,"Class:Buisness");
   outtextxy(400,160,"Fare:15555 Rs");

   outtextxy(200,190,"Dep: 01:30 PM");
   outtextxy(200,200,"Arr: 03:45 PM");
   outtextxy(400,190,"Class:Buisness");
   outtextxy(400,200,"Fare:30000 Rs");

   outtextxy(200,230,"Dep: 12:30 PM");
   outtextxy(200,240,"Arr: 02:30 PM");
   outtextxy(400,230,"Class:Buisness");
   outtextxy(400,240,"Fare:14146 Rs");}
   if(t2==2 || t2==12 || t2==22 || t2==32 || t2==42)
   {
   setcolor(15);settextstyle(2,0,4);
   outtextxy(11,70,"AIRINDIA EXPRESS(AI6627)");
   outtextxy(11,110,"INDIAN(I1760");
   outtextxy(11,150,"FLY KINGFISHER(KF2811)");
   outtextxy(11,190,"JET AIRWAYS(JA2644)");
   outtextxy(11,230,"VIRGIN GALACTIC(VG98011)");
   setcolor(8);settextstyle(2,0,4);
   outtextxy(200,70,"Dep: 12:30 AM");
   outtextxy(200,80,"Arr: 01:30 PM ");
   outtextxy(400,70,"Class:Buisness");
   outtextxy(400,80,"Fare:15980 Rs");

   outtextxy(200,110,"Dep: 3:30 PM");
   outtextxy(200,120,"Arr: 5:00 PM");
   outtextxy(400,110,"Class:Buisness");
   outtextxy(400,120,"Fare:20006 Rs");

   outtextxy(200,150,"Dep: 1:30 PM");
   outtextxy(200,160,"Arr: 2:30 PM");
   outtextxy(400,150,"Class:Buisness");
   outtextxy(400,160,"Fare:20036 Rs");

   outtextxy(200,190,"Dep: 10:30 PM");
   outtextxy(200,200,"Arr: 11:45 PM");
   outtextxy(400,190,"Class:Buisness");
   outtextxy(400,200,"Fare:15663 Rs");

   outtextxy(200,230,"Dep: 12:30 PM");
   outtextxy(200,240,"Arr: 02:30 PM");
   outtextxy(400,230,"Class:Buisness");
   outtextxy(400,240,"Fare:40000 Rs");}
   if(t2==51 || t2==17 || t2==53 || t2==37 || t2==55 || t2==47)
   {
   setcolor(15);settextstyle(2,0,4);
   outtextxy(11,70,"INDIAN(I1887)");
   outtextxy(11,110,"PARAMOUNT(PA1190");
   outtextxy(11,150,"FLY KINGFISHER(KF2891)");
   outtextxy(11,190,"INDI GO(IG2664)");
   outtextxy(11,230,"SILK AIR(S8233)");
   setcolor(8);settextstyle(2,0,4);
   outtextxy(200,70,"Dep: 11:00 AM");
   outtextxy(200,80,"Arr: 12:00PM ");
   outtextxy(400,70,"Class:Buisness");
   outtextxy(400,80,"Fare:14786 Rs");

   outtextxy(200,110,"Dep: 3:30 PM");
   outtextxy(200,120,"Arr: 5:00 PM");
   outtextxy(400,110,"Class:Buisness");
   outtextxy(400,120,"Fare:69856 Rs");

   outtextxy(200,150,"Dep: 1:30 PM");
   outtextxy(200,160,"Arr: 2:30 PM");
   outtextxy(400,150,"Class:Buisness");
   outtextxy(400,160,"Fare:55146 Rs");

   outtextxy(200,190,"Dep: 11:00 am");
   outtextxy(200,200,"Arr: 11:45 am");
   outtextxy(400,190,"Class:Buisness");
   outtextxy(400,200,"Fare:24146 Rs");

   outtextxy(200,230,"Dep: 12:30 PM");
   outtextxy(200,240,"Arr: 02:30 PM");
   outtextxy(400,230,"Class:Buisness");
   outtextxy(400,240,"Fare:30046 Rs");}
   if(t2==7 || t2==52 || t2==27 || t2==54 || t2==56)
   {
   setcolor(15);settextstyle(2,0,4);
   outtextxy(11,70,"JET KONNECT(JK8997)");
   outtextxy(11,110,"JET LITE(JL6700");
   outtextxy(11,150,"JET AIRWAYS(JA2811)");
   outtextxy(11,190,"CONCORDE(C2688)");
   outtextxy(11,230,"GO AIR(GO2011)");

   setcolor(8);settextstyle(2,0,4);
   outtextxy(200,70,"Dep: 10:30 AM");
   outtextxy(200,80,"Arr: 12:00PM ");
   outtextxy(400,70,"Class:Buisness");
   outtextxy(400,80,"Fare:24146 Rs");

   outtextxy(200,110,"Dep: 3:30 PM");
   outtextxy(200,120,"Arr: 5:00 PM");
   outtextxy(400,110,"Class:Buisness");
   outtextxy(400,120,"Fare:24646 Rs");

   outtextxy(200,150,"Dep: 1:31 PM");
   outtextxy(200,160,"Arr: 2:02 PM");
   outtextxy(400,150,"Class:Buisness");
   outtextxy(400,160,"Fare:54146 Rs");

   outtextxy(200,190,"Dep: 10:30 am");
   outtextxy(200,200,"Arr: 11:45 am");
   outtextxy(400,190,"Class:Buisness");
   outtextxy(400,200,"Fare:34146 Rs");

   outtextxy(200,230,"Dep: 12:30 PM");
   outtextxy(200,240,"Arr: 02:30 PM");
   outtextxy(400,230,"Class:Buisness");
   outtextxy(400,240,"Fare:18146 Rs");}
   book();
}

