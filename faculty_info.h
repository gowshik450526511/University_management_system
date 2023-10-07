#include<iostream>
#include<iomanip>
#include<fstream>
#include "course.h"

using namespace std;

class faculty:public person
{
    private:
        string designation, dept;
        int salary;

    public:
        course *ptr;
        void read();
        void print_details();

};

void faculty::read()
{
    cout<<"\n\nGETTING FACULTY DETAILS:"<<"\n\n";
    get_details(2);

    fstream v;
    v.open("faculty.txt",ios::out | ios::app);

    cout<<"\n\nENTER THE DESIGNATION:";
    cin>>designation;
    cout<<"\n\nENTER THE DEPARTMENT:";
    cin>>dept;
    cout<<"\n\nENTER THE SALARY:";
    cin>>salary;

    v<<"\n\n"<<designation<<"\t"<<dept<<"\t"<<salary;

    ptr=new course;
    ptr->get_course_details(2);

    v.close();
}

void faculty::print_details()
{
    cout<<"\n\n####################################################################\n\n";
    cout<<"\n\n"<<"FACULTY NAME:"<<setw(20)<<"FACULTY AGE:"<<setw(15)<<"PHONE:"<<setw(20)<<"EMAIL:"<<setw(25)<<"STREET:"<<setw(20)<<"CITY:"<<setw(20)<<"STATE:"<<setw(20)<<"COUNTRY:"<<setw(20)<<"POSTAL CODE:"<<"\n";
    cout<<name<<setw(17)<<age<<setw(25)<<phone_no<<setw(23)<<email_id<<setw(18)<<street_name<<setw(20)<<city<<setw(20)<<state<<setw(20)<<country<<setw(20)<<postal_code<<"\n\n";
    cout<<"\n\n";
    cout<<"DESIGNATION:"<<setw(35)<<"DEPT:"<<setw(25)<<"SALARY:"<<"\n\n";
    cout<<designation<<setw(35)<<dept<<setw(25)<<salary<<"\n\n";
    cout<<"########################################################################\n\n\n";
}


