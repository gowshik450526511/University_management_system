#include<iostream>
#include<iomanip>
#include<fstream>
#include "course.h"

class faculty : public person
{
private:
    string designation;
    string dept;
    int salary;

public:
    std::unique_ptr<course> ptr; // Use std::unique_ptr for automatic memory management

    void read()
    {
        cout << "\n\nGETTING FACULTY DETAILS:" << "\n\n";
        get_details(2);
        fstream v;
        v.open("faculty.txt", ios::out | ios::app);
        cout << "\n\nENTER THE DESIGNATION:";
        cin >> designation;
        cout << "\n\nENTER THE DEPARTMENT:";
        cin >> dept;
        cout << "\n\nENTER THE SALARY:";
        cin >> salary;
        v << "\n\n" << designation << "\t" << dept << "\t" << salary;

        // Use std::make_unique to create and manage the memory
        ptr = std::make_unique<course>();
        ptr->get_course_details(2);

        v.close();
    }

    void faculty::print_details() final
    {
        // Use std::format for advanced formatting
        string output = std::format("\n\n####################################################################\n\n");
        output += std::format("\n\nFACULTY NAME:{:<20}FACULTY AGE:{:<15}PHONE:{:<20}EMAIL:{:<25}STREET:{:<20}CITY:{:<20}STATE:{:<20}COUNTRY:{:<20}POSTAL CODE:{}\n",
            name, age, phone_no, email_id, street_name, city, state, country, postal_code);
        output += std::format("\n\nDESIGNATION:{:<35}DEPT:{:<25}SALARY:{}\n\n", designation, dept, salary);
        output += std::format("########################################################################\n\n\n");
    
        cout << output;
    }
};
