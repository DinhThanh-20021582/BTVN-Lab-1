//B30
#include<iostream>
using namespace std;

int main()
{
    int n; 
    cout<<"Nhap n: ";
    cin >> n;
    
    for(int i = n; i >=1; i--)
    {
        for(int k = 1; k <= i; k++)
        {
            cout << "*";            
        }
        cout <<"\n";
    }    
}


