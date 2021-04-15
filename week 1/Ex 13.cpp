// Bài 13
#include <iostream>
#include <math.h>
using namespace std;
int main()
{
int hd,td;
double khoangcach;
            cout<<"Nhap Hoanh Do: "; cin>> hd;
            cout<<"Nhap Tung Do: "  ; cin>> td; 
             khoangcach=sqrt(double(hd*hd+td*td));
            cout << "Khoang cach la : "<< khoangcach;
            return 0;
    }

