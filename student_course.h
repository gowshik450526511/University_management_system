#include<iostream>
#include<iomanip>
#include "semester_info.h"
#include "course.h"

using namespace std;

class studentcourse
{
    private:

        float cgpa,grades[10];
        int no_of_semesters,number_of_courses;
        course *c;
        semester_fee *sem;

    public:
             float get_grade();
             void  get_courses();
             void  print_student_course_details();
};

float studentcourse::get_grade()
{
        float sum_numerator=0,sum_credit=0;
        for(int i=0;i<no_of_semesters;i++)
        {
            for(int i=0;i<number_of_courses;i++)
            {
                sum_credit+=(c+i)->get_credit();
            }
            for(int i=0;i<number_of_courses;i++)
            {
                sum_numerator+=((c+i)->get_credit())*grades[i];
            }
        }
        cgpa=sum_numerator/sum_credit;
        return cgpa;
}
void studentcourse::get_courses()
{
    fstream co;
    co.open("student.txt",ios::out | ios::app);

    cout<<"\nENTER THE NO OF SEMESTER:"<<"\n";
    cin>>no_of_semesters;

    cout<<"Enter the no. of Courses :";
    cin>>number_of_courses;

    co<<"\n\n"<<no_of_semesters<<"\t\t"<<number_of_courses<<"\t\t";

    sem=new semester_fee[no_of_semesters];

    c=new course[number_of_courses];

    for(int i=0;i<no_of_semesters;i++)
    {
        cout<<"\n\nSEMESTER:"<<setw(15)<<i+1<<"\n\n";
        sem[i].get_semester_fees_details();

        for(int i=0;i<number_of_courses;i++)
        {
            cout<<"\n\nCOURSE:"<<setw(15)<<i+1<<"\n\n";
            c[i].get_course_details(1);
            cout<<"\n\nENTER THE GRADE OF STUDENT OF THAT COURSE:";
            cin>>grades[i];
            co<<grades[i];
        }
    }
    co<<"\n\n"<<get_grade();

    co.close();
}
void studentcourse::print_student_course_details()
{
    for(int i=0;i<no_of_semesters;i++)
    {
        cout<<"\n\n"<<setw(40)<<"SEMESTER:"<<setw(10)<<i+1<<"\n\n";
        sem[i].print_semester_fees_details();

        for(int i=0;i<number_of_courses;i++)
        {
            cout<<"\n\n\n"<<setw(40)<<"COURSE DETAILS"<<"\n\n";
            c[i].print_course_details();
            cout<<"\n\n\n##################################################"<<"\n";
            cout<<"\n\nCGPA OF STUDENT:"<<setw(15)<<cgpa<<"\t"<<"\n\n";
            cout<<"##################################################"<<"\n\n";
        }
    }
}


