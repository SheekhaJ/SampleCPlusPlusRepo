#include <iostream>
using namespace std;

void sampleFunctionWithVoidReturnType(){
    cout << "Inside sample function with void return type.";
}

int sampleFunctionWithIntReturnType(){
    return 7;
    return 9;
}

int main(){
    //Single-line comment
    std::cout << "Hello World!" <<endl;
    std::cout << "Hello World in new line \n <----- This works in the same way";
    /* Block comment */

    //std::cout with << indicating that data is moving from r-value to cout while printing
    std::cout << "\nEnter value for variable x: ";
    int x;
    //std::cin with >> indicating that data is moving from l-value cin to variable x while reading from the console. 
    std::cin >> x;
    std::cin.get(); 
    std::cout<< "Value entered for variable x is " << x <<std::endl;

    sampleFunctionWithVoidReturnType();

    //Following line has to be commented because function with return type as void can't be used with << operator. Compile-time error.
    //std::cout << sampleFunctionWithVoidReturnType();

    std::cin.get(); 
    std::cout << sampleFunctionWithIntReturnType();

    std::cin.get(); 
}