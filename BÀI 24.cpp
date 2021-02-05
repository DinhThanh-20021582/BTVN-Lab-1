//B24
#include<iostream>
		using namespace std;
		int main(){
			int n,ngay,thang,nam;
			cout<<"Nhap ngay/thang/nam: ";
			cin>>ngay>>thang>>nam;
		if (thang<3){
		

		  thang=thang+12;
		  nam=nam-1;
		}
		n=(ngay+2*thang+(3*(thang+1)) / 5 + nam + (nam / 4)) % 7;
			cout<<"Ngay "<<ngay<<" thang "<<thang<<" nam "<<nam<<" la: ";
			switch(n){
				case 1:
					cout<<"T2";
					break;
				case 2:
					cout<<"T3";
					break;
				case 3:
					cout<<"T4";
					break;
				case 4:
					cout<<"T5";
					break;
				case 5:
					cout<<"T6";
					break;
				case 6:
					cout<<"T7";
					break;
				case 0:
					cout<<"CN";
					break;						
			}
		}
		



