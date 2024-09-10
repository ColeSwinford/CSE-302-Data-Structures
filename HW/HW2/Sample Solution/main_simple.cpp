#include "wfp_simple.h"
#include <iostream>
#include <string>
int main() {
      std::cout << "Enter a string to be analyzed: ";
      std::string userEntry;
      
      getline(std::cin, userEntry);
      
      bool isGood = WellFormedParExp(userEntry);
      if (isGood)
      	std::cout << "Your string is a well-formed PE.";  
	  else
	    std::cout << "Your string is not a well-formed PE.";
      return 0;
}