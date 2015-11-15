#include <iostream>
#include <fstream>
#include <iomanip>
#include <iostream>
#include <string>
#include "CRC.hpp"
using namespace std;
int main()
{
std::string t;

cout << "I am a crispy program\n";
cout << "Please enter a command\n";
cin >> t;
if (t == "crap")
{
cout << "You entered a crispy command... Please try again... \n";
}
else if (t == "shit")
{
cout << "You entered a shitty command... Please try again... \n";
}
else if (t == "sh!t")
{
cout << "You entered a shitty command... Please try again... \n";
}
else
{
cout << "You entered a MISLy command... Please try again...  \n";
}
std::string name;
std::string surname;
std::string age;
cout << "As a next step, you need to fill in your name, surname and age\n";

cout << "Please fill in your name\n";
cin >> name;

cout << "Please fill in your surname\n";
cin >> surname;

cout << "Please fill in your age\n";
cin >> age;
auto const s = std::string{name + " " + surname + " " + age};
std:cout << "Your magical string is: \n";
std::cout << std::hex << std::setw(8) << std::setfill('0') << crc(s.begin(), s.end()) << '\n';
}
