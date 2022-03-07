#include "person.h"
#include "student_info.h"
#include "faculty_info.h"
#include <iostream>
#include <stdlib.h>

using namespace std;

int main()
{
        int i,no_of_students,no_of_faculties;
        char ch;

        do
        {
        cout<<"1.Student\n2.Faculty\nENTER THE CHOICE:";
        cin>>i;

        if(i==1)
        {
            system("cls");
            cout<<"ENTER THE NO OF STUDENTS:";
            cin>>no_of_students;

            student s[no_of_students];

            person *p;

            p=&s[no_of_students];

            for(int i=0;i<no_of_students;i++)
            {
                s[i].get_details(1);
                s[i].student_details();
            }
            for(int i=0;i<no_of_students;i++)
            {
                cout<<"\n\n"<<setw(40)<<"#################"<<"\t"<<"STUDENT DETAILS"<<"\t"<<"######################"<<"\n\n";

                s[i].print_details();
            }
        }
        else if(i==2)
        {
            system("cls");
            cout<<"ENTER THE NO OF FACULTIES:";
            cin>>no_of_faculties;

            faculty f[no_of_faculties];

            person *p;

            p=&f[no_of_faculties];

            for(int i=0;i<no_of_faculties;i++)//////////
            {
                f[i].read();
            }
            for(int i=0;i<no_of_faculties;i++)
            {
                cout<<"\n\n"<<setw(40)<<"#################"<<"\t"<<"FACULTY DETAILS"<<"\t"<<"######################"<<"\n\n";
                f[i].print_details();
            }
        }
        cout<<"Do you want to continue :";
        cin>>ch;
        }while(ch=='y');
}
