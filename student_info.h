#include<iostream>
#include<iomanip>
#include<fstream>
#include "hostel_info.h"
#include "student_course.h"

using namespace std;

class student:public person
{
    private:

        char reg_no[100],program[100];
//        fstream student_file;

    public :

        hostel *h;

        studentcourse *s;

        void student_details()
        {
            fstream p;
            p.open("student.txt",ios::app | ios::out);

            cout<<"\n\nENTER THE REGISTER NO:"<<"\n";
            cin>>reg_no;

            cout<<"\n\nENTER THE PROGRAM:"<<"\n";
            cin>>program;

            p<<"\n\n"<<reg_no<<"\t"<<program;
            p.close();

            cout<<"\nENTER THE HOSTEL DETAILS:"<<"\n\n";
            h=new hostel;

            h->get_hostel_details();

            cout<<"\n\nCAL CGPA:"<<"\n";
            cal_cgpa();
        }
        void cal_cgpa()
        {
            s=new studentcourse;
            s->get_courses();
        }
        void print_details()
        {
            cout<<"\n\n\nNAME:"<<setw(20)<<"AGE:"<<setw(20)<<"PHONE:"<<setw(20)<<"EMAIL:"<<setw(20)<<"STREET:"<<setw(20)<<"CITY:"<<setw(20)<<"STATE:"<<setw(20)<<"COUNTRY:"<<setw(20)<<"POSTAL CODE:"<<"\n";
            cout<<name<<setw(17)<<age<<setw(20)<<phone_no<<setw(23)<<email_id<<setw(18)<<street_name<<setw(20)<<city<<setw(20)<<state<<setw(20)<<country<<setw(20)<<postal_code<<"\n\n";

            cout<<"\n\n"<<"REG:"<<setw(20)<<"PROG:"<<"\n\n";
            cout<<reg_no<<setw(20)<<program<<"\n\n";

            h->print_hostel_details();

            s->print_student_course_details();
        }
};


