
/*Write a program in C++ to display the sum of the series [ 9 + 99 + 999 + 9999 ...]*/  
#include<iostream>  
using namespace std;  
int main(){  
int n,sum = 0,series = 0;  
cout << "Enter the number of terms in series: ";  
cin >> n;  
cout << endl << "Series of given terms is: ";  
while(n){  
series = series * 10 + 9;  
sum = sum + series;  
cout << series << " ";  
n--;  
}  
cout << endl << "Sum of series: " << sum << endl;  
cout << "************************************************************************************" << endl;  
cout << "Program Prepared & Executed by: Upasana  Gaur CSE3(A1), Class Roll no:73" << endl;  
cout << "************************************************************************************" << endl;  
}  