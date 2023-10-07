#include<iostream>

#include<iomanip>

class hostel
{
    private:

        string room_no;
        int room_fee;
        int mess_fee;
        int total_fees;

    public:

        void get_hostel_details();
        void total_fee();
        void print_hostel_details();

};

void hostel::get_hostel_details()
{
    fstream h;
    h.open("student.txt",ios::out | ios::app);

    cout<<"\nENTER THE ROOM NO:"<<setw(10);
    cin>>room_no;
    cout<<"\nENTER THE ROOM FEE:"<<setw(10);
    cin>>room_fee;
    cout<<"\nENTER THE MESS FEES:"<<setw(10);
    cin>>mess_fee;

    h<<"\n\n"<<room_no<<"\t"<<room_fee<<"\t"<<mess_fee<<"\t"<<room_fee+mess_fee;
    h.close();

    total_fee();
}

void hostel::total_fee()
{
    total_fees=room_fee+mess_fee;
}

void hostel::print_hostel_details() const
{
    // Use std::format for advanced formatting
    string output = std::format("\n\n\n\n######################{:<15}HOSTEL DETAILS{:<15}##################################\n\n", "");

    output += std::format("\n\nROOM NO:{:<20}ROOM FEE:{:<20}MESS FEE:\n\n", room_no, room_fee, mess_fee);

    output += std::format("\n\n\nTOTAL FEES{:<20}\n\n", total_fees);

    output += std::format("\n########################################################\n\n");

    cout << output;
}






