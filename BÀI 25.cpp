                             //B25
#include<iostream>
		using namespace std;
		int main(){
			int a[5],b[5];
			for(int i=0;i<5;i++){
				cout<<"Nhap so thu "<<i+1<<": ";
				cin>>a[i];
				b[i]=a[i];
			}
			for(int i=0;i<4;i++){
				for(int j=i+1;j<5;j++){
					if(b[i]>b[j]){
						int n=b[i];b[i]=b[j];b[j]=n;
					}
				}
			}
			cout<<"So dung giua la: "<<b[2];
		

		}



