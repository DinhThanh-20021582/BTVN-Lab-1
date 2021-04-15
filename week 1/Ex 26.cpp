//B26
#include<iostream>
using namespace std;

int main()
{
    int n,i,a[100];
    cout << "Moi nhap vao so n ";
    cin>> n;
    for (i=0;i<n;i++){
        cin >> a[i];
    }
    int s;
    double mean;
    for (i=0;i<n;i++){s=s+a[i];};
    mean=(double(s/n));
    cout << " mean: "<<mean;
   
    int max = a[0];
    for (int i = 1; i < n; i++)
        if (max < a[i])
            max = a[i];
    cout << "\n max: " << max;

 
    int min = a[0];
    for (int i = 1; i < n; i++)
        if (min > a[i])
            min = a[i];
    cout << "\n min: " << min;
}


