#include<iostream>

#include<fstream>

#include <iomanip>

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

void semester_fee::print_semester_fees_details() const
{ 
    cout << std::format("\n\n{:<100}\n\n", "####################################################################################################################################");
    cout << std::format("\n{:<20}{:<20}{:<30}{:<25}{:<30}{:<25}{:<25}\n\n",
                        "TUTION FEES:", "EXAMINATION FEES:", "LIBRARY AND COMPUTER FEES:",
                        "ANNA UNIVERSITY FEES:", "MARK SHEET COST FEES:", "TOTAL SEMESTER FEES:");
    cout << std::format("\n{:<20}{:<20}{:<30}{:<25}{:<30}{:<25}{:<25}\n\n",
                        tution_fees, examination_fees, library_computer_fees,
                        anna_university_fees, mark_sheet_cost_fees, total_semester_fees);
    cout << std::format("\n{:<100}\n\n", "######################################################################################################################################");
}


