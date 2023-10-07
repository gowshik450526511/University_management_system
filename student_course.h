#include<bits/stdc++.h>
#include<iostream>
#include<iomanip>
#include "semester_info.h"
#include "course.h"

class studentcourse
{
    private:
        float cgpa;
        vector<float>grades(10);
        int no_of_semesters;
        int number_of_courses;
        course *c;
        semester_fee *sem;

    public:
             float get_grade();
             void  get_courses();
             void  print_student_course_details();
};

float studentcourse::get_grade()
{
        float sum_numerator=0.0;
        float sum_credit=0.0;
        for (int semester = 0; semester < no_of_semesters; semester++)
        {
            for (int course_index = 0; course_index < number_of_courses; course_index++)
            {
                sum_credit += (c + course_index)->get_credit();
            }
            for (int course_index = 0; course_index < number_of_courses; course_index++)
            {
                sum_numerator += ((c + course_index)->get_credit()) * grades[course_index];
            }
        }
        cgpa = sum_numerator / sum_credit;
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

    sem.resize(no_of_semesters);

    courses.resize(number_of_courses);

    grades.resize(no_of_semesters, std::vector<float>(number_of_courses));

    for (int semesterIndex = 0; semesterIndex < no_of_semesters; semesterIndex++)
    {
        cout << std::format("\n\nSEMESTER:{:<15}\n\n", semesterIndex + 1);
        sem[semesterIndex].get_semester_fees_details();
    
        for (int courseIndex = 0; courseIndex < number_of_courses; courseIndex++)
        {
            cout << std::format("\n\nCOURSE:{:<15}\n\n", courseIndex + 1);
            c[courseIndex].get_course_details(1);
            cout << "\n\nENTER THE GRADE OF STUDENT OF THAT COURSE:";
            cin >> grades[courseIndex];
            co << grades[courseIndex];
        }
    }
    co<<"\n\n"<<get_grade();

    co.close();
}
void studentcourse::print_student_course_details()
{
    for(int semesterIndex = 0; semesterIndex < no_of_semesters; semesterIndex++)
    {
        cout << std::format("\n\n{:<40}SEMESTER:{:<10}\n\n", "", semesterIndex + 1);
        sem[semesterIndex].print_semester_fees_details();
    
        for(int courseIndex = 0; courseIndex < number_of_courses; courseIndex++)
        {
            cout << std::format("\n\n{:<40}COURSE DETAILS\n\n", "");
            c[courseIndex].print_course_details();
            cout << "\n\n\n##################################################\n";
            cout << std::format("\nCGPA OF STUDENT:{:<15}\t\n\n", cgpa);
            cout << "##################################################\n\n";
        }
    }
}


