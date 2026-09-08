
// The midterm project Calculator Final one that i Presented 
/*
// This is the Al-Khwarizmians group project for programming 1 course 
 
// Used libraries
#include <stdio.h> // Standard Input/Output functions
#include <string.h> // String manipulation functions (strcmp)
#include <ctype.h> // Character handling functions (toupper)
 
// Function prototypes
float add(float A, float B); // Addition function 
float subtract(float A, float B); // Subtraction function 
float multiply(float A, float B); // Multiplication function 
float divide(float A, float B); // Division function 
float power(float A, float B); // Power or exponent function 
void PrintErrorMessage(); // Print the error message function
void PrintHelpInfo(); // Print the help information function
 
// Main code block 
int main() {
    char command[10];
    char operation;
    float numA, numB, result;
    
    // Welcome message
    printf("____________Welcome!____________\n____To our humble calculator____");
    PrintHelpInfo();
 
    // Main loop
    while (1) {
        
        printf("\nEnter a mathematical expression or a command ('Help' for help, 'Stop' to stop): ");
        scanf("%s", command);
 
        // Convert command to uppercase for case-insensitive comparison
        for (int i = 0; command[i]; i++) {
            command[i] = toupper(command[i]);
        }
 
        // Stop case
        if (strcmp(command, "STOP") == 0) {
            printf("Exiting the calculator. Goodbye! \n");
            break;
        }
 
        // Help case
        if (strcmp(command, "HELP") == 0) {
            PrintHelpInfo();
        } else {
            // Mathematical expression case
            if (sscanf(command, "%f %c %f", &numA, &operation, &numB) == 3) {
                // Perform the mathematical operation based on the provided operator
                switch (operation) {
                    case '+': // Addition case
                        result = add(numA, numB);
                        printf("Result = %.2f\n", result);
                        break;
                    case '-': // Subtraction case
                        result = subtract(numA, numB);
                        printf("Result = %.2f\n", result);
                        break;
                    case '*': // Multiplication case
                        result = multiply(numA, numB);
                        printf("Result = %.2f\n", result);
                        break;
                    case '/': // Division case
                        // Division by zero case
                        if (numB != 0) {
                            result = divide(numA, numB);
                            printf("Result = %.2f\n", result);
                        } else {
                            printf("Error: Division by zero is not allowed.\n");
                        }
                        break;
                    case '^': // Power or exponent case
                        result = power(numA, numB);
                        printf("Result = %.2f\n", result);
                        break;
                    default:
                        // Print the error message for invalid operator
                        PrintErrorMessage();
                }
            } else {
                // Print the error message for invalid input format
                PrintErrorMessage();
            }
        }
    }
 
    return 0;
}
 
// Function definitions
float add(float A, float B) {
    return A + B;
}
 
float subtract(float A, float B) {
    return A - B;
}
 
float multiply(float A, float B) {
    return A * B;
}
 
float divide(float A, float B) {
    return A / B;
}
 
float power(float A, float B) {
    float result = 1.0;
 
    if (B > 0) {
        // Positive exponent
        for (int i = 0; i < B; i++) {
            result = result * A;
        }
    } else if (B < 0) {
        // Negative exponent
        for (int i = 0; i > B; i--) {
            result = result / A;
        }
    }
    // If exponent is 0, result remains 1.0
 
    return result;
}
 
void PrintHelpInfo() {
    printf("\n_____Calculator user guide______\nEnter a mathematical expression in the form of (A OPERATOR B)\nSupported operators: +, -, *, /, ^\nType 'Help' if you want to see this help message again or 'Stop' to exit.\n");
}
 
void PrintErrorMessage() {
    printf("ERROR! Invalid input. For help, enter 'Help'. \n\n");
}
*/


























































/* This is the Al-Khwarizmians group project for programming 1 course */
 
// Used libraries
#include <stdio.h> // Standard Input/Output functions
#include <string.h> // String manipulation functions (strcmp)
#include <ctype.h> // Character handling functions (toupper)
 
// Function prototypes
float add(float A, float B); // Addition function 
float subtract(float A, float B); // Subtraction function 
float multiply(float A, float B); // Multiplication function 
float divide(float A, float B); // Division function 
float power(float A, float B); // Power or exponent function 
void PrintErrorMessage(); // Print the error message function
void PrintHelpInfo(); // Print the help information function
 
// Main code block 
int main() {
    char command[10];
    char operation;
    float numA, numB, result;
    
    // Welcome message
    printf("____________Welcome!____________\n____To our humble calculator____");
    PrintHelpInfo();
 
    // Main loop
    while (1) {
        
        printf("\nEnter a mathematical expression or a command ('Help' for help, 'Stop' to stop): ");
        scanf("%s", command);
 
        // Convert command to uppercase for case-insensitive comparison
        for (int i = 0; command[i]; i++) {
            command[i] = toupper(command[i]);
        }
 
        // Stop case
        if (strcmp(command, "STOP") == 0) {
            printf("Exiting the calculator. Goodbye! \n");
            break;
        }
 
        // Help case
        if (strcmp(command, "HELP") == 0) {
            PrintHelpInfo();
        } else {
            // Mathematical expression case
            if (sscanf(command, "%f %c %f", &numA, &operation, &numB) == 3) {
                // Perform the mathematical operation based on the provided operator
                switch (operation) {
                    case '+': // Addition case
                        result = add(numA, numB);
                        printf("Result = %.2f\n", result);
                        break;
                    case '-': // Subtraction case
                        result = subtract(numA, numB);
                        printf("Result = %.2f\n", result);
                        break;
                    case '*': // Multiplication case
                        result = multiply(numA, numB);
                        printf("Result = %.2f\n", result);
                        break;
                    case '/': // Division case
                        // Division by zero case
                        if (numB != 0) {
                            result = divide(numA, numB);
                            printf("Result = %.2f\n", result);
                        } else {
                            printf("Error: Division by zero is not allowed.\n");
                        }
                        break;
                    case '^': // Power or exponent case
                        result = power(numA, numB);
                        printf("Result = %.2f\n", result);
                        break;
                    default:
                        // Print the error message for invalid operator
                        PrintErrorMessage();
                }
            } else {
                // Print the error message for invalid input format
                PrintErrorMessage();
            }
        }
    }
 
    return 0;
}
 
// Function definitions
float add(float A, float B) {
    return A + B;
}
 
float subtract(float A, float B) {
    return A - B;
}
 
float multiply(float A, float B) {
    return A * B;
}
 
float divide(float A, float B) {
    return A / B;
}
 
float power(float A, float B) {
    float result = 1.0;
 
    if (B > 0) {
        // Positive exponent
        for (int i = 0; i < B; i++) {
            result = result * A;
        }
    } else if (B < 0) {
        // Negative exponent
        for (int i = 0; i > B; i--) {
            result = result / A;
        }
    }
    // If exponent is 0, result remains 1.0
 
    return result;
}
 
void PrintHelpInfo() {
    printf("\n_____Calculator user guide______\nEnter a mathematical expression in the form of (A OPERATOR B)\nSupported operators: +, -, *, /, ^\nType 'Help' if you want to see this help message again or 'Stop' to exit.\n");
}
 
void PrintErrorMessage() {
    printf("ERROR! Invalid input. For help, enter 'Help'. \n\n");
}








































































/* This is the Al-Khwarizmians group project for programming 1 course */
 
// Used libraries
#include <stdio.h>    // Standard Input/Output functions
#include <string.h>   // String manipulation functions (strcmp)
#include <ctype.h>    // Character handling functions (toupper)
 
// Function prototypes
float add(float A, float B);      // Addition function 
float subtract(float A, float B); // Subtraction function 
float multiply(float A, float B); // Multiplication function 
float divide(float A, float B);   // Division function 
float power(float A, float B);    // Power or exponent function 
void PrintErrorMessage();         // Print the error message function
void PrintHelpInfo();             // Print the help information function
 
// Main code block 
int main() {
    char command[10];
    char operation;
    float numA, numB, result;
    
    // Welcome message
    printf("___________Welcome!____________\n__To our humble calculator___");
    PrintHelpInfo();
 
    // Main loop
    while (1) {
        
        printf("\nEnter a mathematical expression or a command ('Help' for help, 'Stop' to stop): ");
        scanf("%s",&command);
 
        // Convert command to uppercase for case-insensitive comparison
        for (int i = 0; command[i]; i++) {
            command[i] = toupper(command[i]);
        }
 
        // Stop case
       // strcmp (string compairsing) that means its compairing between two strings and there are 3 instruction to execute //it
      //1. if the s1 string > the s2 so we exepect value > 0 
      //2. if the s1 string < the s2 so we exepect value < 0
      //3. if the s1 string = the s2 so we exepect value == 0 
        if (strcmp(command, "STOP") == 0) {
            printf("Exiting the calculator. Goodbye!\n");
            break;
        }
 
        // Help case
        if (strcmp(command, "HELP") == 0) {
            PrintHelpInfo();
        } else {
            // Mathematical expression case
           //sscanf here it checks inputs for three inputs number1 operating number2 so its == 3
            if (sscanf(command, "%f %c %f", &numA, &operation, &numB) == 3) {
                // Perform the mathematical operation based on the provided operator
                switch (operation) {
                    case '+': // Addition case
                        result = add(numA, numB);
                        printf("Result = %.2f\n", result);
                        break;
                    case '-': // Subtraction case
                        result = subtract(numA, numB);
                        printf("Result = %.2f\n", result);
                        break;
                    case '*': // Multiplication case
                        result = multiply(numA, numB);
                        printf("Result = %.2f\n", result);
                        break;
                    case '/': // Division case
                        // Division by zero case
                        if (numB != 0) {
                            result = divide(numA, numB);
                            printf("Result = %.2f\n", result);
                        } else {
                            printf("Error: Division by zero is not allowed.\n");
                        }
                        break;
                    case '^': // Power or exponent case
                        result = power(numA, numB);
                        printf("Result = %.2f\n", result);
                        break;
                    default:
                        // Print the error message for invalid operator
                        PrintErrorMessage();
                }
            } else {
                // Print the error message for invalid input format
                PrintErrorMessage();
            }
        }
    }
 
    return 0;
}
 
// Function definitions
float add(float A, float B) {
    return A + B;
}
 
float subtract(float A, float B) {
    return A - B;
}
 
float multiply(float A, float B) {
    return A * B;
}
 
float divide(float A, float B) {
    return A / B;
}
 
float power(float A, float B) {
    float result = 1.0;
 
    if (B > 0) {
        // Positive exponent
        for (int i = 0; i < B; i++) {
            result = result * A;
        }
    } else if (B < 0) {
        // Negative exponent
        for (int i = 0; i > B; i--) {
            result = result / A;
        }
    }
    // If exponent is 0, result remains 1.0
 
    return result;
}
 
void PrintHelpInfo() {
    printf("\n____Calculator user guide_____\nEnter a mathematical expression in the form of (A OPERATOR B)\nSupported operators: +, -, *, /, ^\nType 'Help' if you want to see this help message again or 'Stop' to exit.\n");
}
 
void PrintErrorMessage() {
    printf("ERROR! Invalid input. For help, enter 'Help'.\n\n");
}


/*
// This is the Al-Khwarizmians group project for programming 1 course 
 
// Used libraries
#include <stdio.h>    // Standard Input/Output functions
#include <string.h>   // String manipulation functions (strcmp)
#include <ctype.h>    // Character handling functions (toupper)
 
// Function prototypes
float add(float A, float B);      // Addition function 
float subtract(float A, float B); // Subtraction function 
float multiply(float A, float B); // Multiplication function 
float divide(float A, float B);   // Division function 
float power(float A, float B);    // Power or exponent function 
void PrintErrorMessage();         // Print the error message function
void PrintHelpInfo();             // Print the help information function
 
// Main code block 
int main() {
    char command[10];
    char operation;
    float numA, numB, result;
    
    // Welcome message
    printf("____________Welcome!____________\n____To our humble calculator____");
    PrintHelpInfo();
 
    // Main loop
    while (1) {
        
        printf("\nEnter a mathematical expression or a command ('Help' for help, 'Stop' to stop): ");
        scanf("%s",&command);
 
        // Convert command to uppercase for case-insensitive comparison
        for (int i = 0; command[i]; i++) {
            command[i] = toupper(command[i]);
        }
 
        // Stop case
       // strcmp (string compairsing) that means its compairing between two strings and there are 3 instruction to execute //it
      //1. if the s1 string > the s2 so we exepect value > 0 
      //2. if the s1 string < the s2 so we exepect value < 0
      //3. if the s1 string = the s2 so we exepect value == 0 
        if (strcmp(command, "STOP") == 0) {
            printf("Exiting the calculator. Goodbye!\n");
            break;
        }
 
        // Help case
        if (strcmp(command, "HELP") == 0) {
            PrintHelpInfo();
        } else {
            // Mathematical expression case
           //sscanf here it checks inputs for three inputs number1 operating number2 so its == 3
            if (sscanf(command, "%f %c %f", &numA, &operation, &numB) == 3) {
                // Perform the mathematical operation based on the provided operator
                switch (operation) {
                    case '+': // Addition case
                        result = add(numA, numB);
                        printf("Result = %.2f\n", result);
                        break;
                    case '-': // Subtraction case
                        result = subtract(numA, numB);
                        printf("Result = %.2f\n", result);
                        break;
                    case '*': // Multiplication case
                        result = multiply(numA, numB);
                        printf("Result = %.2f\n", result);
                        break;
                    case '/': // Division case
                        // Division by zero case
                        if (numB != 0) {
                            result = divide(numA, numB);
                            printf("Result = %.2f\n", result);
                        } else {
                            printf("Error: Division by zero is not allowed.\n");
                        }
                        break;
                    case '^': // Power or exponent case
                        result = power(numA, numB);
                        printf("Result = %.2f\n", result);
                        break;
                    default:
                        // Print the error message for invalid operator
                        PrintErrorMessage();
                }
            } else {
                // Print the error message for invalid input format
                PrintErrorMessage();
            }
        }
    }
 
    return 0;
}
 
// Function definitions
float add(float A, float B) {
    return A + B;
}
 
float subtract(float A, float B) {
    return A - B;
}
 
float multiply(float A, float B) {
    return A * B;
}
 
float divide(float A, float B) {
    return A / B;
}
 
float power(float A, float B) {
    float result = 1.0;
 
    if (B > 0) {
        // Positive exponent
        for (int i = 0; i < B; i++) {
            result = result * A;
        }
    } else if (B < 0) {
        // Negative exponent
        for (int i = 0; i > B; i--) {
            result = result / A;
        }
    }
    // If exponent is 0, result remains 1.0
 *
    return result;
}
 
void PrintHelpInfo() {
    printf("\n_____Calculator user guide______\nEnter a mathematical expression in the form of (A OPERATOR B)\nSupported operators: +, -, *, /, ^\nType 'Help' if you want to see this help message again or 'Stop' to exit.\n");
}
 
void PrintErrorMessage() {
    printf("ERROR! Invalid input. For help, enter 'Help'.\n\n");
}
*/


























/*
// This is the Al-Khwarizmians group project for programming 1 course 

// The used libraries
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

// Function prototypes
void PrintHelpInfo();                    // Print the help information function
float add(float a, float b);             // Addition function 
float subtract(float a, float b);        // Subtraction function 
float multiply(float a, float b);        // Multiplication function 
float divide(float a, float b);          // Division function 
float power(float base, float exponent); // Power or exponent function 
void PrintErrorMessage();                // Print the error message function

// Main code block 
int main() {
    float number1, number2, result;
    char operator;
    char input[10];
    
    printf("______________Welcome!_______________\n_____To our humble calculator_____\n_User's Manual:______________________\n");

      fgets(input, sizeof(input), stdin);
      input[i] = toupper(input[i]);
    // Main loop 
    do {
        printf("Please enter a mathematical expression (A OPERATOR B): ");
        scanf("%f %c %f", &number1, &operator, &number2);

        // Checking the operator
        if (operator == '+' || operator == '-' || operator == '*' || operator == '/' || operator == '^') {
            // Compiling the operation based on the operator
            switch (operator) {
                case '+':
                    result = add(number1, number2);
                    break;
                case '-':
                    result = subtract(number1, number2);
                    break;
                case '*':
                    result = multiply(number1, number2);
                    break;
                case '/':
                    result = divide(number1, number2);
                    break;
                case '^':
                    result = power(number1, number2);
                    break;
            }
            printf("Result: %.2f\n", result);
        } else if (strcmp(input, "HELP") == 0) {
            PrintHelpInfo(); // Help case
        } else if (strcmp(input, "STOP") != 0) {
            PrintErrorMessage(); // Stop case
        }

    } while (strcmp(input, "STOP") != 0);

    printf("Calculator terminated.\n");

    return 0;
}

// Function to display help information
void PrintHelpInfo() {
    printf("\n==== Calculator Help ====\n");
    printf("Enter a mathematical expression in the form of A OPERATOR B.\n");
    printf("Supported operators: +, -, *, /, ^\n");
    printf("To stop the calculator, enter 'STOP'.\n");
    printf("For help, enter 'HELP'.\n\n");
}

// Function to perform addition
float add(float a, float b) {
    return a + b;
}

// Function to perform subtraction
float subtract(float a, float b) {
    return a - b;
}

// Function to perform multiplication
float multiply(float a, float b) {
    return a * b;
}

// Function to perform division
float divide(float a, float b) {
    if (b != 0) {
        return a / b;
    } else {
        PrintErrorMessage();
        return 0;
    }
}

// Function to calculate power or exponent
float power(float base, float exponent) {
    return pow(base, exponent);
}

// Function to display error message for invalid input
void PrintErrorMessage() {
    printf("Invalid input! Please enter a valid expression or type 'STOP' to exit.\n");
}

*/



























/*
// Notes :
// Serach about fgets again for the presentation
// stdin : reading the data from standing input // standerd input stream // its input from the //terminal

// sscanf / why its = 3  / why = 0 

#include <stdio.h> // input output Library
#include <math.h> // Mathmatical functions library
#include <string.h> // String functions library
#include <ctype.h> // Character handiling functions library

// The decleration of the intro function
 void welcome();
 
// The declration of the operations function (+,-,*,/,^)
 //double calculate(double a, char operator, double b);

   float add(float a, float b); 

 


// Function prototypes

            // Addition function 
float subtract(float a, float b);        // Subtraction function 
float multiply(float a, float b);        // Multiplication function 
float divide(float a, float b);          // Division function 
float power(float base, float exponent); // Power or exponent function 
void PrintErrorMessage();                // Print the error message function






// Help function
 void  y_help();

int main() {
    welcome();

    while (1) {
        char operator;
        double a, b;
        char input[50];

        printf("Enter a mathematical expression: ");
        fgets(input, sizeof(input), stdin);

   
        for (int i = 0; input[i]; i++) {
     // Convert the input to uppercase for case-insensitive comparison
            input[i] = toupper(input[i]);
        }

        if (sscanf(input, "%lf %c %lf", &a, &operator, &b) == 3) {
            double result = calculate(a, operator, b);
            printf("Result: %.2f\n", result);
       
        // strcmp (string compairsing) that means its compairing between two strings and there are 3 instruction to execute //it
 //1. if the s1 string > the s2 so we exepect value > 0 
 //2. if the s1 string < the s2 so we exepect value < 0
 //3.  if the s1 string = the s2 so we exepect value == 0 
    
        } else if (strcmp(input, "STOP\n") == 0) {            // input = stop cmpair with STOP 
            printf("Exiting the program. Goodbye!\n");
            break;
        } else if (strcmp(input, "HELP\n") == 0) {
            y_help();
        } else {
            printf("Error: Invalid input \n");
            printf("If you want help just ask me by writing help or HELP \n");
       }
    }
    return 0;
}
// Function of the 5 operations (+,-,*,/,^) 
double calculate(double a, char operator, double b) {
    switch (operator) {
    // in case the operation is addition 
        case '+':
            return add(a + b);
    // in case the operation is substraction
        case '-':
            return a - b;
    // in case the operation is multiplication
        case '*':
            return a * b;
    // in case the operation is division
        case '/':
    // Division by zero Condition 
            if (b != 0) {
                return a / b;
            } else {
    // Display an error in case divisor was zero
                printf("Error: Division by zero\n");
                return 0;
            }
    // in case the operation is power
        case '^':
            return pow(a, b);
    // Display an error in case none of these operations executed  
        default:
            printf("Error: Unsupported operator\n");
            return 0;
    }
}
  // The definition of the intro function
void welcome() {
    printf("Welcome to the Simple Calculator!\n");
}
 // Function if the user needs help and showing the instructions of how to write a correct operation
void y_help() {
    printf("Usage: Enter a mathematical expression in the form 'A OPERATOR B'\n");
 // Our constant operations
    printf("Supported operations: +, -, *, /, ^\n");
 // Leading the user how to get help and how to stop the program
    printf("Type 'HELP' if you want to see this help message again or 'STOP' to exit.\n");
}
*/












































































/*
#include <stdio.h>
#include <math.h>

 void intro(void);
 double calculate(double a, char operator, double b);

int main() {

// second function variables
  double a , b;
  char operator;
 // The first function (intro)
 void intro(void);
 
  printf("Enter a mathematical expression in the form 'A OPERATOR B'\n");
  scanf("%lf%lf",&a,&b);
 
 // The second function (operations)
 printf("The result of your operations is =  %lf : ",calculate( a,  operator,  b));



    return 0;
}


 void intro(void){
    printf("Welcome to the Simple Calculator!\n");
    printf(" Enter a mathematical expression in the form 'A OPERATOR B'\n");
}


 double calculate(double a, char operator, double b) {
    switch (operator) {
        case '+':
            return a + b;
        case '-':
            return a - b;
        case '*':
            return a * b;
        case '/':
            if (b != 0) {
                return a / b;
            } else {
                printf("Error: Division by zero\n");
                return 0;
            }
        case '^':
            return pow(a, b);
        default:
            printf("Error: Unsupported operator\n");
            break;
    }
}
*/










/*

     //printf("Welcome to the Simple Calculator!\n");
   // printf("Usage: Enter a mathematical expression in the form 'A OPERATOR B'\n");

void display_help() {

    printf("Supported operations: +, -, *, /, ^\n");
    printf("Type 'HELP' for this help message or 'STOP' to exit.\n");
}
*/


// shell ?
