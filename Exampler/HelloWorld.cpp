#include <iostream>
 
using namespace std;
 
int main( )
{
	// standard output stream
   char str[] = "Hello C++"; 
   cout << "Value of str is : " << str << endl;
   
   // standard input stream
   char name[50];
 
   cout << "input your name: ";
   cin >> name;
   cout << "your name:"<< name << endl;
   
}