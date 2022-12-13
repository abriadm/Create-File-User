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

	return 0;
}