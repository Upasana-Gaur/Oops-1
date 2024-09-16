 
/* Write C++ program to reverse each word of string.e.g. Input- I love my India Output – I evol ym aidnI */
#include <iostream>
#include <string>
using namespace std;
void rev(char* start, char* end) {
    while (start < end) {
        char temp = *start;
        *start = *end;
        *end = temp;
        start++;
        end--;    }}
    void reverseword(char* str) {
    char* start = NULL;
    char* temp = str;
        while (*temp) {
        if ((start == NULL) && (*temp != ' ')) {
            start = temp; 
        }
        if (start && (*(temp + 1) == ' ' || *(temp + 1) == '\0')) {
            rev(start, temp); 
            start = NULL;
        }
        temp++;    }}

int main() {
    char str[100];
    cout << "Enter a string: ";
    cin.getline(str, 100);
    reverseword(str);
    cout << " string after reversal: " << str << endl;
    cout << "*******************************************************************************" << endl;
    cout << "Program Prepared & Executed by: UPASANA GAUR ,CSE(A1), Class Roll no: 73" << endl;
    cout << "*******************************************************************************" << endl; 
    return 0;
}

