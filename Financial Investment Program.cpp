#include<iostream>
#include<string>
#include<cstdlib>
using namespace std;

// Prototypes
double futureValue(double pv, double r, double n);
double returnonInvestment(double np, double coi, double rev, double exp);
double acidTest(double ca, double inventory, double liabilities);

int main(){

	int choice; //choice variable
	double d, e, f; //variables for functions
	
	double l = 0; 
	
	do{
		cout << "What are you trying to check?" << endl;
		cout << "1.Future Value on account \n2.Return of Investment \n3.Acid Test Ratio" << endl;
		cin >> choice;

		switch (choice){  // switch statements
		case 1:

			cout << "What is the present value?" << endl;
			cin >> d;

			cout << "What is the interest rate? (In decimal form)" << endl;
			cin >> e;

			cout << "How many months?" << endl;
			cin >> f;

			cout << "The future value on the account is: $" << futureValue(d, e, f) << endl;
break;
		case 2: 

			cout << "How much is your revenue? " << endl;
			cin >> d;

			cout << "How much are your expenses?" << endl;
			cin >> e;

			cout << "What is your cost of investment?" << endl;
			cin >> f;	

			cout << returnonInvestment(d, e, f, l) << endl;
break;
		case 3:

			cout << "What are your current assets?" << endl;
			cin >> d;

			cout << "How much is your inventory?" << endl;
			cin >> e;

			cout << "Any liabilities?" << endl;
			cin >> f;

			cout<< "Your acid test ratio is: " << acidTest(d, e, f) << "%" <<endl;;
		};

		cout << endl;

	} while (choice != 0);

	system("pause");
};

// Functions
double futureValue(double pv, double r, double n){
	double fv;

	fv = pv * pow(1 + r, n);  //pv = present value
	return fv;
};

double returnonInvestment(double rev, double exp, double coi, double p){
	double roi;
	double np;


	roi = ((rev - exp) - coi) / coi; // coi = cost of investment
	return roi;
}

double acidTest(double ca, double inventory, double liabilities){
	double atr;

	atr = (ca - inventory) / liabilities; // ca = current assets, 
	return atr;
};