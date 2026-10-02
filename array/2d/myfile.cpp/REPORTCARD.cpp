#include<iostream>
#include<string.h>
using namespace std;
struct ReportCard{
    string name;
    int rollno;
    float marks[3];
    float total;
    float avg; 
};
int main()
{
    ReportCard student;
    cout<<"Enter Student Name ";
    getline(cin,student.name);
    cout<<"enter ROLL NO.";
    cin>>student.rollno;
    cout<<"Enter Marks in English ";
    cin>>student.marks[0];
    cout<<"Enter Marks in Maths ";
    cin>>student.marks[1];
    cout<<"Enter marks in Sci ";
    cin>>student.marks[2];
    student.total=student.marks[0]+student.marks[1]+student.marks[2];
    student.avg=student.total/3;
    cout<<"\n---***REPORT CARD***---"<<endl;
    cout<<"Name"<<student.name<<endl;
    cout<<"ROLL NO."<<student.rollno<<endl;
    cout<<"Marks in English "<<student.marks[0]<<endl;
    cout<<"Marks in Maths "<<student.marks[1]<<endl;
    cout<<"Marks in Sci "<<student.marks[2]<<endl;
    cout<<"Total "<<student.total<<endl;
    cout<<"Avg "<<student.avg<<endl;
    return 0;
}