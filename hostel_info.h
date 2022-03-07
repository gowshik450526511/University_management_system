#include<iostream>

#include<iomanip>

using namespace std;

class hostel
{
    private:

        char room_no[10];
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

void hostel::print_hostel_details()
{
    cout<<"\n\n\n\n######################"<<setw(15)<<"HOSTEL DETAILS"<<setw(15)<<"##################################\n\n";
    cout<<"\n\nROOM NO:"<<setw(20)<<"ROOM FEE:"<<setw(20)<<"MESS FEE:"<<"\n\n";
    cout<<room_no<<setw(20)<<room_fee<<setw(20)<<mess_fee<<"\n\n";
    cout<<"\n\n\n";
    cout<<"TOTAL FEES"<<setw(20)<<total_fees<<"\n\n";
    cout<<"\n########################################################\n\n";
}






