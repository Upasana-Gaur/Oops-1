 /* Write a C++ program to calculate the electricity bill of a user according to given criteria…..*/
#include<iostream> 
using namespace std; 
int main(){ 
    string name; 
    int units;  
    double charge; 
    cout<<"Enter your name: "; 
    getline(cin,name); 
    cout<<"Enter number of units consumed: "; 
    cin>>units; 
if (units <= 100) { 
        charge = units * 0.60; 
    } 
 else if (units <= 300) { 
        charge = 100 * 0.60 + (units - 100) * 0.80; 
    }  
else { 
        charge = 100 * 0.60 + 200 * 0.80 +( (units - 300) * 0.90); 
    } 
    if (charge < 50) { 
        charge += 50; 
    } 
    if (charge > 300) { 
    charge *= 1.15;  
   } 
     cout << "Electricity Bill\n"<<endl; 
    cout << "Name: " << name << endl;  
    cout << "Units Consumed: " << units << endl; 
    cout << "Total Charge: Rs " << charge << endl; 
    cout << "************************************************************************************" << endl;  
    cout << "Program Prepared & Executed by: Upasana  Gaur CSE3(A1), Class Roll no:73" << endl;  
    cout << "************************************************************************************" << endl;  
    return 0; 
 } 
