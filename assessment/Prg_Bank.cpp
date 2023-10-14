#include<iostream>
using namespace std;

class Account {
    
    
    private: int balance =1000;
    
    public:
    void cradit(int val){
        
        balance += val;
        cout<<"\nnew balance"<<balance;
        
    }
      void debit(int val){
        
        balance -= val;
        cout<<"\nnew balance"<<balance;
      }
};

int main(){
    Account a;
    a.cradit(50000);
    a.debit(20000);
    
}