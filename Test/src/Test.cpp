#include "Includes.h"
#include <iostream>

int main()
{
	std::string comp;
	Detection::GetCompilerType(comp);
	std::cout <<comp;
	Detection::GetFloatingCapability(comp);
	std::cout << comp;
	Detection::GetRunnerPlatform(comp);
	std::cout << comp;
	return 0;
}