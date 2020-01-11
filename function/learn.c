#include <stdio.h>
#include <stdlib.h>

int main()
{
   printf("\n************     FUNCTIONS     ***************\n");
   printf("\n\n Function is a group of statements that perform a specific task. the main objective is to avoid the repetition of codes in a program.\n It provides modularity code re-usability.\n");
   printf("\n• A C program is a collection of one or more functions where one of the function must be main().\n");
   printf("• Execution of program always starts and ends with main.\n");
   printf("•  main can call other functions to do some part of the task.\n");
   printf("     Advantages of Functions :\n");
   printf("• Problems can be divided into understandable steps.\n");
   printf("• They help in code reuse.\n");
   printf(" ->for eg if average of numbers needs to be calculated 5 times in a program, with different data, instead of writing the same codes  5times in program, the cod can be called 5 times.\n");
   printf("• C library provides standard functions that make programming easier.\n");
   printf("• Functions can also be protected data by defining data as local data. This ensures that the data is available only to the function and cannot be manipulated outside the function.\n");
   printf("\n Types of function :\n") ;
   printf("Functions can be broadly classified into two types\n");
   printf("• Built in function\n");
   printf("• User defined function\n");
   printf(" Built in function\n");
   printf("         c language provides many built in functions few of them are listed below:\n");
   printf("• Strings manipulation function(discussed in the section 2 of module).\n");
   printf("• Character manipulation functions.\n");
   printf("• Memory management functions(discussed in the section of the module 5).\n");
   printf("• Mathematical function.\n");
   printf("character management functions: This header file includes character manipulation functions is ctype.h(#include\"type.h\")");
   printf("\n  ___________________________________________________________\n");
   printf("  | functions       | Return true if ch is                  |\n");
   printf("  |_________________|_______________________________________|\n");
   printf("  | isalnum(ch)     |A letter of alphabet(upr or lwr)or num |\n");
   printf("  | isalpha(ch)     |An upr or lwr case letter of alphabet  |\n");
   printf("  | isascii(ch)     |An ASCII value in the range of 0 to 127|\n");
   printf("  | isblanck(ch)    |A tab, space or another blank character|\n");
   printf("  | islower(ch)     |A lowercase letter of alphabet,a to z  |\n");
   printf("  | isupper(ch)     |A uppercase letter of alphabet,a to z  |\n");
   printf("  |  Function       |         Return                        |\n");
   printf("  | toascii(ch)     |An ASCII value in the range of 0 to 127|\n");
   printf("  | tolower(ch)     |A lowercase of character ch            |\n");
   printf("  | toupper(ch)     |A uppercase of character ch            |\n");
   printf("  |_________________|_______________________________________|\n");
   printf("\n\n Mathematical Functions :\n   The header file that includes mathematical functions is math .h (#include<math.h>)\n\n");
   printf("\n  ___________________________________________________________\n");
   printf("  | functions       | Return                                |\n");
   printf("  |_________________|_______________________________________|\n");
   printf("  | fabs(n)         |absolute value of floating point number|\n");
   printf("  | ceil(n)         |smallest integer value is >= n         |\n");
   printf("  | floor(n)        |largest integer value is <= n          |\n");
   printf("  | exp(n)          |e raised to given power n              |\n");
   printf("  | log(n)          |natural logarithm to base e            |\n");
   printf("  | log10(n)        | common logarithm to base e            |\n");
   printf("  | pow(x,n)        | x raised to the given power n         |\n");
   printf("  | sqrt(n)         |square root of n                       |\n");
   printf("  | cbrt(n)         |  cube root of n                       |\n");
   printf("  |  sin(n)         | sine value of n                       |\n");
   printf("  |  cos(n)         | cosine value of n                     |\n");
   printf("  |  sinh(n)        | hyperbolic sine value of n            |\n");
   printf("  |  cosh(n)        | hyperbolic cosine value of n          |\n");
   printf("  |_________________|_______________________________________|\n");
   printf(" The built function available in c are defined under the header files.\n\n");
   printf(" Header file:\n  A header file containing c declaration and macro definitions to be to be shared between several source .We use header in program by including it, with c preprocessing directive '#include'\n\n\n");
   printf("     stdio.h         input /output functions                                     \n");
   printf("     math.h          mathematical  functions                                     \n");
   printf("     string.h        string manipulation                                         \n");
   printf("     stdlib.h        standard library functions                                  \n");
   printf("     malloc.h        memory allocation/deal location function                    \n");
   printf("     time.h          computing time  functions                                   \n");
   printf("     stddef.h        common macro functions                                      \n");
   printf("     float.h         allow to use constant related to floating point             \n");
   printf("     ctype.h         allow to use functions of testing and mapping characters    \n");
   printf("     conio.h         library function for performing console input and output    \n");
   printf("     User defined functions :\n");
   printf(" The built in functions provided by c are not sufficient for performing customized functions, hence c allows user to create their own functions to perform specific task these are called as user defined functions\n");
   printf("In the below example without using functions ,addition  performed directly after reading inputs ,but in the example using functions,add(a,b) function is called which makes the control to move to the example function add(int a, int b) which computes sum and then returns. the remainder value in the variable sum and then displayed.\n");
   printf(" Example : C program to add two numbers\n");
   printf("/* without functions*/                           |   /*with user defined function*/                    \n");
   printf("     #include<stdio.h>                           |       #include stdio.h                              \n");
   printf("     #include<conio.h>                           |       #include conio.h                              \n");
   printf("     void main()                                 |       int add(int a,int b);                         \n");
   printf("     {                                           |       {                                             \n");
   printf("     int sum a,b;                                |       int sum a,b;                                  \n");
   printf("     printf(\"enter a and b\");                    |       printf(\"enter a and b\");                    \n");
   printf("     scanf(\"%%d%%d\",&a,&b);                        |       scanf(\"%%d%%d\",&a,&b);                      \n");
   printf("     sum=a+b;                                    |       sum=add(a,b);                                 \n");
   printf("     printf(\"sum is %d\",sum);                    |       printf(\"sum is %d\",sum);                    \n");
   printf("     getch();                                    |       getch();                                      \n");
   printf("     }                                           |       }                                             \n");
   printf("                                                 |       int add(int a,int b)                          \n");
   printf("                                                 |       {                                             \n");
   printf("                                                 |       int sum;                                      \n");
   printf("                                                 |       sum=a+b;                                      \n");
   printf("                                                 |       return sum;                                   \n");
   printf("                                                 |       }                                             \n");
   printf(" Advantages of user defined functions \n");
   printf(" •can be used in number of places without restrictions as compared to store procedures.\n");
   printf(" •code can be made less complicated and made easier.\n");
   printf(" •parameters can be made passed to the function.\n");
   printf(" •reduction in size of the program code of function can be used again and again by calling it.\n");
   printf(" •program becomes easy to understand and debug.\n");
   printf(" •a function can be shared by other programs by compiling this separately and loading and linking them together.\n");
   printf(" •in C recursive function can call itself. Many calculations can be done easily by using recursive functions such as calculation of factorial of number etc.\n");
   printf("\n Location of functions in a program \n");
   printf("\n____________________________________________________________________________________________________");
   printf("\n|types     |pictorial representation                   |Example                                    |");
   printf("\n|__________|___________________________________________|___________________________________________|");
   printf("\n|          |       ____________________                | #include<stdio.h>                         |");
   printf("\n|          |       |#include and funct|                | int add(int a,int b);    (optional)       |");
   printf("\n|          |       | declational(opt) |                | int add(int a,int b)                      |");
   printf("\n|          |       |__________________|                | {                                         |");
   printf("\n|   1      |                |                          |  int sum ;                                |");
   printf("\n|          |       _________|__________                |  sum=a+b;                                 |");
   printf("\n|          |       | function of body |                |  return sum;                              |");
   printf("\n|          |       |__________________|                | }                                         |");
   printf("\n|          |                |                          |  void main()                              |");
   printf("\n|          |          ______|_________                 |  {                                        |");
   printf("\n|          |          | main program |                 |  int sum a,b;                             |");
   printf("\n|          |          |______________|                 |  a=10,b=20;                               |");
   printf("\n|          |                                           |  sum=add(a,b);                            |");
   printf("\n|          |                                           |  printf(\"sum is %%d\",sum);                 |");
   printf("\n|          |                                           |  }                                        |");
   printf("\n|__________|___________________________________________|___________________________________________|");
   printf("\n|          |       ____________________                | #include<stdio.h>                         |");
   printf("\n|          |       |#include and funct|                | int add(int a,int b);    (mandatory)      |");
   printf("\n|          |       | declational(mand)|                | void main()                               |");
   printf("\n|          |       |__________________|                | {                                         |");
   printf("\n|   2      |                |                          |  int sum a,b;                             |");
   printf("\n|          |          ______|_________                 |  a=10,b=20;                               |");
   printf("\n|          |          | main program |                 |  sum=add(a,b);                            |");
   printf("\n|          |          |______________|                 |  printf(\"sum is %%d\",sum);                 |");
   printf("\n|          |                |                          | }                                         |");
   printf("\n|          |        ________|___________               | int add(int a,int b)                      |");
   printf("\n|          |        | function of body |               | {                                         |");
   printf("\n|          |        |__________________|               |  int sum ;                                |");
   printf("\n|          |                                           |  sum=a+b;                                 |");
   printf("\n|          |                                           |  return sum;                              |");
   printf("\n|          |                                           |  }                                        |");
   printf("\n|__________|___________________________________________|___________________________________________|");








}
