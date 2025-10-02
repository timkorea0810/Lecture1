#include <iostream>
#include <string>

// =========================================================
// For Exercise 2,
// TODO: Define the OOPCourse::Math namespace structure and
//       the internal anonymous namespace here.

// =========================================================
namespace {
    void log_calculation(int result) {
        std::cout << "LOG: Calculation performed, result is " << result << std::endl;
    }
}

namespace OOPCourse::Math {
    int add_and_log(int a, int b) {
        log_calculation(a + b);
        return a + b;
    }
}


// Main program
int main()
{
    // --- Exercise 1: String reversal and largest value ---
    std::cout << "--- Exercise 1: String Reversal ---\n";
    // TODO: std::string variables num_a, num_b
    std::string num_a;
    std::string num_b;

    std::cout << "Enter the first 3-digit number: ";
    // TODO: Use std::cin to receive 3-digit number of num_a
    std::cin >> num_a;

    std::cout << "Enter the second 3-digit number: ";
    // TODO: Use std::cin to receive 3-digit number of num_b
    std::cin >> num_b;

    // TODO: Empty std::string for reversed_a, reversed_b
    std::string reversed_a;
    std::string reversed_b;

    // 1. Reversal with a for-loop
    // TODO: Implement the standard indexed 'for' loops here to iterate
    //       backwards over num_a and num_b and populate reversed_a and reversed_b.
    for (int i = 2;i >= 0;i--) {
        reversed_a += num_a[i];
        reversed_b += num_b[i];
    }

    // 2. Comparison and Output
    // TODO: Implement the 'if/else' statement here to compare the reversed strings
    //       and output the largest one.
    if (reversed_a > reversed_b) {
        std::cout << reversed_a << std::endl;
    }
    else {
        std::cout << reversed_b << std::endl;
    }

    std::cout << "\n";


    // --- Exercise 2: Namespaces ---
    std::cout << "--- Exercise 2: Namespaces ---\n";

    // TODO: Use the 'using' declaration here to bring ONLY the public
    //       'add_and_log' function into scope.
    using OOPCourse::Math::add_and_log;

    // TODO: Call 'add_and_log(15, 27)' and print the result.
    std::cout << add_and_log(15, 27) << std::endl;

    return 0;
}
