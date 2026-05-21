#include<iostream>
using namespace std;

int main(){
	int bookID,dueDate,returnDate;
	int daysOverdue;
	int finerate;
	int fineAmount;
	
	cout<<"Ënter Book ID";
	cin>>bookID;
	
	cout<<"Enter Due Date";
	cin>>dueDate;
	
	cout<<"Enter Return Date";
	cin>>returnDate;
	
	daysOverdue=returnDate-dueDate;
	
	if(daysOverdue<=7){
		finerate=20;
	}
	else if(daysOverdue>=8 && daysOverdue<= 14){
		finerate=50;
	}
	else{
	finerate=100;	
	}
	fineAmount=daysOverdue*finerate;
	
	cout<<"\n---Library Fine Details---"<<endl;
	cout<<"Book ID:"<<bookID<<endl;
	cout<<"Due Date"<<dueDate<<endl;
	cout<<"Return Date"<<returnDate<<endl;
	cout<<"Days Overdue"<<daysOverdue<<endl;
	cout<<"Fine Rate:Ksh"<<finerate<<"per day"<<endl;
	cout<<"Fine Amount:Ksh."<<fineAmount<<endl;
	
	return 0;
	
}