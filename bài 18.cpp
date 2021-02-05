// Bài 18 
#include <iostream>
#include <math.h>
using namespace std;
int main()
{
int hdA,tdA,hdB,tdB ;
double AB;
            cout<<"Nhap Hoanh Do diem A: "; cin>> hdA;
            cout<<"Nhap Tung Do diem A : "  ; cin>> tdA; 
            cout<<"Nhap Hoanh Do diem B: "; cin>> hdB;
            cout<<"Nhap Tung Do diem B : "  ; cin>> tdB; 

             AB=sqrt(double((hdA-hdB)*(hdA-hdB)+(tdA-tdB)*(tdA-tdB)));
            cout << "AB= : "<< AB;
            return 0;
    }

