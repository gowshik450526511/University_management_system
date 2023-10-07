#include "person.h"
#include "student_info.h"
#include "faculty_info.h"
#include <iostream>
#include <stdlib.h>

using namespace std;

int main()
{
        int option;
        int no_of_students;
        int no_of_faculties;
        char ch;

        do
        {
        cout<<"1.Student\n2.Faculty\nENTER THE CHOICE:";
        cin>>option;

        if(option==1)
        {
            system("cls");
            cout<<"ENTER THE NO OF STUDENTS:";
            cin>>no_of_students;

            vector<student> students(no_of_students);

            person *p;

            p=&s[no_of_students];

            for(int i=0;i<no_of_students;i++)
            {
                students[i].get_details(1);
                students[i].student_details();
            }
            for(int j=0;j<no_of_students;j++)
            {
                std::cout << std::format("\n\n{:<40}################# STUDENT DETAILS ######################\n\n", "");

                students[j].print_details();
            }
        }
        else if(option==2)
        {
            system("cls");
            cout<<"ENTER THE NO OF FACULTIES:";
            cin>>no_of_faculties;

            vector<faculty> faculties(no_of_faculties);

            person *p;

            p=&f[no_of_faculties];

            for(int i=0;i<no_of_faculties;i++)
            {
                faculties[i].read();
            }
            for(int j=0;j<no_of_faculties;j++)
            {
                std::cout << std::format("\n\n{:<40}################# FACULTY DETAILS ######################\n\n", "");
                faculties[j].print_details();
            }
        }
        cout<<"Do you want to continue :";
        cin>>ch;
        }while(ch=='y');
}
