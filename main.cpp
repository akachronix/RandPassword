#include <iostream>
#include <stdlib.h>
#include <time.h>

using namespace std;

int main(void)
{
  cout << "Password Generator v0.93" << endl;
  cout << "by Brendan Gowen" << endl;
  cout << "https://www.github.com/akachronix" << endl << endl;
  
  srand((unsigned)time(NULL));
  
  string characters[90]{ "A", "B", "C", "D", "E", "F", "G", "H", "I", "J", "K", "L", "M", "N", "O", "P", "Q", "R", "S", "T", "U", "V", "W", "X", "Y", "Z", "a", "b", "c", "d", "e", "f", "g", "h", "i", "j", "k", "l", "m", "n", "o", "p", "q", "r", "s", "t", "u", "v", "w", "x", "y", "z", "1", "2", "3", "4", "5", "6", "7", "8", "9", "0", "!", "@", "#", "$", "%", "^", "&", "*", "(", ")", "~", "`", ":", ";", ",", "<", ".", ">", "?", "/", "{", "[", "}", "]", "|", "-", "_" };
  
  int numberOfChars = sizeof(characters) / sizeof(characters[0]);
  
  cout << "Entrys in array: " << numberOfChars << endl;
  cout << "How many bytes the array takes up: " << sizeof(characters) << " bytes." << endl << endl;
  
  int userLength;
  
  cout << "How long to you want your password to be?" << endl;
  cin >> userLength;
  
  cout << endl;
  
  string password;
  
  cout << "Your password is: " << endl;
  
  for(int i = 0; i < userLength; i++)
  {
    int random = rand() % numberOfChars + 1;
    cout<< characters[random];
  }
  
  cout << password << endl;
  
  return 0;
}
