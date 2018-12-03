#include <iostream>
#include "morseTranslator.h"

using namespace std;

string morseTranslator::convertChar(char x) //converts a char to morse equivalent
{
  switch(x)
  {
    case ' ': return " ";
    case 'A':
    case 'a': return ".-";
    case 'B':
    case 'b': return "-...";
    case 'C':
    case 'c': return "-.-.";
    case 'D':
    case 'd': return "-..";
    case 'E':
    case 'e': return ".";
    case 'F':
    case 'f': return "..-.";
    case 'G':
    case 'g': return "--.";
    case 'H':
    case 'h': return "....";
    case 'I':
    case 'i': return "..";
    case 'J':
    case 'j': return ".---";
    case 'K':
    case 'k': return "-.-";
    case 'L':
    case 'l': return ".-..";
    case 'M':
    case 'm': return "--";
    case 'N':
    case 'n': return "-.";
    case 'O':
    case 'o': return "---";
    case 'P':
    case 'p': return ".--.";
    case 'Q':
    case 'q': return "--.-";
    case 'R':
    case 'r': return ".-.";
    case 'S':
    case 's': return "...";
    case 'T':
    case 't': return "-";
    case 'U':
    case 'u': return "..-";
    case 'V':
    case 'v': return "...-";
    case 'W':
    case 'w': return ".--";
    case 'X':
    case 'x': return "-..-";
    case 'Y':
    case 'y': return "-.--";
    case 'Z':
    case 'z': return "--..";
    case '\n': return "\n";
    case '.': return ".-.-.-";
    default: return "?";
  }
}

string morseTranslator::translate(string toBeTranslated)
{
  string translatedText = ""; //string form of what is being translated

  for (int i = 0; i < toBeTranslated.length(); i++)
  {
    //cout << "Debug, untranslated: " << toBeTranslated.at(i) << endl;
    //cout << "Debug, translated: " << morseTranslator::convertChar(toBeTranslated.at(i)) << endl;
    translatedText += morseTranslator::convertChar(toBeTranslated.at(i));
  }
  return translatedText;
}
