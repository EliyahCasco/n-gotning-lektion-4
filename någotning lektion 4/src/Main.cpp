#include <iostream>
#include <fstream>
#include <string>

namespace Lib {

	template <typename T>

	void Print(T t)
	{
		std::cout << t << "\n";
	}

	void writeToFile(std::string filePath)
	{
		std::ofstream file(filePath);
		std::string fileContent;
		std::getline(std::cin, fileContent);
		file << fileContent;
		file.close();
	}

	std::string filePath1 = "minfil.txt";
}


int main()
{
	Lib::Print("hej");
	Lib::writeToFile("minfil.txt");
}