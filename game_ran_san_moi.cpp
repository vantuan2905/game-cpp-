#include<bits/stdc++.h>
#include "mylib.h"
using namespace std;
vector<int> tdx,tdy;int f1,f2;
void wall();
void snake();
void tao_qua();
int kt();
void dich(int check);
main(){srand(time(NULL));
	wall();ShowCur(0);
	tao_qua();int check=4,tt=4;
	tdx.push_back(11);tdx.push_back(12);tdx.push_back(13);tdx.push_back(14);tdx.push_back(15);tdx.push_back(16);
	tdx.push_back(17);tdx.push_back(18);tdx.push_back(19);
	tdy.push_back(6);tdy.push_back(6);tdy.push_back(6);tdy.push_back(6);tdy.push_back(6);tdy.push_back(6);tdy.push_back(6);
	tdy.push_back(6);tdy.push_back(6);
	while(true){
		gotoXY(tdx[0],tdy[0]);
		cout<<" ";
		tdx.erase(tdx.begin(),tdx.begin()+1);tdy.erase(tdy.begin(),tdy.begin()+1);
		if(kt()==0) break;
		snake();
		if(kbhit()==true){
			char c=getch();
			if(c==-32){
				c=getch();
				if(c==72) check=1;//len
				if(c==80) check=2;//xuong
				if(c==75) check=3;//trai
				if(c==77) check=4;//phai
				if((tt==1||tt==2)&&(check==1||check==2)) check=tt;
				if((tt==3||tt==4)&&(check==3||check==4)) check=tt;
			}
		}
		dich(check);
		tt=check;
		if(tdx[tdx.size()-1]<=10||tdx[tdx.size()-1]>=81||tdy[tdy.size()-1]<=5||tdy[tdy.size()-1]>30) break;
		Sleep(100);
	}
	system("cls");
	SetColor(4);
	
}
void dich(int check){
	if(check==1){
		tdx.push_back(tdx[tdx.size()-1]);
		tdy.push_back(tdy[tdy.size()-1]-1);
	}
	if(check==2){
		tdx.push_back(tdx[tdx.size()-1]);
		tdy.push_back(tdy[tdy.size()-1]+1);
	}
	if(check==3){
		tdx.push_back(tdx[tdx.size()-1]-1);
		tdy.push_back(tdy[tdy.size()-1]);
	}
	if(check==4){
		tdx.push_back(tdx[tdx.size()-1]+1);
		tdy.push_back(tdy[tdy.size()-1]);
	}
	int a=tdx[0],b=tdy[0];
	if(tdx[tdx.size()-1]==f1&&tdy[tdy.size()-1]==f2){
		tdx.insert(tdx.begin(),a);tdy.insert(tdy.begin(),b);
		tao_qua();
	}
}
void snake(){
	for(int i=0;i<tdx.size();i++){
		char c=42;
		gotoXY(tdx[i],tdy[i]);
		cout<<c;
	}
}
int kt(){
	int ds[200][200]={0};
	for(int i=0;i<tdx.size();i++){
		if(ds[tdx[i]][tdy[i]]==1) return 0;
		ds[tdx[i]][tdy[i]]=1;
	}
	return 1;
}
void wall(){char c=196;
	for(int i=10;i<=80;i++){
		gotoXY(i,5);
		cout<<c;
		gotoXY(i,30);
		cout<<c;
	} c=179;
	for(int i=6;i<=29;i++){
		gotoXY(9,i);
		cout<<c;
		gotoXY(81,i);
		cout<<c;
	}
}
void tao_qua(){
	while(1){
		f1=rand()% 68+11;
		f2=rand()%24+6;
		break;
	}
	gotoXY(f1,f2);
	cout<<"$";
}
