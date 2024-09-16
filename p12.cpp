/*Anna is competing to be the top student in her high school. She wants to know how many of her classmates scored higher than she did on their exams this semester. You need to create a class named Student with the following features:  
Data Members:  An array scores[5] that stores a student's scores for 5 exams. 
Member Functions:  
A void input() function that reads 5 exam scores and stores them in the scores array.  
An int calculateTotalScore() function that calculates and returns the sum of the scores in 
the scores array. 
*/ 
#include<iostream> 
#include<iomanip> 
using namespace std; 
 
class Student{ 
    int score[5]; 
public: 
    void input(){ 
        for(int i=0;i<5;i++){ 
            cin>>score[i]; 
        } 
    } 
    int calculateTotalScore(){ 
        int total=0; 
        for(auto x:score) 
            total+=x; 
        return total; 
    } 
};
int main(){ 
    int n; 
    cout<<"enter no of students"<<endl;
    cin>>n; 
    Student s[n]; 
    cout<<"enter score"<<endl;
    for(int i=0;i<n;i++){ 
        s[i].input(); 
    } 
    int annaTotalScore=s[0].calculateTotalScore(); 
    int count=0; 
    for(int i=1;i<n;i++){ 
        if(s[i].calculateTotalScore()>annaTotalScore) 
            count++; 
    } 
    cout<<count<<"student score more than anna"<<endl; 
    cout<<endl; 
    cout << "*******************************************************************************" << endl;  
    cout << "Program Prepared & Executed by: UPASANA GAUR ,CSE(A1), Class Roll no: 73" << endl;  
    cout << "*******************************************************************************" << endl;  
    return 0; 

} 