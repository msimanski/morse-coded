#include <iostream>
#include <string>
#include <fstream>
#include <unistd.h>
#include <string>
#include <sstream>
#include "morseTranslator.cpp"

using namespace std;

ifstream input("/Users/michaelsimanski/Documents/Projects C++/morse-coded/input.txt"); //init input controller
ofstream output("/Users/michaelsimanski/Documents/Projects C++/morse-coded/output.txt"); //init output controller

int main(int argc, char const *argv[])
{
  if (!(input.is_open() && input.good()))
  {
    cout << "ifstream is FUBAR, exiting";
  }
  else
  {
    cout << "ifstream is open and good, proceeding" << "\n"; //it is right and truly good

    std::stringstream fileContents; //init message, that will be filled by input.txt
    fileContents << input.rdbuf();

    output << morseTranslator::translate(fileContents.str());

    return 0;
  }

  return 0;
}
