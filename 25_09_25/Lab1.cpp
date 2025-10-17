#include <iostream>
using namespace std;

struct Student
{
  int student_id;
  string student_name;
  string student_email;
};

int main() 
{
 int max = 1; 
 Student student[max];
 
 for(int i=0; i<max; i++)
 {
   cout << "Student No. " << i+1 << ": \n";
   cout << "Student ID:";
   cin >> student[i].student_id;
   cout << "Student Name:";
   cin >> student[i].student_name;
   cout << "Student Email:";
   cin >> student[i].student_email;
   cout << "\n"   

 }
 
 
 
  for(int i=0; i<max; i++)
 {
   cout << "\n"   
   cout << "Student No. " << i+1 << ": \n";
   cout << "Student ID:";
   cout << student[i].student_id << "\n"; 
   cout << "Student Name:";
   cout << student[i].student_name  << "\n";
   cout << "Student Name:";
   cout << student[i].student_email  << "\n";
 }
    
}