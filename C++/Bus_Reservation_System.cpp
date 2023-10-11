#include <iostream>
#include <string>
#include<fstream>
using namespace std;
 //Bus reservation class
class BUS_Reservation 
{
    string Date, Destination, Source;
        
    public:
        void Display() {}
    
        // Function to initialize
        void Place() 
        {
     
            cout << "\n Enter Your Source: ";
            cin >> Source;
        
            cout << "\n Enter Your Destination: ";
            cin >> Destination;
        
            cout << "\n Enter Date: ";
            cin >> Date;
  
    }
    public:
        void Information() 
        {
            string Name;
            long Number;
            int Age,  Ticket_Number;
        
            cout << "\n Enter Your Name: ";
            cin >> Name;
        
            cout << "\n Enter Your Age: ";
            cin >> Age;
        
            cout << "\n Enter Mobile No.: ";
            cin >> Number;
        
            //cout << "\nEnter ticket number: ";
            //cin >> Ticket_Number;
        
            Display(Name, Age, Number, Ticket_Number);
        }  
        void Price(){}
        
        void Bus_Information()
        {
            string Temp;
            ifstream obj("Bus_information.txt");
    
            if(obj.is_open())
            {
                while(getline(obj,Temp))
                {
                    cout<<Temp;
                };
                obj.close();
            }
            else
            {
                cout<<"Please Fill The Ticeket Details: ";
            }
        }
    
    
        // Function to reserve a seat
        void Price(string sourse , string Destination)
        {
            int Price;
            if((Source =="ujjain"&& Destination=="indore" )||Source =="indore"&& Destination=="ujjian" )
            {
                Price = 100;  
            }
            else if((Source =="ujjain"&& Destination=="bhopal")||(Source =="bhopal"&& Destination=="ujjain") )
            {
                Price = 300;
            }

        }
     
     
        void Display(string Name, int Age, int Number, int Ticket_Number) 
        {
            // cout<<"\n\n";
            // cout<<"Source:- "<<source<<"\tdestination\t"<<destination;
           // cout<<"Your ticket is :- ";
           // cout << "\nName: " << name<<"\tDOJ"<<date ;
           // cout << "\nAge: " << age ;
           // cout << "\nMobile Number: " << number ;
           // cout << "\nTicket Number: " << ticket_number; 
    
    
    
            // Here we write the code of 'File Handling'
        ofstream filestream("Print.txt");
        if(filestream.is_open())
        {
            filestream<<"--------------------------------------------------------------------------------";
            filestream<<"\n\n\n";
            filestream<<"\t\t\t\t\t\t WELCOME To RED BUS  ";
            filestream<<"\n\t\t\t*************************************";
            filestream<<"\n\t\t\tSource:-"<<Source<<"\t\t\tDestination:-"<<Destination;
            filestream<<"\n\t\t\tName:- " << Name<<"\t\t\t\tDOJ:- "<<Date ;
            filestream<<"\n\t\t\tMobile-Number:- "<<Number<<"\t\tAge:- "<<Age;
            filestream<<"\n\t\t\tNo of Seats:- "<<Ticket_Number<<"\t\t\t\t";
            filestream<<"\n\t\t\tRs:- 100"<<"\t\t\tTime 9:45AM";
            filestream<<"\n\n\n";
            filestream<<"--------------------------------------------------------------------------------";
        
            filestream.close();
        }
        else
        {
            cout<<"File is open";
        }
    }
};

int main() 
{
    BUS_Reservation obj; 
    obj.Bus_Information();
    
    cout<<"\n\n";
    obj.Place();
    obj.Information();
    
    return 0;
}
