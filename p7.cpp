/* Construct a C++ program that removes a specific character from a given string 
and return the updated string.  
Input: computer science is the future  
Output: compuer science is he fuure 
*/ 
 
#include<iostream> 
using namespace std; 
 
string removes_Character(string s ,char ch){ 
    string res; 
    int n=s.length(); 
    for(auto x:s){ 
        if(x!=ch) 
            res+=x; 
    } 
    return res; 
} 
 
int main(){ 
    string s; 
    cout<<"Enter String :"; 
    getline(cin,s); 
    char ch; 
    cout<<"enter character to remove :"; 
    cin>>ch; 
    cout<<"modified  String :"<<removes_Character(s,ch)<<endl; 
    cout<<endl; 
    cout << "*******************************************************************************" << endl;
    cout << "Program Prepared & Executed by: UPASANA GAUR CSE(A1), Class Roll no: 73" << endl;
    cout << "*******************************************************************************" << endl; 
    return 0; 
} 
 