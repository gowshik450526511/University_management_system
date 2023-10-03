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

        const int get_credit()
        {
            return credit;
        }
        
        void print_course_details()
        {
            cout<<"\nNAME:"<<setw(15)<<name<<"\n\n";
            cout<<"\nCODE:"<<setw(15)<<code<<"\n\n";
            cout<<"\nCREDIT:"<<setw(15)<<credit<<"\n\n";
        }

};


