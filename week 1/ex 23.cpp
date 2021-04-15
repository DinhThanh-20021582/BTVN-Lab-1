//B23
#include<iostream>
		#include<cstdlib>
		using namespace std;
		int main(){
			int a,b;
			cout<<"Nhap vao 2 so a, b: ";
			cin>>a>>b;
			int c=(a+b+abs(a-b))/2;
			if(c==a)
			cout<<"So lon hon trong hai so la a= "<<c;
		

			if(c==b)
			cout<<"So lon hon trong hai so la b= "<<c;
			return 0;
		}


