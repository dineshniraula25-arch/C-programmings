#include<iostream>
using namespace std;
class ATM{
private:
	int balance;
	public :
		ATM(int bal)
		{
			balance = bal;
			}
		int getbalance()
		{
			return balance;
		}
		int withdraw(int amount)
		{
			if(amount>balance)
			{
				return false;
			}
			balance=balance-amount;
			return true;
			}
		void depost(int amount)
		{
			balance=balance+amount ;
			}	
};
main()
{
	ATM amt(1000);
	int choice,amount,success ;
	char op;
	do{
		system("cls");
		cout<<"1.view Balance"<<endl;
	    cout<<"2.cash Withdraw"<<endl;
	    cout<<"3.Cash Deposit"<<endl;
    	cout<<"4.Exit"<<endl;
	    cout<<"Enter Your Choice:";
	    cin>>choice;
	    switch(choice)
	{
		case 1:
	    	cout<<"Your Balance is :"<<atm.getBalance();
	    	break;
	    	case 2:
	    		cout<<"Enter the amount to withdraw :";
	    		cin>>amount;
	    		success=atm.withdraw(amount);
	    		if(success)
	    		{
	    			cout<<"Withdraw successfull...."<<endl;
				}
				else
				{
					cout<<"Insufficient Balance..."<<endl;
				}
				break;
				case 3:
				cout<<"Enter the amount to Deposit :";
	    		cin>>amount;
				atm.deposit(amount);
				cout<<"Deposit successfull..."<<endl;
				break ;
				case 4:
					cout<<"Thanks for using ATM"<<endl;
					break;
					default:
						cout<<"Invalid choice"<<endl;
	}
	
	
       cout<< "\nDo you want to Try Another Trasaction[Yes/No]:";
      cin>>op;

	}while(op=='y'||op=='y');
	
}








