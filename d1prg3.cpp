#include<iostream>
using namespace std;

typedef struct Student{
    string student_name;
    int roll_no;
    double marks;
    void accept();
    void display();
} Student;
void Student::accept()
{
    cout << "Enter Name: ";
    cin>>Student::student_name;
    cout << "Enter Roll: ";
    cin >> Student::roll_no;
    cout << "Enter Marks: ";
    cin >> Student::marks;
}
void Student::display(){
    cout << "Name- " << Student::student_name << endl << "Roll- " << Student::roll_no << endl << "Marks- "<< Student::marks<<endl;
}
int main()
{
    Student s[5];
    cout<<"Enter Student Details:\n";
    for(int i=0;i<5;i++){
        s[i].accept();
    }
    double max_marks=0;int pos=-1;
    for(int i=0;i<5;i++){
        if(s[i].marks>max_marks)
        {
            max_marks=s[i].marks;
            pos=i;
        }
    }
    cout<<"Topper Details:\n";
    s[pos].display();
    return 0;
}