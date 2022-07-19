//
//  test.cpp
//  
//
//  Created by Abdulaziz Albastaki on 19/07/2022.
//

#include <stdio.h> // PREPROCESSOR DIRECTIVES. EXAMINED BEFORE COMPILATION, #include IS USED TO IMPORT LIBRARIES
#include <iostream> // INPUT/OUTPUT STREAM
#include <string>
// STANDARD LIBRARY NAMES ARE ENCLOSED USING <NAME> WHEREAS USER-DEFINED ARE "NAME"

using namespace std;
/* The above line introduces the namespace std into the current program. This line allows the usage of standard library objects without prepending the std:: identifier.
  If this line is omitted, the cout on line 18 (or any other standard library object) must be replaced with std::cout.
 */
int main() {
  cout << "Hello, world!\n"; /* cout prints the message
  used with the insertion operator << to print values on the terminal
  \n is needed as new lines are not automatically inserted.
                              
  endl (or std::endl) can be used too.
  */
  
  int age = 18;
  int a = 7, b = 2, c = 3;
  const double pi = 3.14;
  int pi_as_int = (int) pi; // Simply removes decimal, no rounding
  std::string my_name = "Aziz";
  c = a--; // post decrement - c is equal to a - 1, a is unchanged
  b = ++a; //pre-increment - b is equal to 1 + a, a is also equal to a + a
  
  a *= c; // multiply a by c
  a %= 5; // a is now a modulo 5
  cout << "I am " << age << " years old." << endl;
  cout << "The value of pi is " << pi << endl;
  cout << "My name is " << my_name<<endl; //
  
  // Relational operators is exactly like those in Swift
  
  // BITWISE OPERATORS
  
  /*
   Bitwise operators are used to manipulate variables at the bit level. They are most commonly used with numerical variables to perform bit operations.
   
   <<   Left shift    x << y    shift bits in x left by y
   >>   Right shift    x >> y   shift bits in x right by y
   ~    bitwise NOT   ~x        flip all bits in x
   &    bitwise AND    x & y    each bit in x AND each bit in y
   |    bitwise OR    x | y     each bit in x OR each bit in y
   ^    bitwise XOR    x ^ y    each bit in x XOR each bit in y
   
   */
  
  int x = 3;    // in bits: 0011
  int y = 9;    // in bits: 1001
   
  int z = x << 2;    // z equals 12, in bits: 1100
  z = y >> 1;    // z equals 4, in bits: 0100
  z = x | y;    // z equals 11, in bits: 1011
  
  int exam_grade = 85;
  int& score = exam_grade;
  exam_grade = 90;
  cout << "Score is.. " << score << " Exam Grade is.. " << exam_grade << endl;
  
  std::string new_message = "Hello again!";
  
  cout << "The memory address of " << new_message << " is " << &new_message << endl;
  
  std::string* pointer_my_name =  &my_name; // asterick after type is means it's a pointer
  
  cout << "my name is " *pointer_my_name <<endl;
  
  int* ptr = nullptr; // uninitialized pointer
  
  return 0; //  A return value of 0 indicates that the main function finished running with no problems.
}

