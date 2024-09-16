/*Write a C++ program to find the maximum occurring character in a string*/
#include<iostream> 
using namespace std; 
char maxchar(string s){ 
    int freq[256]={0}; 
    for(auto x:s) 
        freq[x]++; 
    char mchar='\0'; 
    int mcount=0; 
    for(int i=0;i<256;i++){ 
        if(freq[i]>mcount){ 
            mcount=freq[i]; 
            mchar=(char)i; 
        } 
    } 
    return mchar; 
} 
int main(){  
    string s; 
    cout<<"Enter String :"; 
    getline(cin,s);  
    char ch=maxchar(s); 
    cout<<"Maximum occuring character is :"<<ch<<endl; 
    cout<<endl;
    cout << "*******************************************************************************" << endl;  
    cout << "Program Prepared & Executed by: UPASANA GAUR CSE(A1), Class Roll no: 73" << endl;  
    cout << "*******************************************************************************" << endl;  
    return 0; 

} 
