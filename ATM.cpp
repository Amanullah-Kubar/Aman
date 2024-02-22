#include <iostream>
#include <unistd.h> //libray for sleep of time 
#include <windows.h>//both include at a time
#include <iomanip>
using namespace std;
int main(){
	const int PIN=9667;
	int answer,ans,a,bill,choice,pin,acc_type,acc_number,bill_id,amount,balance=150000;
	while (true){
	
	cout<<"Proceesing your transection\n";
	sleep(3);
	cout<<"Enter your PIN ";
	cin>>setw(14)>>pin;
	if (pin==PIN)
	{cout<<setw(30)<<left<<"1.  Check Balance"<<"2.  Send Money\n ";
	cout<<setw(30)<<left<<"3.  Pay Bills"<<"4.  Cash Withdrawl\n ";
	cin>>a;
	switch(a){
		case 1:
			cout<<"Enter your PIN\n";
			cin>>pin;
			if (pin==PIN){
				cout<<"Your Balance is "<<balance<<" PKR\n";
				balance=balance-10;
				cout<<"Try another transection\n"<<setw(30)<<"1.  Yes "<<"2.  No\n"; 
				cin>>ans;
				if (ans==1)
				{break;}
			}
			else{
				cout<<"Sorry your PIN is Wrong\n";
				cout<<setw(19)<<left<<"1.  Yes"<<"2.  No\n";
				cin>>ans;
			if (ans==2){
			return 0;}
		}
		break;
		case 2:
			cout<<"Enter your PIN\n";
			cin>>pin;
			if (pin==PIN){
			cout<<"Your acount type\n";
			cout<<"1.  Savings\n"<<"2.  Current\n"<<"3.  Default\n";
			cin>>acc_type;
			cout<<"Enter Acount Number => ";
			cin>>acc_number;
			cout<<"Enter The Amount => ";
			cin>>amount;
		
			if(amount<balance){
				cout<<"Transedction Processed Successfully\n";
				balance=balance-amount;
				cout<<"Try another transection\n"<<setw(30)<<"1.  Yes "<<"2.  No\n";
				cin>>ans; 
				if (ans==1)
				{break;}
				
			}
		
			else{
				cout<<"Transection can not be performed due to lack of funds\n";
					cout<<"Try another transection\n"<<setw(30)<<"1.  Yes "<<"2.  No\n"; 
					cin>>ans;
				if (ans==1)
				{break;}
				}
			}
			else{
				cout<<"Sorry your PIN is Wrong\n";
				cout<<setw(19)<<left<<"1.  Yes"<<"2.  No\n";
				cin>>ans;
			if (ans==2){
			return 0;}
				else
			break;
	}
		case 4:
			cout<<"Your acount type\n";
			cout<<"1.  Savings\n"<<"2.  Current\n"<<"3.  Default\n";
			
			cin>>acc_type;
			cout<<"Enter amount => ";
			cin>>amount;
			sleep(5);
			if(amount<balance){
				balance=balance-amount;
				cout<<"Transdection successful\n"<<endl<<"Your Balance is "<<balance<<"PKR";
			}
			else{
			cout<<"Transection can not be performed due to lack of funds"<<endl;
			cout<<"Try another transection\n"<<endl;
			cout<<setw(30)<<"1.  Yes "<<"2.  No\n";
			if (ans==1)
				{break;}
		}
		break;
		case 3:
			cout<<"Which type of bill you have to pay "<<endl<<setw(30)<<"1. Sui gas"<<"2.  ptcl"<<endl <<setw(30)<<"3.  Electricity"<<"4.  Utility"<<endl;
			cin>>ans;
			switch (ans){
				case 1:
					bill=700;
					cout<<"Enter Sui gas bil ID";
					cin>>bill_id;
					cout<<"You want to pay bills with credit card"<<endl<<setw(30)<<"1.  Yes"<<"2.  No";
					cin>>ans;
					if(ans==1){
						balance=balance-amount;
					cout<<"The Bill PKR "<<bill<<" Pay with Credit card"<<endl;
					cout<<"Your balance is "<<balance ;
					break;
					}
					else
					return 0;
				case 2:
					bill=5000;
					cout<<"Enter ptct bill ID";
					cin>>bill_id;
							cout<<"You want to pay bills with credit card"<<endl<<setw(30)<<"1.  Yes"<<"2.  No";
					cin>>ans;
					if(ans==1){
						balance=balance-amount;
					cout<<"The Bill PKR  "<<bill<<" Pay with Credit card"<<endl;
					cout<<"Your balance is "<<balance ;}
					break;
				case 3:
					bill=7000;
					cout<<"Enter Electricity Bill ID";
					cin>>bill_id;
							cout<<"You want to pay bills with credit card"<<endl<<setw(30)<<"1.  Yes"<<"2.  No";
					cin>>ans;
					if(ans==1){
						balance=balance-amount;
					cout<<"The Bill PKR "<<bill<<" Paid with Credit card"<<endl;
					cout<<"Your balance is  "<<balance ;}
					break;
				case 4:
					bill=25000;
					cout<<"Enter utility bill ID";
					cin>>bill_id;
							cout<<"You want to pay bills with credit card"<<endl<<setw(30)<<"1.  Yes"<<"2.  No";
					cin>>ans;
					if(ans==1){
						balance=balance-amount;
					cout<<"The Bill PKR "<<bill<<" Pay with Credit card"<<endl;
					cout<<"Your balance is "<<balance ;}
					break;
				default:
					cout<<"Invalid Selection";
			    	}
			    break;
			case 5:
				cout<<"Terminating Program:";
	}
		}	
	else {
		cout<<"Sorry your PIN is Wrong\n"<<"Try another transection\n"<<"1.  Yes "<<"2.  No\n"; 
			cin>>ans;
				if (ans==2)
				{return 0;}
	}
}
return 0;
}