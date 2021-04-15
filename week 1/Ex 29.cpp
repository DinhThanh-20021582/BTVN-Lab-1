//B29
#include<iostream>
using namespace std;

int main()
{
    int n; 
    cout<<"Nhap n: ";
    cin >> n;
    
    for(int i = 1; i <= n; i++)
    {
        for(int k = 1; k <= i; k++)
        {
            cout << "*";            
        }
        cout <<"\n";
    }    
}



