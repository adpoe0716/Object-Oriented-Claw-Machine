//---------------------------------------------------------------------------
#include <vcl.h>
#pragma hdrstop
#include "Unit1.h"
#include <stdio.h>
//---------------------------------------------------------------------------
#pragma package(smart_init)
#pragma resource "*.dfm"
TForm1 *Form1;
Jwas *jwas[5];
Doll *doll[20];
bool nha=0,gg=0,pay=0,down=0,fol=0,fol1=0,upp=0,doll_down=0,get=0,ha=0,L=1,R=1,A1=1,L1=0,R1=0,get_D=0,get_R=0,ret=0,move_D=0,move_J=0;
int a=1,fo=0,x,min=1,max=10,money=0;
int doll_left[7]={66,176,242,444,56,472,300};
int doll_Top[7]={322,540,316,540,444,332,436};
String t1="�w��C����������~ \n ���ç��\n���k�䲾��\n�ť��䧨��~            ";
String t2;
String t0="                                           \n";
String t3="\n�ثe�Z���O���ٮt:";
String t4="�����O��";
//---------------------------------------------------------------------------
__fastcall TForm1::TForm1(TComponent* Owner)
        : TForm(Owner)
{

}
//---------------------------------------------------------------------------
TForm1::re(){
  nha=0,gg=0;down=0,fol=0,fol1=0,upp=0,doll_down=0,get=0,ha=0,L=1,R=1,A1=1,L1=0,R1=0,get_D=0,get_R=0,ret=0,move_D=0,move_J=0;
  t2="";
}
void __fastcall TForm1::FormCreate(TObject *Sender)
{
  for(int i=0;i<=3;i++){                  //�����ͦ�
    jwas[i] = new Jwas(i);
  }
  for(int i=0;i<=6;i++){                   //�����ͦ�
    doll[i] = new Doll(a);
    doll[i]->T_Doll->Left=doll_left[i];
    doll[i]->T_Doll->Top=doll_Top[i];
    if (i==3 || i==5)a++;
  }

}
//---------------------------------------------------------------------------
Jwas::Jwas(int a){
T_Jwas = new TShape(Form1);
T_Jwas->Parent=Form1;
switch (a){
        case 0:                              //�����ե�
           T_Jwas->Top=0;
           T_Jwas->Left=328;
           T_Jwas->Width=17;
           T_Jwas->Height=39;
           break;
         case 1:
           T_Jwas->Top=38;
           T_Jwas->Left=280;
           T_Jwas->Width=113;
           T_Jwas->Height=17;
           break;
         case 2:
           T_Jwas->Top=38;
           T_Jwas->Left=270;
           T_Jwas->Width=9;
           T_Jwas->Height=89;
           break;
         case 3:
           T_Jwas->Top=38;
           T_Jwas->Left=394;
           T_Jwas->Width=9;
           T_Jwas->Height=89;
           break;
   }

   }
///////
Jwas::Right(){                                     //�k��
T_Jwas->Left=T_Jwas->Left+3;
}
Jwas::Left(){                                      //��
T_Jwas->Left=T_Jwas->Left-3;
}
Jwas::up(int a){                                        //�W
if(a==1){T_Jwas->Top=T_Jwas->Top-3;
}else {T_Jwas->Height=T_Jwas->Height-1;}
}
Jwas::dow(int a){
if(a==1){T_Jwas->Top=T_Jwas->Top+3;
}else {T_Jwas->Height=T_Jwas->Height+1;}                                       //�U
}
Jwas::Left_borad(){                                 //�����
  if (jwas[2]->T_Jwas->Left<=0) {
    jwas[0]->T_Jwas->Left=48;
    jwas[1]->T_Jwas->Left=9;
    jwas[2]->T_Jwas->Left=0;
    jwas[3]->T_Jwas->Left=122;
  }
}
Jwas::Right_borad(){
  if (jwas[3]->T_Jwas->Left + jwas[3]->T_Jwas->Width > 700){     //�k���
    jwas[0]->T_Jwas->Left =634;
    jwas[1]->T_Jwas->Left =578;
    jwas[2]->T_Jwas->Left =569;
    jwas[3]->T_Jwas->Left =691;
  }
}
Jwas::fol(int a){
if(a==2){T_Jwas->Left=T_Jwas->Left+1;
}else {T_Jwas->Left=T_Jwas->Left-1;}
}
TForm1::abcdef(){                                              //��²
  a1=jwas[1]->T_Jwas->Left;
  a2=jwas[1]->T_Jwas->Left+jwas[1]->T_Jwas->Width;
  b1=jwas[1]->T_Jwas->Top;
  b2=jwas[1]->T_Jwas->Top+jwas[1]->T_Jwas->Height;
  /// ////////
  c1=jwas[2]->T_Jwas->Left;
  c2=jwas[2]->T_Jwas->Left+jwas[2]->T_Jwas->Width;
  d1=jwas[2]->T_Jwas->Top;
  d2=jwas[2]->T_Jwas->Top+jwas[2]->T_Jwas->Height;
  /// /////////
  e1=jwas[3]->T_Jwas->Left;
  e2=jwas[3]->T_Jwas->Left+jwas[3]->T_Jwas->Width;
  f1=jwas[3]->T_Jwas->Top;
  f2=jwas[3]->T_Jwas->Top+jwas[3]->T_Jwas->Height;
}

Doll::Doll(int a){
T_Doll = new TImage(Form1);
T_Doll->Parent=Form1;
T_Doll->Stretch=1;
switch (a){
        case 1:                                                   //���P����
        T_Doll->Picture->LoadFromFile("D:/1.jpg");
        T_Doll->Width=95;
        T_Doll->Height=113;
        break;
        case 2:
        T_Doll->Picture->LoadFromFile("D:/2.jpg");
        T_Doll->Width=97;
        T_Doll->Height=209;
        break;
        case 3:
        T_Doll->Picture->LoadFromFile("D:/3.jpg");
        T_Doll->Width=93;
        T_Doll->Height=220;
        break;
     }
 }

Doll::dup(){
T_Doll->Top = T_Doll->Top-1;
}
Doll::doll_Right(){
T_Doll->Left=T_Doll->Left+3;
}
Doll::doll_down(){
T_Doll->Top=doll[fo]->T_Doll->Top+3;
}
TForm1::name(){
for(int i=0;i<=6;i++){                                             //�����W��
if(i<=3){doll[i]->doll_name="��@��E!";
}else if(i>3 && i<=5){doll[i]->doll_name="��@���J!";
}else{doll[i]->doll_name="�L�����J!";}}}

void __fastcall TForm1::Button1Click(TObject *Sender)               //���
{
  re();
  pay=1;
  if(money<50){money+=10;
  }else if(money==50){money=0;}
 x=rand() % (max - min + 1) + min;

}
////////
void __fastcall TForm1::Timer1Timer(TObject *Sender)
{
  Shape1->BringToFront();                              //�¬}
  if(money>=0 && money!=50){Label1->Caption=t1+t3+(50-money)+"��"+t2+t0;}     //��r��X
  else if(money==50){Label1->Caption=t1+t4+t2+t0;}         //��r��X(�O��)
  name();
  abcdef();
    ////////////

  //Timer1->Enabled=true;
  ////////////
  if (pay){                   //��������
    if (GetAsyncKeyState(37)&0x8000) for(int i=0; i<=3 ;i++){jwas[i]->Left();jwas[i]->Left_borad();}
    if (GetAsyncKeyState(39)&0x8000) for(int i=0; i<=3 ;i++){jwas[i]->Right();jwas[i]->Right_borad();}
  }//pay
  ////////////////////
  if (GetAsyncKeyState(32)&0x8000 && pay==1  ){down=1;pay=0;}   //�}��
  if (down){
    for(int i=1;i<=3;i++){jwas[i]->dow(1);jwas[0]->dow(2); }//���U
    for(int i=0;i<=6;i++){
      int x1=doll[i]->T_Doll->Left;                                //�����ŧi
      int x2=doll[i]->T_Doll->Left+doll[i]->T_Doll->Width;
      int y1=doll[i]->T_Doll->Top;
      int y2=doll[i]->T_Doll->Top +doll[i]->T_Doll->Height;
      ///////
      if((x1>=c1 && x1<=c2 && y1>=d1 && y1 <= d2)||             //������
          (x2>=c1 && x2<=c2 && y1>=d1 && y1 <= d2)||
          (c1>=x1 && c1<=x2 && d2>=y1 && d2 <= y2 && c2>=x1 && c2<=x2)){
        down=0;
        fol=1;
        nha=1;
        //Label1->Caption=int(fol);
      }
      if((x1>=e1 && x1<=e2 && y1>=f1 && y1 <= f2)||             //�k����
         (x2>=e1 && x2<=e2 && y1>=f1 && y1 <= f2)||
         (e1>=x1 && e1<=x2 && f2>=y1 && f2 <= y2 && e2>=x1 && e2<=x2)){
        down=0;
        fol=1;
        nha=1;
        //Label1->Caption=int(fol);
      }
      if((a1>=x1 && a2<=x1 && b1>=y1 &&  b2<= y1)||             //��
         (a1>=x2 && a2<=x2 && b1>=y1 &&  b2<= y1)||
         (x1>=a1 && x1<=a2 && y1>=b1 &&  y1<= b2 && x2>=a1 && x2<=a2)){
        down=0;
        fol=1;
        fo=i;
        ha=1;
        break;
      }
    }//for
     if(d2>=656){down=0;fol=1;nha=1;}

  }//down
  if (fol){           //��
    if(e1<=c2){L=0;R=0;nha=1;}
    if(doll[fo]->T_Doll->Left>=c1 && doll[fo]->T_Doll->Left<=c2)L=0;
    if(doll[fo]->T_Doll->Left+doll[fo]->T_Doll->Width >= e1
        && doll[fo]->T_Doll->Left+doll[fo]->T_Doll->Width<=e2)R=0;
    if(L)jwas[2]->fol(2);
    if(R)jwas[3]->fol(3);
    if(!L && !R){upp=1;fol=0;}
  }//fol
  /////
  if (upp){         //�W��
    for (int i=1;i<=3;i++){jwas[i]->up(1); jwas[0]->up(2);      //�����W��
    if (ha){doll[fo]->dup();}//�����W��
    if (jwas[1]->T_Jwas->Top<=38){    //�P��
         if(x<=4 && money!=50){doll_down=1;nha=1;}
        if(money==50){doll_down=0;}           //�O��
        upp=0;get=1;move_D=1;move_J=1;

      }
    }//for

  }//if upp
  ////////
  if (doll_down && ha){          //�P��
    doll[fo]->doll_down();
    if (doll[fo]->T_Doll->Top>=doll_Top[fo]){doll_down=0; ha=0;}   //���U�h
  }//if
  ///////
  if (get){
     if (move_D && ha && !doll_down ){doll[fo]->doll_Right(); //�����k��
     if(doll[fo]->T_Doll->Left + doll[fo]->T_Doll->Width>=890){move_D=0;}}

     if (move_J){for (int i=0; i<=3 ;i++){jwas[i]->Right();     //�����k��
     if (jwas[1]->T_Jwas->Left>=778){move_J=0;L1=1;R1=1;}}}

     if (L1){jwas[2]->T_Jwas->Left=jwas[2]->T_Jwas->Left-1;      //�P����
     if (jwas[2]->T_Jwas->Left<=769 ){L1=0;}}

     if(R1){jwas[3]->T_Jwas->Left=jwas[3]->T_Jwas->Left+1;       //�P�k��
     if(jwas[3]->T_Jwas->Left>=891){R1=0;}}

     if(!move_D &&!move_J &&ha && !L1 && !R1 && !(doll[fo]->T_Doll->Top+doll[fo]->T_Doll->Height>=1030))
       {doll[fo]->doll_down();}     //��������

     if(ha&&(doll[fo]->T_Doll->Top+doll[fo]->T_Doll->Height>=1030)){        //���G���
       get=0;gg=1;t2="\n���ߧ���F"+doll[fo]->doll_name; money=0;
       }else if(nha && !move_J && !L1 && !R1){gg=1;t2="\nQAQ �ƻ򳣨S��";}



  }//get

  if(gg&&!(jwas[1]->T_Jwas->Left<=280)){for(int i=0;i<=3;i++){jwas[i]->Left();}  //�_��

  }

}//t

//---------------------------------------------------------------------------


//---------------------------------------------------------------------------
