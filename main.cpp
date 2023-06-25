#include <iostream>
#include <string>

int firstnumber, secondnumber;
char operation;
std::string restart;

int add(int firstparam, int secondparam){
  int result = firstparam + secondparam;
  return result;
}

int substract(int firstparam, int secondparam){
  int result = firstparam - secondparam;
  return result;
}

int multiply(int firstparam, int secondparam){
  int result = firstparam * secondparam;
  return result;
}

int divide(int firstparam, int secondparam){
  int result = firstparam / secondparam;
  return result;
}

int main(){
  std::cout << "please enter the first number" << std::endl;
  std::cin >> firstnumber;

  std::cout << "please enter the second number" << std::endl;
  std::cin >> secondnumber;

  std::cout << "please enter operation (+, -, x, /)" << std::endl;
  std::cin >> operation;

  if (operation == '+'){
    std::cout << "the sum of the two numbers is : " << add(firstnumber,secondnumber) << std::endl;
  }
  
  if (operation == '-'){
    std::cout << "the difference between the two numbers is : " << substract(firstnumber,secondnumber) << std::endl;
  }
  if (operation == 'x'){
    std::cout << "the product of the two numbers is : " << multiply(firstnumber,secondnumber) << std::endl;
  }
  if (operation == '/'){
    std::cout << "the quotient of the two numbers is : " << divide(firstnumber,secondnumber) << std::endl;
  }

  std::cout << "would you like to calculate again? (y/n)" << std::endl;
  std::cin >> restart;
  if (restart == "y"){
    main();
  }
  if (restart == "n"){
    std::cout << "thankyou" << std::endl;
  }
}