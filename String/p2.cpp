#include<iostream>
#include<string>
using namespace std;

int main()
{
  string str, rev;
  cout << "Enter value: ";
  getline(cin, str);
  
  for(int i = str.length() - 1; i >= 0; i--)
  {
    rev += str[i];
  }
  
  cout << "The reversed string is: " << rev << endl;
  
  return 0;
}
