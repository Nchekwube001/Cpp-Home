#include <iostream>
// #include <iostream> is a header file library that lets us work with input and
// output objects, such as cout (used below). Header files add functionality to
// C++ programs.
using namespace std;
// using namespace std means that we can use names for objects and variables
// from the standard library.

//  Another thing that always appear in a C++ program is int main(). This is
//  called a function. Any code inside its curly brackets {} will be executed.
int main() {
  int myNum = 15;
  const int myConst = 34;
  string x;
  cout << "Type a string: ";       // Type a string and press enter
  cin >> x;                        // Get user input from the keyboard
  cout << "Your number is: " << x; // Display the input value
  cout << "Hello my gee!"
       << "\n";
  cout << myNum;
  cout << max(5, 10);
  string txt = "We are the so-called \"Vikings\" from the north.";
  int myNo = 5;              // Integer (whole number)
  float myFloatNum = 5.99;   // Floating point number
  double myDoubleNum = 9.98; // Floating point number
  char myLetter = 'D';       // Character
  bool myBoolean = true;     // Boolean
  string myText = "Hello";   // String
  // You might see some C++ programs that runs without the standard
  // namespace library. The using namespace std line can be omitted and
  // replaced with the std keyword, followed by the :: operator for some
  // objects:
  //  std::cout << "Hello World!";
  return myNum;
}