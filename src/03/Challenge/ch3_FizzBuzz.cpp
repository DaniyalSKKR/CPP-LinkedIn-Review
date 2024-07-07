// C++ Code Challenges, LinkedIn Learning

// Challenge #3: FizzBuzz
// Write an application that plays FizzBuzz.
// Print an integer number sequence starting at 1, replacing multiples of 3 by "Fizz", multiples of 5 by "Buzz", and multiples of 3 and 5 by "FizzBuzz".
// The user enters the last number in the sequence.

#include <iostream>
using namespace std;

// FizzBuzz, main()
// Summary: This application runs on the main function.
int main(){
    int n; // How many numbers to include in the sequence.
    
    std::cout << "Enter a positive integer: " << std::flush;
    std::cin >> n;
    int x, y = 0;
    // Write your code here
    for (int i = 1; i <= n; i++)
    {
        x = i % 3;
        y = i % 5;
        if((x == 0) && (y == 0)){
            cout << "FizzBuzz" << endl;
        } else if ((x == 0) && (y != 0)){
            cout << "Fizz" << endl;
        } else if ((x != 0) && (y == 0)){
            cout << "Buzz" << endl;
        } else {
            cout << i << endl;
        }

    }
    
    
    std::cout << std::endl << std::flush;
    return 0;
}
