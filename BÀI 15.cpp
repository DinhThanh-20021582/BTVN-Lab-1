// bài 15 
#include <iostream>
  
using namespace std;

int fibonacci(int n) {
    int f0 = 0;
    int f1 = 1;
    int fn = 1;
    int i;
 
    if (n < 0) {
        return -1;
    } else if (n == 0 || n == 1) {
      //  return n;
    } else {
        for (i = 2; i < n; i++) {
            f0 = f1;
            f1 = fn;
            fn = f0 + f1;
        }
    }
    return fn;
}

int main() {
 int i;
    cout << "So fibonaccin tu 0 den 10 la:";
    for (i = 0; fibonacci(i) < 10; i++) {
        cout << fibonacci(i) << " ";
    }
}

