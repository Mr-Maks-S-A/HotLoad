#include <BaseHLoadLib.hpp>
#include <iostream>

/// @brief The main() function in C/C++ is the main function from which the program execution begins. It is the entry point of the program where the operating system transfers control and from where the code execution begins.
/// @return Completion status
std::int32_t main() {
  Foo foo;
  std::cout << "The answer is " << foo.GetTheAnswer() << std::endl;

  return EXIT_SUCCESS;
};