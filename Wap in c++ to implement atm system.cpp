#include<iostream>
#include<string>
using namespace std;
class Account{
	private:
		double ownerPin=1234;
		string ac_no = "1234567";
		string name="SHUBHABRATA";
		double balance=1000.00;
	void withdraw(double wd_amount){
		balance -=wd_amount;
	}
	void viewBalance(){
		cout << "Account Name: " << name << endl;
		cout << "Account No: " << ac_no << endl;
		cout << "your balance is : " << balance << endl;
	}
	void tranfers(){
		
	}
	public:
		void  pin(){
		double pin;
		cout << "enter your pin: ";
		cin >> pin;
		int ch;
       
		if(pin == ownerPin){
			
                
          while(ch != 4){
          cout << "\nATM Menu:" << endl;
                cout << "1. View Balance" << endl;
                cout << "2. Withdraw" << endl;
                cout << "3. Transfer" << endl;
                cout << "4. Exit" << endl;
                cout << "Enter your choice: ";
                cin >> ch;
          	  switch(ch){
            	case 1: viewBalance();
            			break;
            	case 2: double wd_amount;
						cout << "enter your Withdraw amount: ";
            			cin >> wd_amount;
            			if(wd_amount > balance){
            				cout << "Insufficient funds";
						}else{
							withdraw(wd_amount);
						}
						break;
				case 3: {
					double recptACno=978654;
						double acctotrans;
						cout << "enter the acc no to transfer : ";
						cin >> acctotrans;
						
						if(acctotrans == recptACno){
							double wd_amount;
						cout << "enter your transfer amount: ";
            			cin >> wd_amount;
            			if(wd_amount > balance){
            				cout << "Insufficient funds";
						}if(wd_amount<=balance){
							withdraw(wd_amount);
						}
						}
						else if(acctotrans != recptACno ){
							cout << "invalid Acc";
						}
						break;
				}
				case 4: cout << "Exiting..." << endl;
                        break;
						
				default: cout << "Invalid input";
						 break;
			}
		  }
		}else{
			cout << "invalid pin";
		}
			
	}
};
int main(){
	
	Account obj;
	obj.pin();
}
