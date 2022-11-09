#include <iostream>
using namespace std;

class customer
{
	private:
		int id;
		char  name[50];
		char   room_quantity;
		char type;
		char rating;
		int   location;
		char establish_year;
		char staff_quantity;
	public:
	
		void getDetails(void);
		
		void putDetails(void);
};

void customer::getDetails(void){
	
	for(int i = 0; i <=4 ; ++i){
	
	cout<<"Enter Id : ";
	cin >> id ;
	cout << "Enter name: " ;
	cin >> name;
	cout << "Enter type: ";
	cin >> type;
	cout<<"Enter rating : ";
	cin>>rating;
	cout<<"Enter location : ";
	cin>>location;
	cout<<"Enter establish_year: ";
	cin>>establish_year;
    cout<<"Enter staff_quantity : ";
	cin>>staff_quantity;
	cout<<"Enter room_quantity : ";
	cin>>room_quantity;
	cout<<endl;
}   
}
void hotels::getDetails(void){
	
	for(int i = 0; i <=4 ; ++i){
	cout<<endl<<endl << "hotels Details:\n";
	cout<<"Id : "<<id<<endl;
	cout << "Name:"<< name <<endl;
	cout<< "type :"<<type<<endl;
	cout<<"rating: "<<rating<<endl;
	cout<<"location : "<<location<<endl;
	cout<<"establish_year: "<<establish_year<<endl;
	cout<<"staff_quantity: "<<staff_quantity<<endl;
	cout<<"room_quantity: "<<room_quantity<<endl;
}
}

int main()
{
	hotels obj;	
	obj.getDetails();
	obj.putDetails();
	
	return 0;
}
