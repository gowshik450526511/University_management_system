#include<bits/stdc++.h>
#include<iostream>
#include<fstream>
using namespace std;

class person
{

    protected:
            string name;
            string age;
            string phone_no;
            string email_id;
            string street_name;
            string city;
            string state;
            string country;
            string postal_code;


    public:
            void get_details(int f)
            {
                if(f==1)
                {

                fstream person;
                person.open("student.txt",ios::out | ios::app);

                cout<<"\n\nENTER THE NAME:";
                cin>>name;

                cout<<"\n\nENTER THE AGE:";
                cin>>age;

                cout<<"\n\nENTER THE PHONE NO:";
                cin>>phone_no;

                cout<<"\n\nENTER THE EMAIL ID:";
                cin>>email_id;

                cout<<"\n\nENTER THE STREET NAME:";
                cin>>street_name;

                cout<<"\n\nENTER THE CITY:";
                cin>>city;

                cout<<"\n\nENTER THE STATE:";
                cin>>state;

                cout<<"\n\nENTER THE COUNTRY:";
                cin>>country;

                cout<<"\n\nENTER THE POSTAL CODE:";
                cin>>postal_code;

                person<<"\n\n"<<name<<"\t"<<age<<"\t"<<phone_no<<"\t"<<email_id<<"\t"<<street_name<<"\t"<<city<<"\t"<<state<<"\t"<<country<<"\t"<<postal_code;

                person.close();
                }
                else if(f==2)
                {

                fstream person;
                person.open("faculty.txt",ios::out | ios::app);

                cout<<"\n\nENTER THE NAME:";
                cin>>name;

                cout<<"\n\nENTER THE AGE:";
                cin>>age;

                cout<<"\n\nENTER THE PHONE NO:";
                cin>>phone_no;

                cout<<"\n\nENTER THE EMAIL ID:";
                cin>>email_id;

                cout<<"\n\nENTER THE STREET NAME:";
                cin>>street_name;

                cout<<"\n\nENTER THE CITY:";
                cin>>city;

                cout<<"\n\nENTER THE STATE:";
                cin>>state;

                cout<<"\n\nENTER THE COUNTRY:";
                cin>>country;

                cout<<"\n\nENTER THE POSTAL CODE:";
                cin>>postal_code;

                person<<name<<"\t"<<age<<"\t"<<phone_no<<"\t"<<email_id<<"\t"<<street_name<<"\t"<<city<<"\t"<<state<<"\t"<<country<<"\t"<<postal_code;

                person.close();
                }

            }
            virtual void print_details()=0;
};


