#include <iostream>

using namespace std;
inline void calculateEMI()
{
    double loanAmount,totalAmount,EMIAmount;
    int month;
    double rate=7; 
    cout<<"Enter loan amount"<<endl;
    cin>>loanAmount;
    cout<<"Enter total duration for EMI(Month)"<<endl;
    cin>>month;
    totalAmount=loanAmount+(loanAmount*7/100);
    EMIAmount=totalAmount/month;
    cout<<"EMI amount for "<<month<<" months:"<<EMIAmount<<" Rs."<<endl;
  
}
int main()
{

calculateEMI();
    return 0;
}