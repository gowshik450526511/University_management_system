#include <iostream>
#include <fstream>
#include <format>
#include <memory>
#include "hostel_info.h"
#include "student_course.h"

class student : public person
{
private:
    string reg_no;
    string program;
public:
    unique_ptr<hostel> h; // Use std::unique_ptr for automatic memory management
    unique_ptr<studentcourse> s; // Use std::unique_ptr for automatic memory management

    void student_details()
    {
        fstream p;
        p.open("student.txt", ios::app | ios::out);
        cout << "\n\nENTER THE REGISTER NO:" << "\n";
        cin >> reg_no;
        cout << "\n\nENTER THE PROGRAM:" << "\n";
        cin >> program;
        p << "\n\n" << reg_no << "\t" << program;
        p.close();
        cout << "\nENTER THE HOSTEL DETAILS:" << "\n\n";
        h = make_unique<hostel>(); // Use std::make_unique to create and manage the memory
        h->get_hostel_details();
        cout << "\n\nCAL CGPA:" << "\n";
        cal_cgpa();
    }

    void cal_cgpa()
    {
        s = make_unique<studentcourse>(); // Use std::make_unique to create and manage the memory
        s->get_courses();
    }

    void print_details()
    {
        // Use std::format for advanced formatting
        string output = std::format("\n\n\nNAME:{:<20}AGE:{:<20}PHONE:{:<20}EMAIL:{:<20}STREET:{:<20}CITY:{:<20}STATE:{:<20}COUNTRY:{:<20}POSTAL CODE:{}\n",
            name, age, phone_no, email_id, street_name, city, state, country, postal_code);
        output += std::format("\n\nREG:{:<20}PROG:{}\n", reg_no, program);
        cout << output;
        h->print_hostel_details();
        s->print_student_course_details();
    }
};
