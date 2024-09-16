 
/* 
Write a C++ program to declare a class. Declare pointer to class. Initialize and 
display the contents of the class member. 
*/ 
#include <iostream> 
using namespace std; 
 
class Class  { 
public: 
    int a; 
    float b; 
    Class (int x, float y) : a(x), b(y) {}  
    void display() const { 
        cout << "a: " << a << endl; 
        cout << "b: " << b << endl; 
    } 
}; 
 
int main() { 
    Class * ptr = NULL;      
    ptr = new Class (10, 15.5f);  
    ptr->display(); 
    delete ptr;  
    cout<<endl; 
    cout << "*******************************************************************************" << endl;  
    cout << "Program Prepared & Executed by: UPASANA GAUR ,CSE(A1), Class Roll no: 73" << endl;  
    cout << "*******************************************************************************" << endl;  
    return 0; 
}