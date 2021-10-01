//*************************************************** 
//* Damian Hernandez                                *
//* CS231 Lab 1A - Coin Calculator                  *
//* Due by August 31, 2021 on Tuesday by 11:59pm    *
//***************************************************

#include <iostream>
#include <cmath>
using namespace std;

int main(){
	
	//Introduction Output
	cout << "Welcome to the Coin Calculator!" << endl;
	cout << endl;
	cout << "The Coin Calculator will record and calculate the number of coins you wish to punch in." << endl;
	cout << endl;
	
	//Assigning our variable names
	int penny_input, nickel_input, dime_input, quarter_input, half_dollar_input;
	float total_amount, final_amount;
	
	//Assigning variables their values based on user input
	//Prompting user for input
	cout << "How many pennies do you have? ";
	cin >> penny_input;
	cout << endl;
	cout << "How many nickels do you have? ";
	cin >> nickel_input;
	cout << endl;
	cout << "How many dimes do you have? ";
	cin >> dime_input;
	cout << endl;
	cout << "How many quarters do you have? ";
	cin >> quarter_input;
	cout << endl;
	cout << "How many half dollars do you have? ";
	cin >> half_dollar_input;
	cout << endl;
	cout << endl; //Creates extra spacing between outputs for better reading
	
	
	//Confirming the user's input by ouputting what they entered
	cout << "You have " << penny_input << " pennies." << endl;
	cout << endl;
	cout << "You have " << nickel_input << " nickels." << endl;
	cout << endl;
	cout << "You have " << dime_input << " dimes." << endl;
	cout << endl;
	cout << "You have " << quarter_input << " quarters." << endl;
	cout << endl;
	cout << "You have " << half_dollar_input << " half dollars." << endl;
	cout << endl;
	
	//Calculating the total amount
	total_amount = penny_input * .01 + nickel_input * .05 + dime_input * .10 + quarter_input * .25 + half_dollar_input * .50;
	final_amount = roundf(total_amount * 100)/100;  //Rounding to the nearest hundreth (2 decimal places)
	cout << "The value of all of your coins is: $" << final_amount << ".";
}
