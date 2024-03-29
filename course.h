#pragma once

#include<bits/stdc++.h>
#include<iostream>
#include<iomanip>
#include<fstream>

class course
{
    string name;
    string code;
    int credit;

    public:

        void get_course_details(int e)
        {
            if(e==1)
            {
                fstream r;
                r.open("student.txt",ios::out | ios::app);
        
                cout<<"\n\nCOURSE NAME  :";
                cin>>name;
                cout<<"\n\nCOURSE CODE :";
                cin>>code;
                cout<<"\n\nCOURSE CREDIT :";
                cin>>credit;
        
                r<<"\n\n"<<name<<"\t"<<code<<"\t"<<credit;
                r.close();
            }
            else if(e==2)
            {
        
                fstream r;
                r.open("faculty.txt",ios::out | ios::app);
        
                cout<<"\n\nCOURSE NAME  :";
                cin>>name;
                cout<<"\n\nCOURSE CODE :";
                cin>>code;
                cout<<"\n\nCOURSE CREDIT :";
                cin>>credit;
        
                r<<"\n\n"<<name<<"\t"<<code<<"\t"<<credit;
                r.close();
            }
        }

        int get_credit() const
        {
            return credit;
        }
        
        void print_course_details() const
        {
            cout << std::format("\nNAME:{:<15}\n\n", name);
            cout << std::format("\nCODE:{:<15}\n\n", code);
            cout << std::format("\nCREDIT:{:<15}\n\n", credit);
        }

};


