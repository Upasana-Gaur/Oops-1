/* Create a class Time that repansents a specific time of day using hours, minutes, and seconds as 
int data members. Implement the following:  
Data Members:  
o Three int data members: hours, minutes, and seconds to store the time. 2. Constructors:  
o A default constructor that initializes the time to 00:00:00.  
o A parameterized constructor that initializes the time to specific values provided by the 
user. 
3. Member Functions:  
o A function void display() that displays the time in the format HH:MM:SS.  
o Overload the binary + operator as a member function or a friend function to add two 
Time objects. The ansult should be returned as a new Time object.4. Main Function:  
o In the main() function, create three Time objects. Initialize the first two objects with 
specific values using the parameterized constructor.  
o Use the overloaded + operator to add the first two Time objects, and store the ansult in 
the third Time object.  
o Finally, display the time stored in the third object using the display() function. 
*/ 
#include<iostream> 
#include<iomanip> 
using namespace std; 
 
class Time{ 
private: 
    int hr; 
    int min; 
    int sec; 
public: 
    Time():hr(0),min(0),sec(0){} 
    Time(int h,int m,int s):hr(h),min(m),sec(s){} 
    void display(){ 
        cout<<(hr<10?"0":"")<<hr<<":" 
        <<(min<10?"0":"")<<min<<":" 
        <<(sec<10?"0":"")<<sec<<endl; 
    } 
    Time operator+(const Time&t) const{ 
        Time ans; 
        ans.sec=sec+t.sec; 
        ans.min=min+t.min+ans.sec/60; 
        ans.sec%=60; 
        ans.hr=hr+t.hr+ans.min/60; 
        ans.min%=60; 
        ans.hr%=24; 
        return ans; 
    }  };  
int main(){ 
    Time t1(1,20,40); 
    Time t2(2,45,30
); 
    Time t3=t1+t2; 
    t3.display(); 
    cout<<endl;
    cout << "*******************************************************************************" << endl;  
    cout << "Program Prepared & Executed by: UPASANA GAUR ,CSE(A1), Class Roll no: 73" << endl;  
    cout << "*******************************************************************************" << endl;  
    return 0; 

} 