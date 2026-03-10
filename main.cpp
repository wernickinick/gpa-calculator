//gpa calculator
//made by Nicholas Wernicki

#include <iostream>
#include <string>
#include <vector>

using namespace std;

int main (){
	int amount;
	vector<int>gpa;


	cout << "  _____________________" << endl;
 	cout << " |  _________________  |" << endl;
	cout << " | | GPA CALCULATOR  | |" << endl;
 	cout << " | |   BY NICHOLAS   | |" << endl;
 	cout << " | |     WERNICKI    | |" << endl;
 	cout << " | |_________________| |" << endl;
 	cout << " |  ___ ___ ___   ___  |" << endl;
 	cout << " | | 7 | 8 | 9 | | + | |" << endl;
 	cout << " | |___|___|___| |___| |" << endl;
 	cout << " | | 4 | 5 | 6 | | - | |" << endl;
 	cout << " | |___|___|___| |___| |" << endl;
 	cout << " | | 1 | 2 | 3 | | x | |" << endl;
 	cout << " | |___|___|___| |___| |" << endl;
 	cout << " | | . | 0 | = | | / | |" << endl;
 	cout << " | |___|___|___| |___| |" << endl;
 	cout << " |_____________________|" << endl;

	cout << "enter how many classes you have: ";
	cin >> amount;
	vector<int>grades(amount);
	vector<string>subject(amount);
	cout << "you have " << amount << " classes" << endl;
	for (int i = 0; i < amount; i++){
		cout << "enter your subject: ";
		cin>> subject[i];
		cout << "enter your grade: ";
		cin >> grades[i];
		
	}
	for (int j = 0; j < amount; j++){	
		if (grades[j] < 60){ 
			gpa.push_back(0);	
		}
		else if (grades[j] >= 60 && grades[j] < 70){
			gpa.push_back(1);
		}
		else if (grades[j] >= 70 && grades[j] < 80){
			gpa.push_back(2);
		}
		else if (grades[j] >= 80 && grades[j] < 90){
			gpa.push_back(3);
		}
		else if (grades[j] >= 90){
			gpa.push_back(4);
		}
	}

	double total;
	double sum;
	for (int value : gpa){
		sum+=value;
	}
	if(amount > 0){
		double average = sum/amount;
		cout << "your gpa is " << average <<endl;
	}


	return 0;
}
