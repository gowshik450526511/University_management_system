#include<iostream>
#include<fstream>
using namespace std;

class person
{

    protected:
            char name[100],age[100],phone_no[100],email_id[100],street_name[100],city[100],state[100],country[100],postal_code[100];


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


