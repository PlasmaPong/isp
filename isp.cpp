#include <iostream>

using namespace std;

int main(){
	int baseHours, package;
	double basePrice, total, extraHours, hours;
	
	cout << "Select a subscription package:" << endl;
	cout << "1. Package A" << endl;
	cout << "2. Package B" << endl;
	cout << "3. Package C" << endl;
	cout << "4. Quit" << endl;
	cin >> package;
	//I used a switch case to change things up, no particular reason.
	switch(package){
		case(1){
			cout << "How many hours were used?" << endl;
			cin >> hours;
			basePrice = 9.95;
			baseHours = 10;
			extraHours = 2.00;
			if(hours>baseHours){
				total = (basePrice + (extraHours(hours-baseHours)));
			}
			else{
				total = 9.95;
			}
			cout << "the total amount due was " + total << endl;
			break;
		}	
		case(2){
			cout << "How many hours were used?" << endl;
			cin >> hours;
			basePrice = 14.95;
			baseHours = 20;
			extraHours = 1.00;
			if(hours>baseHours){
				total = (basePrice + (extraHours(hours-baseHours)));
			}
			else{
				total = 14.95;
			}
			cout << "The total amount due is " + total << endl;
			break;
		}	
		case(3){
			basePrice = 19.95;
			cout << "the total amount due is " + basePrice << endl;
			break;
		}	
		case(4){
			cout << "Program ending";
			return(0);
		}
		default{
			cout << "The valid choices are 1 through 4. Run the" << endl;
			cout << "program again and select one of those." << endl;
			return(0);
		}
	}
}