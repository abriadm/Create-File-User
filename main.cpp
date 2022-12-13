#include <iostream>
#include <string>
#include <vector>
#include <fstream>

using std::cout;
using std::cin;
using std::endl;
using std::vector;
using std::string;
using std::ofstream;

// With Object Oriented Programming
void create_file(string username,int password, string file_name)
{
	ofstream file(file_name + ".txt");
	// Checks whether file is open.
	if (file.is_open())
	{
		cout << "\nYes is open!!" << endl;
	}
	// For username.
	file << "Username: ";
	file << username << endl;
	// For password.
	file << "Your Code: ";
	file << password << endl;
	file.close();
}

int main()
{
	int password;
	string username, file_name;
	cout << "<-----Create a User File----->" << endl;
	cout << "Enter file name: ";
	getline(cin, file_name);
	cout << "Enter username: ";
	getline(cin, username);
	cout << "Enter password: ";
	cin >> password;
	// Function call {create_file} with three parameter (username, password, file_name)
	create_file(username, password, file_name);

	system("pause 0");
	return 0;
}