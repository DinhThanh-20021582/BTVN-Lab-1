//B28
#include<iostream>
		using namespace std;
		int main(){
			for(int i=0;i<24;i++){
				switch(i){
					case 0:
						cout<<"12 midnight"<<endl;
						break;
					case 1:case 2:case 3:case 4:case 5:case 6:case 7:case 8:case 9:case 10:case 11:
						cout<<i<<" am"<<endl;
						break;
					case 12:
						cout<<"12 noon"<<endl;
						break;	
					case 13:case 14:case 15:case 16:case 17:case 18:case 19:case 20:case 21:case 22:case 23:
						cout<<i<<" pm"<<endl;
						break;		
				}
			}
		}


