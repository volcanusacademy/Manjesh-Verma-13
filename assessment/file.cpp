
// file writing code

#include<iostream>

#include<fstream> //This Predefined library   is used for file handling
using namespace std;

int main()
{

    ofstream ofs("file.txt");
    if(ofs.is_open())
    {
        ofs<<"\n Manjesh Verma \n First Aessessment";
        ofs.close();
    }
    else
    {
        cout<<"\n File opening is fail";
    }

    return 0; 

}    
