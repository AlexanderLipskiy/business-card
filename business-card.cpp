#include <iostream>
#include <iomanip>

void print_line()
{
	std::cout << std::setfill('*') << std::setw(39) << "*" << '\n';
	std::cout << std::setfill(' ');
}

int main()
{
	print_line();
	std::cout << std::left  << std::setw(6) << "*"  << std:: setw(28) << "Developer\'s Business Card" << std::right << std::setw(6) << "*\n";
	std::cout << std::left << std::setw(6) << "*" << std::setw(28) << "Name: Alexander Lipskiy" << std::right << std::setw(6) << "*\n";
	std::cout << std::left << std::setw(6) << "*" << std::setw(28) << "Specialty: C++ developer" << std::right << std::setw(6) << "*\n";
	std::cout << std::left << std::setw(6) << "*" << std::setw(28) << "Skills: PowerShell, Git," << std::right << std::setw(6) << "*\n";
	std::cout << std::left << std::setw(6) << "*" << std::setw(28) << "C++ basics..." << std::right << std::setw(6) << "*\n";
	print_line();
	
	return 0;
}