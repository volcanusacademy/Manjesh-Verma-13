#include<iostream>
#include<fstream>
using namespace std;

int main()
{
    string Temp;


    ifstream obj("file.txt");
    if(obj.is_open())
    {
        while(getline(obj,Temp))
        {
            cout<<Temp;
        }
        obj.close();
    }
    else
    {
        cout<<"\n \n Unable to open";
    }

    return 0; 

}    