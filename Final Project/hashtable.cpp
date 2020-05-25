#include <iostream>
#include <conio.h>
#include "hashtableheader.h"

using namespace std;

// Make a user interface to ask user what to do with the hashtable.
int main() {
	// Declare a new hashtable for the user to work on.
	HashTable hashtable;
	
	// Declare an integer which gets the user's choice.
	int choice;
	
	// Declare a bool which checks if the user's input is valid.
	bool valid;
	
	// Display the interface as long as the user is still using the program.
	while(true) {	
		// Display the interface as long as the user inputs choice out of menu, alphabets or nothing.
		do {
			system("cls");
			
			cout << "1. Add Employee" << endl;
			cout << "2. Get Employee Name" << endl;
			cout << "3. Get Employee Date of birth" << endl;
			cout << "4. Get Employee Mobile Number" << endl;
			cout << "5. Get Employee Employee" << endl;
			cout << "6. Update Employee Mobile Number" << endl;
			cout << "7. Update Employee Email" << endl;
			cout << "8. Remove Employee" << endl;
			cout << "9. Exit" << endl;
			
			cout << "Input choice: ";
			cin >> choice;
			
			if (choice < 1 || choice > 9 || cin.fail()) {
		        cout << "Please pick one of the choices above." << endl;
				
				getch();
		        
				cin.clear();
				cin.ignore();
		        
				valid = false;
		    } else {
		        valid = true;
		    }
		} while(!valid);
		
		// If the user wants to add a new employee, 
		if(choice == 1) {
			// Declare an integer which gets the user's inputted id.
			int id;
			// Declare a string which gets the user's inputted name.
			string name;
			// Declare a string which gets the user's inputted date of birth.
			string dateOfBirth;
			// Declare an integer which gets the user's inputted mobile number.
			int mobileNumber;
			// Declare a string which gets the user's inputted email.
			string email;
			
			// Check if the hashtable is full.
			// If it is not full, ask the user to input the id.
			// Otherwise, print an error message.
			if(!hashtable.full()) {
				// Ask the user to input the employee's id.
				cout << "Input employee's ID to add: ";
				cin >> id;
				
				// Check if user enters an invalid input for the employee's id.
				// If user enters a non-numeric input for the employee's id, print an error message and clear the input state.
				// Otherwise, check if the user's inputted id exists in the hashtable.
				if(cin.fail()) {
					// Print an error message.
					cout << "Employee's ID must be numeric!" << endl;
					
					// Clear the input state.
					cin.clear();
		        	cin.ignore();
				} else {
					// Check if the user's inputted id exists in the hashtable.
					// If it does not exist, ask the user to input the employee's name, date of birth, and mobile number.
					// Otherwise, print an error message.
					if(hashtable.unique(id)) {
						// Ask the user to input the employee's name.
						cout << "Input employee's name to add: ";
						cin >> name;
						
						// Ask the user to input the employee's date of birth.
						cout << "Input employee's date of birth to add: ";
						cin >> dateOfBirth;
						
						// Ask the user to input the employee's mobile number.
						cout << "Input employee's mobile number to add: ";
						cin >> mobileNumber;
						
						// Check if user enters an invalid input for the employee's mobile number.
						// If user enters a non-numeric input for the employee's mobile number, print an error message and clear the input state.
						// Otherwise, ask the user to input the employee's email, add the data depending on the hash into the hashtable, then print a success message.
						if(cin.fail()) {
							// Print an error message.
							cout << "Employee's mobile number must be numeric!" << endl;
							
							// Clear the input state.
							cin.clear();
				        	cin.ignore();
						} else {
							// Ask the user to input the employee's email.
							cout << "Input employee's email to add: ";
							cin >> email;
							
							// Add the employee's data depending on the hash into the hashtable.
							hashtable.addEmployee(id, name, dateOfBirth, mobileNumber, email);
							
							// Print a success message.
							cout << "Employee's data has been added." << endl;
						}
					} else {
						// Print an error message if the user's inputted id exists in the hashtable.
						cout << "Employee's ID must be unique!" << endl;
					}
				}
			} else {
				// Print an error message if the hashtable is full.
				cout << "Hash table is full!" << endl;
			}
			
			getch();
		}
		// If the user wants to get an employee's name,
		else if(choice == 2) {
			// Declare an integer which gets the user's inputted id.
			int id;
			
			// Ask the user to input the employee's id.
			cout << "Input employee's ID to get employee's name: ";
			cin >> id;
			
			// Check if user enters an invalid input for the employee's id.
			// If user enters a non-numeric input for the employee's id, print an error message and clear the input state.
			// Otherwise, print the employee's name.
			if(cin.fail()) {
				// Print an error message.
				cout << "Employee's ID must be numeric!" << endl;
				
				// Clear the input state.
				cin.clear();
				cin.ignore();
			} else {
				// If the employee's id exists, the program will print the employee's name.
				// Otherwise, the program will print an empty string for the employee's name.
				cout << "Name of employee ID " << id << ": " << hashtable.getEmployeeName(id) << endl;
			}
			
			getch();
		}
		// If the user wants to get an employee's date of birth,
		else if(choice == 3) {
			// Declare an integer which gets the user's inputted id.
			int id;
			
			// Ask the user to input the employee's id.
			cout << "Input employee's ID to get employee's date of birth: ";
			cin >> id;
			
			// Check if user enters an invalid input for the employee's id.
			// If user enters a non-numeric input for the employee's id, print an error message and clear the input state.
			// Otherwise, print the employee's date of birth.
			if(cin.fail()) {
				// Print an error message.
				cout << "Employee's ID must be numeric!" << endl;
				
				// Clear the input state.
				cin.clear();
				cin.ignore();
			} else {
				// If the employee's id exists, the program will print the employee's date of birth.
				// Otherwise, the program will print an empty string for the employee's date of birth.
				cout << "Date of birth of employee ID " << id << ": " << hashtable.getEmployeeDateOfBirth(id) << endl;
			}
			
			getch();
		}
		// If the user wants to get an employee's mobile number,
		else if(choice == 4) {
			// Declare an integer which gets the user's inputted id.
			int id;
			
			// Ask the user to input the employee's id.
			cout << "Input employee's ID to get employee's mobile number: ";
			cin >> id;
			
			// Check if user enters an invalid input for the employee's id.
			// If user enters a non-numeric input for the employee's id, print an error message and clear the input state.
			// Otherwise, print the employee's mobile number.
			if(cin.fail()) {
				// Print an error message.
				cout << "Employee's ID must be numeric!" << endl;
				
				// Clear the input state.
				cin.clear();
				cin.ignore();
			} else {
				// If the employee's id exists, the program will print the employee's mobile number.
				// Otherwise, the program will print 0 for the employee's mobile number.
				cout << "Mobile number of employee ID " << id << ": " << hashtable.getEmployeeMobileNumber(id) << endl;
			}
			
			getch();
		}
		// If the user wants to get an employee's email,
		else if(choice == 5) {
			// Declare an integer which gets the user's inputted id.
			int id;
			
			// Ask the user to input the employee's id.
			cout << "Input employee's ID to get employee's email: ";
			cin >> id;
			
			// Check if user enters an invalid input for the employee's id.
			// If user enters a non-numeric input for the employee's id, print an error message and clear the input state.
			// Otherwise, print the employee's email.
			if(cin.fail()) {
				// Print an error message.
				cout << "Employee's ID must be numeric!" << endl;
				
				// Clear the input state.
				cin.clear();
				cin.ignore();
			} else {
				// If the employee's id exists, the program will print the employee's email.
				// Otherwise, the program will print an empty string for the employee's email.
				cout << "Email of employee ID " << id << ": " << hashtable.getEmployeeEmail(id) << endl;
			}
			
			getch();
		}
		// If the user wants to update an employee's mobile number,
		else if(choice == 6) {
			// Declare an integer which gets the user's inputted id.
			int id;
			// Declare an integer which gets the user's inputted mobile number.
			int mobileNumber;
			
			// Ask the user to input the employee's id.
			cout << "Input employee's ID to update employee's mobile number: ";
			cin >> id;
			
			// Check if user enters an invalid input for the employee's id.
			// If user enters a non-numeric input for the employee's id, print an error message and clear the input state.
			// Otherwise, ask the user to input the employee's new phone number.
			if(cin.fail()) {
				// Print an error message.
				cout << "Employee's ID must be numeric!" << endl;
				
				// Clear the input state.
				cin.clear();
				cin.ignore();
			} else {
				// Ask the user to input the new value.
				cout << "Input employee's new mobile number to update employee's mobile number: ";
				cin >> mobileNumber;
				
				// Check if user enters an invalid input for the employee's mobile number.
				// If user enters a non-numeric input for the employee's mobile number, print an error message and clear the input state.
				// Otherwise, print the employee's mobile number update status.
				if(cin.fail()) {
					// Print an error message.
					cout << "Employee's mobile number must be numeric!" << endl;
					
					// Clear the input state.
					cin.clear();
		        	cin.ignore();
				} else {
					// Print the employee's mobile number update status.
					// If the employee's mobile number update succeeds, the program will print 1.
					// Otherwise, the program will print 0.
					cout << "Employee's mobile number update status: " << hashtable.updateEmployeeMobileNumber(id, mobileNumber) << endl;
				}
			}
			
			getch();
		}
		// If the user wants to update an employee's email,
		else if(choice == 7) {
			// Declare an integer which gets the user's inputted id.
			int id;
			// Declare an integer which gets the user's inputted email.
			string email;
			
			// Ask the user to input the employee's id.
			cout << "Input employee's ID to update employee's email: ";
			cin >> id;
			
			// Check if user enters an invalid input for the employee's id.
			// If user enters a non-numeric input for the employee's id, print an error message and clear the input state.
			// Otherwise, ask the user to input the employee's new email, then print the employee's email update status.
			if(cin.fail()) {
				// Print an error message.
				cout << "Employee's ID must be numeric!" << endl;
				
				// Clear the input state.
				cin.clear();
				cin.ignore();
			} else {
				// Ask the user to input the new value.
				cout << "Input employee's new email to update employee's email: ";
				cin >> email;
				
				// Print the employee's email update status.
				// If the employee's email update succeeds, the program will print 1.
				// Otherwise, the program will print 0.
				cout << "Employee's email update status: " << hashtable.updateEmployeeEmail(id, email) << endl;
			}
			
			getch();
		}
		// If the user wants to remove an employee,
		else if(choice == 8) {
			// Declare an integer which gets the user's inputted id.
			int id;
			
			// Ask the user to input the employee's id.
			cout << "Input employee's ID to remove employee: ";
			cin >> id;
			
			// Check if user enters an invalid input for the employee's id.
			// If user enters a non-numeric input for the employee's id, print an error message and clear the input state.
			// Otherwise, print the employee removal status.
			if(cin.fail()) {
				// Print an error message.
				cout << "Employee's ID must be numeric!" << endl;
				
				// Clear the input state.
				cin.clear();
				cin.ignore();
			} else {
				// Print the employee removal status.
				// If the employee removal succeeds, the program will print 1.
				// Otherwise, the program will print 0.
				cout << "Employee removal status: " << hashtable.removeEmployee(id) << endl;
			}
			
			getch();
		}
		// If the user wants to exit from the program,
		else if(choice == 9) {
			// Break from the infinite loop which then terminates the program.
			break;
		}
	}
	
	return 0;
}
