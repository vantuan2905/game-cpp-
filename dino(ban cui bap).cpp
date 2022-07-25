#include<bits/stdc++.h>
#include "mylib.h"
using namespace std;
char g1[200],g2[200],g[0];int ydino=35;int xqua=114,yqua=35;
string carrot[5]={
  "  || ",
  " {  }",
  " {  }",
  "  __ ",
};
string kl[10]={
	"      (l /)      ",
	"      (o.o)    ",
	"       III    ",
	"       III     ",
	"      /_|_l   ",
};
void taodat();
void draw_dino();
void dich();
void xoacu();
void tao_qua();
void ktao();
main(){
	ShowCur(0);int check=0;
	srand(time(NULL));
	//tao_qua();
	int tt=0;taodat();ktao();
	while(1){
		dich();
		draw_dino();if(ydino==35){ gotoXY(10,ydino-1);cout<<"                   ";check=0;ydino=35;}
		if(kbhit()==true){
			char c=getch();
			if(c==-32){
				c=getch();
				if(c==72) check=1;
				//if(c==80) check=2;
			}
		}
		if(xqua==3){
		for(int i=yqua;i<=yqua+5;i++){
		gotoXY(xqua,i);cout<<"          ";
	}
		 xqua=117;tt=0;}
		if(tt==1){ xoacu();xqua--;tao_qua();}
		if(check==1){ ydino--;gotoXY(10,ydino+6);cout<<"                   ";}
		if(check==2){ ydino++;gotoXY(10,ydino-2);cout<<"                   ";}
		if(ydino==25) check=2;
		int x=rand()%40+50;
		if(x%5==0&&tt==0){tt=1; tao_qua();}
	
		//Sleep(100);
	}
}
void xoacu(){
	for(int i=yqua;i<=yqua+4;i++){
		gotoXY(xqua+4,i);cout<<"  ";
	}
}
void tao_qua(){
	for(int i=yqua;i<=yqua+4;i++){
		gotoXY(xqua,i);
		cout<<carrot[i-yqua];
	}
	
}
void draw_dino(){
	for(int i=ydino;i<=ydino+4;i++){
		gotoXY(10,i);cout<<kl[i-ydino];
	}
}
void taodat(){
	
	for(int i=1;i<120;i++){
		gotoXY(i,40);cout<<"_";
	}
	for(int i=1;i<120;i++){
		gotoXY(i,42);cout<<g1[i];
		gotoXY(i,43);cout<<g2[i];
	}
}
void ktao(){
	for(int i=1;i<100;i++) g1[i]=g2[i]=' ';
}
void dich(){
	for(int i=1;i<110;i++){
		g1[i]=g1[i+1];
		g2[i]=g2[i+1];
	}
	taodat();
	int x=rand()%30+5;
	if(x%3==0||x%5==0){ g1[110]='o';g2[110]=' ';}
	else{g1[110]=' '; g2[110]='o';}
	
}
