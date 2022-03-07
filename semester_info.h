#include<iostream>

#include<fstream>

#include <iomanip>

using namespace std;

class semester_fee
{

    private:

        int tution_fees;
        int examination_fees;
        int library_computer_fees;
        int anna_university_fees;
        int mark_sheet_cost_fees;
        int total_semester_fees;

    public:

        void get_semester_fees_details();

        void print_semester_fees_details();


};

void semester_fee::get_semester_fees_details()
{
    fstream semester_fee;
    semester_fee.open("student.txt",ios::out|ios::app);

    cout<<"\nENTER THE TUTION FEES:"<<setw(15);
    cin>>tution_fees;
    cout<<"\nENTER THE EXAMINATION FEES:"<<setw(15);
    cin>>examination_fees;
    cout<<"\nENTER THE LIBRARY AND COMPUTER FEES:"<<setw(15);
    cin>>library_computer_fees;
    cout<<"\nENTER THE ANNA UNIVERSITY FEES:"<<setw(15);
    cin>>anna_university_fees;
    cout<<"\nENTER THE MARK COST FEES:"<<setw(15);
    cin>>mark_sheet_cost_fees;

    total_semester_fees = tution_fees + examination_fees + library_computer_fees + anna_university_fees + mark_sheet_cost_fees;

    semester_fee<<"\n\n"<<tution_fees<<"\t"<<examination_fees<<"\t"<<library_computer_fees<<"\t"<<anna_university_fees<<"\t"<<mark_sheet_cost_fees<<"\t"<<total_semester_fees<<"\n\n";

    semester_fee.close();
}

void semester_fee::print_semester_fees_details()
{
    cout<<"\n\n####################################################################################################################################\n\n";
    cout<<"\nTUTION FEES:"<<setw(20)<<"EXAMINATION FEES:"<<setw(30)<<"LIBRARY AND COMPUTER FEES:"<<setw(25)<<"ANNA UNIVERSITY FEES:"<<setw(30)<<"MARK SHEET COST FEES:"<<setw(25)<<"TOTAL SEMESTER FEES:"<<"\n\n";
    cout<<tution_fees<<setw(20)<<examination_fees<<setw(25)<<library_computer_fees<<setw(25)<<anna_university_fees<<setw(25)<<mark_sheet_cost_fees<<setw(25)<<total_semester_fees<<"\n\n";
    cout<<"\n######################################################################################################################################\n\n";
}


