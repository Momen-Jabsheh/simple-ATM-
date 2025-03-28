#include<iostream>
#include<string>
#include<cstdlib>
using namespace std ;
class ATM_acount{
     string visa_number;
     int pass_numer ;
     float balance = 1000 ;
     float temp ;
    public:
    ATM_acount(){
        cout<< "enter your visa number " ;
        cin >> visa_number;
        int x = 0 ;
        int y = 3 ;
        for(char ch : visa_number ) 
        {
          x += ch - '0' ;
        }
        if (x %2 != 0) 
        {
            cout<< " \n visa number is incorrect \n " ;
           if (y > 0)
           {
            y-- ;
            ATM_acount() ;
           }
           else {
            exit(0) ;
           }
        }
        cout << "enter your password " ;
        cin >> pass_numer ;
        if (pass_numer >= 10000)
           exit(0);
    }
    void get_balance(){
        cout << " \n your balance is " << balance << endl ;}
    void add_money (){
        cout <<" \n how much do you want to add to your account ";
        cin >> temp ;
        balance += temp ;
        cout << "\n your balance now is " << balance ;
    }
    void get_money(){
        cout << "\n how  much do you want to take from your account ? ";
        cin >> temp ;
        if (temp <= balance){
            cout <<" \n take your money \n " ;
            balance -= temp ;
            cout << "\n your balance now is " << balance ;
        } 
        else cout << " \n you have no enough money \n" ;
    }
    void leaving (){
        exit(0) ;
    }
    ~ATM_acount(){}
};
int main(){
    bool momen ;
    ATM_acount p1;
    cout <<"\ndo you want to know your balance " ;
    cin >> momen ;
    if (momen)p1.get_balance() ;
    cout <<"\ndo you want to add money " ;
    cin >> momen ;
    if (momen)  p1.add_money() ;
   cout <<"\ndo you want to get money " ;
    cin >> momen ;
    if (momen) p1.get_money() ;
    cout <<"\ndo you want to exit " ;
    cin >> momen ;
    if (momen) p1.leaving() ;
    
    return 0 ;
}