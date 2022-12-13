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
void create_file(string username, string password, string file_name)
{
	ofstream file(file_name + ".txt");
	// Checks whether file is open.
	if (file.is_open())
	{
		cout << "\nYes is open!!" << endl;
	}
	// Create vector to strore a string.
	vector<string> names;
	names.push_back(username);
	names.push_back(password);
}

int main()
{
	string username, password, file_name;
	cout << "<-----Create a User File----->" << endl;
	cout << "Enter file name: ";
	cin >> file_name;
	cout << "Enter username: ";
	cin >> username;
	cout << "Enter password: ";
	cin >> password;
	// Function call {create_file} with three parameter (username, password, file_name)
	create_file(username, password, file_name);

	system("pause 0");
	return 0;
}