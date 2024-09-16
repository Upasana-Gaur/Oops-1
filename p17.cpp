/*Create a student database system where each student has attributes like name, roll 
number, course, and marks. The program should: 
• Use a class Student to store student details. 
• Use a pointer to a Student object to dynamically manage student records. 
• Allow the user to add, delete, and view student records. 
• Calculate and display the average marks of all students. 
• Find and display the student with the highest marks. */
#include <iostream>
#include <iomanip>
#include <string>

using namespace std;
const int maximum_students = 100; 

class Student {
public:
    string name;
    int rollNumber;
    string course;
    float marks;

    Student() : name(""), rollNumber(0), course(""), marks(0.0) {}    Student(const string& n, int r, const string& c, float m) : name(n), rollNumber(r), course(c), marks(m) {}
};

class StudentDatabase {
private:
    Student students[maximum_students];
    int size;

public:
    StudentDatabase() : size(0) {}
    void addStudent() {
    if (size >= maximum_students) {
        cout << "Database is full.\n";
        return;
    }
    string name, course;
    int rollNumber;
    float marks;
    cin.ignore(); 
    cout << "Enter student name:\n";
    getline(cin, name);
    cout << "Enter roll number: ";
    cin >> rollNumber;
    cin.ignore(); 
    cout << "Enter course: ";
    getline(cin, course);
    cout << "Enter marks: ";
    cin >> marks;
    students[size] = Student(name, rollNumber, course, marks);
    ++size;
    cout << "Student added successfully.\n";
}

    void deleteStudent() {
        int rollNumber;
        cout << "Enter roll number of the student to delete: ";
        cin >> rollNumber;
        int flag = -1;
        for (int i = 0; i < size; ++i) {
            if (students[i].rollNumber == rollNumber) {
                flag = i;
                break; }
        }
        if (flag == -1) {
            cout << "Student with roll number " << rollNumber << " not found.\n";
            return;
        }
        for (int i = flag; i < size - 1; ++i) {
            students[i] = students[i + 1];
        }
        --size;
        cout << "Student deleted successfully.\n";
    }
    void display() const {
        if (size == 0) {
            cout << "No students to display.\n";
            return;
        }

        cout << "Roll Number | Name              | Course           | Marks\n";
        cout << "-------------------------------------------------------------\n";
        for (int i = 0; i < size; ++i) {
            cout << setw(10) << students[i].rollNumber << " | "
                 << setw(20) << students[i].name << " | "
                 << setw(15) << students[i].course << " | "
                 << setw(5) << fixed << setprecision(2) << students[i].marks << '\n';
        }
    }

    void displayAvg() const {
        if (size == 0) {
            cout << "No students to calculate average.\n";
            return;
        }
        float totalMarks = 0;
        for (int i = 0; i < size; ++i) {
            totalMarks += students[i].marks;
        }
        float averageMarks = totalMarks / size;
        cout << "Average Marks: "  << averageMarks << '\n';
    }

    void highestRecord() const {
        if (size == 0) {
            cout << "No records available.\n";
            return;
        }
        int top = 0;
        for (int i = 1; i < size; ++i) {
            if (students[i].marks > students[top].marks) {
                top = i;
            }
        }
        cout << "Student with highest marks:\n";
        cout << "Name: " << students[top].name << '\n';
        cout << "Roll Number: " << students[top].rollNumber << '\n';
        cout << "Course: " << students[top].course << '\n';
        cout << "Marks: " << fixed << setprecision(2) << students[top].marks << '\n';
    }
};

int main() {
    StudentDatabase s;
    int choice;

    do {
        cout << "Student Database System\n";
        cout << "1. Add Student\n";
        cout << "2. Delete Student\n";
        cout << "3. View Students\n";
        cout << "4. Calculate Average Marks\n";
        cout << "5. Find Student with Highest Marks\n";
        cout << "6. Exit\n";
        cout << "Enter your choice: ";
        cin >> choice;

        switch (choice) {
            case 1:
                s.addStudent();
                break;
            case 2:
                s.deleteStudent();
                break;
            case 3:
                s.display();
                break;
            case 4:
                s.displayAvg();
                break;
            case 5:
                s.highestRecord();
                break;
            case 6:
                cout << "Exiting the program.\n";
                break;
            default:
                cout << "Invalid choice. Please try again.\n";
        }
    } while (choice != 6);

    cout << "*******************************************************************************\n";  
    cout << "Program Prepared & Executed by: UPASANA GAUR, CSE(A1), Class Roll no: 73\n";  
    cout << "*******************************************************************************\n";  
    return 0; 
}
