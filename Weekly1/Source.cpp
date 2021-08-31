#include <iostream>
#include <string>
void task1();
void clearCin();
void task3();

int main()
{
	//task1();
	task3();
	return 0;
}

void task1()
{
	std::string name{};
	char initial{};
	int age{};
	long int phoneNumber{};
	std::string dateOfBirth{};

	// Get the inputs
	std::cout << "Enter your name: ";
	std::getline(std::cin, name);
	//clearCin();

	std::cout << "Enter your initial: ";
	std::cin >> initial;
	clearCin();

	std::cout << "Enter your age:";
	std::cin >> age;
	clearCin();

	std::cout << "Enter your phone number: ";
	std::cin >> phoneNumber;
	clearCin();

	std::cout << "Enter your birth in the format DD/MM/YYYY: ";
	std::getline(std::cin, dateOfBirth);
	//clearCin();

	// Print the inputs
	std::cout << "-----------\n";
	std::cout << "|Name     |" << name <<std::endl;
	std::cout << "|Initial  |" << initial << std::endl;
	std::cout << "|Age      |" << age << std::endl;
	std::cout << "|Phone num|" << phoneNumber << std::endl;
	std::cout << "|Birthday |" << dateOfBirth << std::endl;
	std::cout << "-----------\n";


}

void clearCin()
{
	std::cin.clear();
	std::cin.ignore(32767, '\n');
}

void task3()
{
	int age{};
	std::cout << "Please enter your age: ";
	std::cin >> age;
	clearCin();

	if (age < 20)
	{
		std::cout << "You are young";
	}
	else if (age <= 40)
	{
		std::cout << "You are a grown up";
	}
	else if (age < 60)
	{
		std::cout << "You are old";
	}
	else if (age >= 60) 
	{
		// Including age 60 to avoid invalid inputs
		std::cout << "You are REALLY old!!";
	}
}
