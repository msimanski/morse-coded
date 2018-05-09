#include <iostream>
#include <string>
#include <fstream>
#include <unistd.h>

using namespace std;

int main(int argc, char const *argv[])
{
  ifstream input("/Users/michaelsimanski/Documents/Projects C++/morse-coded/input.txt"); //init input controller
  ofstream output("/Users/michaelsimanski/Documents/Projects C++/morse-coded/output.txt"); //init output controller

  if (input.is_open())
  {
    cout << "ifstream is open" << "\n";
  }
  if (input.good())
  {
    cout << "ifstream is good" << "\n";
  }

  string fileContents = ""; //init message, that will be filled by input.txt
  string str; //temp string

  cout << "\n";

  while (input >> fileContents)
  {
    cout << fileContents << "\n";
  }

  //cout << "test" << "\n";

  return 0;
}
