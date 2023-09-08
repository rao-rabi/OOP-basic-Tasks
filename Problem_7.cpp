// Problem 7: Static Members. Create a C++ class called Student with attributes name and rollNumber. Implement a static member variable totalStudents to keep track of the total number of students created. Initialize totalStudents to 0 and increment it in the constructor. Test this by creating several Student objects and printing the total number of students.

#include<iostream>
#include<string>
using namespace std;

class Student{
    string name;
    int rollNumber;
    static int totalStudents;
    public:
    Student(){
        totalStudents++;
    }
    void setData(){
        cout<<"Enter Name of student: ";
        cin.ignore();
        getline(cin, name);
        cout<<"Enter Roll no. of Student: ";
        cin>>rollNumber;
    }
    void getData(){
        cout<<"You have entered record of total "<<totalStudents<<" students";
    }
};

int Student :: totalStudents = 0;
int main(){
    Student stu1,stu2,stu3,stu4,stu5;
    stu1.setData();
    stu2.setData();
    stu3.setData();
    stu4.setData();
    stu5.setData();
    stu5.getData();
return 0;
 
};