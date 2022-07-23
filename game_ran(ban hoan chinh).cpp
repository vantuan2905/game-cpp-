#include<bits/stdc++.h>
#include "mylib.h"
#include "snakegame.h"
using namespace std;
void menu();
void box(int x,int y,int w,int h,int bgcolor,int color,string s);
int main(){
	ShowCur(0);
	menu();
}
void ve(int i=0){
	if(i==0)
	box(30,5,20,2,1,2,"choi tiep");else box(30,5,20,2,1,3,"choi tiep");
	box(30,7,20,2,1,3,"choi moi");
	box(30,9,20,2,1,3,"tro giup");
	box(30,11,20,2,1,3,"thoat");
	for(int i=1;i<=3;i++){
		for(int i=7;i<=11;i+=2){ textcolor(4);
			gotoXY(30,i);cout<<(char) 195;
			gotoXY(30+20,i);cout<<(char) 180;
		} break;
	}	
}
void tro_giup(){
	cout<<"       nhan phim mui ten len de di chuyen len tren\n\n";
	cout<<"       nhan phim mui ten xuong de di chuyen xuong\n\n";
	cout<<"      nhan phim mui ten trai de di chuyen trai\n\n";
	cout<<"       nhan phim mui ten phai de di chuyen phai\n\n";
	cout<<"  nhan de thoat";
	while(kbhit()==false){
		
	}
}
void menu(){
	int tt=0;int gt=0;
	ve();
	while(1){
		gt=tt;
		if(kbhit()==true){
			char c=getch();
			if(c==-32){
				c=getch();
				if(c==72) tt--;
				if(c==80) tt++;
				if(tt<0) tt=3;
				if(tt>3) tt=0;
			}else{
				if(c==13&&(tt==2)){
					system("cls");tro_giup();system("cls");ve(1);
					continue;
				}else
				if(c==13&&(tt==0||tt==1)){system("cls");gotoXY(1,1);cout<<tt<<endl;play();system("cls");ve(1);}else if(c==27) break;
			}
			//continue;
		}else continue;
		if(gt==0){
			box(30,5,20,2,1,3,"choi tiep");
			if(tt==0){
				box(30,5,20,2,1,2,"choi tiep");
			}
			if(tt==1){
				box(30,7,20,2,1,2,"choi moi");
			}
			if(tt==2){
				box(30,9,20,2,1,2,"tro giup");
			}
			if(tt==3){
				box(30,11,20,2,1,2,"thoat");
			}
		}
		if(gt==1){
			box(30,7,20,2,1,3,"choi moi");
			if(tt==0){
				box(30,5,20,2,1,2,"choi tiep");
			}
			if(tt==1){
				box(30,7,20,2,1,2,"choi moi");
			}
			if(tt==2){
				box(30,9,20,2,1,2,"tro giup");
			}
			if(tt==3){
				box(30,11,20,2,1,2,"thoat");
			}
		}
		if(gt==2){
			box(30,9,20,2,1,3,"tro giup");
			if(tt==0){
				box(30,5,20,2,1,2,"choi tiep");
			}
			if(tt==1){
				box(30,7,20,2,1,2,"choi moi");
			}
			if(tt==2){
				box(30,9,20,2,1,2,"tro giup");
			}
			if(tt==3){
				box(30,11,20,2,1,2,"thoat");
			}
		}
		if(gt==3){
			box(30,11,20,2,1,3,"thoat");
			if(tt==0){
				box(30,5,20,2,1,2,"choi tiep");
			}
			if(tt==1){
				box(30,7,20,2,1,2,"choi moi");
			}
			if(tt==2){
				box(30,9,20,2,1,2,"tro giup");
			}
			if(tt==3){
				box(30,11,20,2,1,2,"thoat");
			}
		}
		for(int i=1;i<=3;i++){
		for(int i=7;i<=11;i+=2){ textcolor(4);
			gotoXY(30,i);cout<<(char) 195;
			gotoXY(30+20,i);cout<<(char) 180;
		} break;
	}
	}
}
void box(int x,int y,int w,int h,int bgcolor,int color,string s){
	
	for(int j=y;j<y+h;j++){
		for(int i=x+1;i<x+w;i++){
			
			gotoXY(i,j);textcolor(4);SetColor(4);
			//cout<<" ";
		}
}
	if(color==2){
		gotoXY(x+6,y+1);cout<<(char)26;
	}else {
		if(color==3||1){
		gotoXY(x+6,y+1);cout<<"  ";
	}
	}
	for(int i=x;i<x+w;i++){
		char c=196;
		gotoXY(i,y);cout<<c;
		gotoXY(i,y+h);cout<<c;
	}
	for(int i=y+1;i<y+h;i++){
		char c=179;
		gotoXY(x,i);cout<<c;
		gotoXY(x+w,i);cout<<c;
	} char c=218;
	gotoXY(x,y);cout<<c;
	gotoXY(x+w,y);cout<<(char) 191;
	gotoXY(x,y+h);cout<<(char) 192;
	gotoXY(x+w,y+h);cout<<(char) 217;
	
	SetColor(color);
	gotoXY(x+2+6,y+1);cout<<s;
	
}
