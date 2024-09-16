/* 
Design a class to represent bank account. Includes the following members: 
 • Name of depositor • Account number • Type of account • Balance amount in the account 
 Methods: • To assign initial values • To deposit an amount • To withdraw an amount after 
checking balance. • To display the name and balance.  
Write a program to incorporate the constructor to provide initial values. 
*/ 
#include<iostream> 
#include<iomanip> 
using namespace std; 
 
class Account{ 
private: 
    string name; 
    int accNo; 
    string accType; 
    double bal; 
public: 
    Account(){ 
        name="NULL"; 
        accNo=0; 
        accType="NULL"; 
        bal=0; 
    } 
    Account(string Custname,int accNum,string acType,double 
balance):name(Custname),accNo(accNum),accType(acType),bal(balance){} 

    void deposit(double amount){ 
        bal+=amount; 
        cout<<"Deposited Rs."<<amount<<" Updated balance Rs."<<bal<<endl; 
    } 
 
    void withdraw(int amount){ 
        if(amount<=bal){ 
            bal-=amount; 
      cout<<"Withdrew Rs."<<amount<<" Updated balance: Rs."<<bal<<endl; 
        }else{ 
            cout<<"Insufficient balance."<<endl; 
        } 
    } 
    void display()const{ 
        cout<<left<<setw(25)<<"Account Holder Name :"<<name<<endl; 
        cout<<left<<setw(25)<<"Account Number :"<<accNo<<endl; 
        cout<<left<<setw(25)<<"Account Type   :"<<accType<<endl; 
        cout<<left<<setw(25)<<"Balance :"<<"Rs."<<bal<<endl; 
    }  
}; 
 
int main(){ 
    Account obj1("Upasana Gaur",6704095,"Saving Account",1000.00); 
    cout<<" Account details :"<<endl; 
    obj1.display(); 
    obj1.deposit(7000); 
    obj1.withdraw(500); 
    obj1.display(); 
    cout<<endl; 
    cout << "*******************************************************************************" << endl;  
    cout << "Program Prepared & Executed by: UPASANA GAUR ,CSE(A1), Class Roll no: 73" << endl;  
    cout << "*******************************************************************************" << endl;  
    return 0; 

} 