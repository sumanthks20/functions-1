#include <stdio.h>
#include <stdlib.h>

int main()
{
    printf("\n*********** Preprocessor Directive *************\n\n\n");
    printf(" Preprocessor is a program which in invoked by compiler before the compilation of user written program. The declaration of processors statements always begin with (#),usually these are placed before the main() function.\n\n");
    printf(" #include :Specifies the files to be included\n");
    printf(" #define :defines a macro substitution\n");
    printf(" #undef :undefining a macro\n");
    printf(" #ifdef :verifies whether macro is define or not\n");
    printf(" #ifndef :verifies whether macro is defined or not, if it is not defined, it assumes condition to be true\n");
    printf(" #if :used to write generalized condition using relation operator\n");
    printf(" #else :used as an alternative to #if\n");
    printf(" #error :prints error message on stdrr\n");
    printf(" #pragma :give special commands to compiler using standardized method\n");
    printf(" #endif :ends the #if statements\n\n\n");
    printf(" #include\n\n #include loads specified file before compilation of user written program.\n");
    printf(" syntax:\n  #include<header_file_name.h> or  #include\"header_file_name.h\"\n example:\n #include<stdio.h> or #include\"stdio.h\"\n\n");
    printf(" example program\n #include<stdio.h>\n #include<conio.h>\n void main()\n {\n  printf(\" hello world\");\n  getch();\n }\n\n\n");
    printf(" #define\n\n #define defines a macro substitution.\n\n Macro definition : It allows to replace an identifier (variables,function names) in a program by a predefined string.\n\n");
    printf(" syntax:\n  #define identifier string\n example:\n #define pi 3.142\n\n");
    printf(" 1)simple example program\n #include<stdio.h>\n #define pi 3.142\n void main()\n {\n  float r=11.2,area;\n  area=pi*r*r;\n  printf(\" area is %%f\",area);\n  getch();\n }\n\n\n");
    printf(" 2)calculation itself can be defined as macro\n #include<stdio.h>\n #define area(r) (r*r*3.142)\n void main()\n {\n  float x,r=11.2;\n  x=area(r)\n  printf(\" area is %%d\",x);\n  getch();\n }\n\n\n");
    printf(" 3)looping and conditional statements\n #include<stdio.h>\n #define check(x) (if(x%2==0))\\n printf(\"even\");\\nelse\\n printf(\"odd\");\n void main()\n {\n  int x;\n  printf(\"enter the number\");\n  scanf(\"%%d\",&x);\n  check(x);\n  getch();\n }\n\n\n");
    printf(" 4)nested macro can defined with another macro\n #include<stdio.h>\n #define square(a) (a*a)\n #define cube(a) (square(a)*a)\n void main()\n {\n  int a,z;\n  printf(\"enter the number\");\n  scanf(\"%%d\",&x);\n  z=cube(a);\n  printf(\" cube is %%d\",z);\n  getch();\n }\n\n\n");
    printf(" #undef\n\n it undefines macro which is defines using #define.\n");
    printf(" syntax:\n  #undef identifier (macro name)\n example:\n #undef pi\n\n");
    printf(" example program\n #include<stdio.h>\n #define pi 3.142\n void main()\n {\n  float r=11.2,area;\n  #undef pi\n  area=pi*r*r;\n  printf(\" area is %%f\",area);\n  getch();\n }\n\n\n");
    printf(" output :\n it gives an error as pi undefined symbol as it is undefined using #undef after its defination #define\n\n\n");
    printf(" Compiler control directives \n\n");
    printf(" #ifdef, #ifndef, #if,#else are the preprocessor directives which allows the programmer to include macro definition or header files based on condition specified. These are called as Compiler control directives\n");
    printf(" #ifdef\n\n  #ifdef checks whether macro is defined or not.\n syntax: #ifdef identifier /*macro name*/\n ex : #ifdef pi\n\n");
    printf(" example\n #include<stdio.h>\n #define pi 3.142\n void main()\n {\n  #ifdef pi\n    printf(\"area of circle can be calculated\");  #else\n   printf(\"area cannot be calculated as pi undefined\\n\");  #endif\n  getch();\n }\n output:area of circle can be calculated\n\n");
    printf(" #include<stdio.h>\n void main()\n {\n  #ifdef pi\n    printf(\"area of circle can be calculated\");  #else\n   printf(\"area cannot be calculated as pi undefined\\n\");  #endif\n  getch();\n }\n output:area of circle cannot be calculated as pi is undefined\n\n");
    printf(" In the first perform pi is defined hence it shows area of circle can be calculated,but in second program pi is undeclared so it shows are cannot be calculated\n\n\n");
    printf(" #ifndef\n  #ifndef check whether macro is defined or not if it is not defined it assume it is true\n  syntax: #ifndef identifier\n #ifndef pi\n");
    printf(" example\n #include<stdio.h>\n #define pi 3.142\n void main()\n {\n  #ifdef pi\n    printf(\"area of circle can be calculated\");  #else\n   printf(\"area cannot be calculated as pi undefined\\n\");  #endif\n  getch();\n }\n output:area of circle can be calculated\n\n");
    printf(" #include<stdio.h>\n void main()\n {\n  #ifdef pi\n    printf(\"area of circle can be calculated\");  #else\n   printf(\"area cannot be calculated as pi undefined\\n\");  #endif\n  getch();\n }\n output:area of circle cannot be calculated as pi is undefined\n\n\n");
    printf(" #error\n\n #error prints error message on std output display user defined error message\nsyntax : #error \"user error message.\n\"\n ex #error pi not defined\n\n");
    printf(" #include<stdio.h>\n #include<conio.h>\n void main()\n {\n  #ifdef pi\n    printf(\"area of circle can be calculated\");  #else\n   #error \"pi not defined.\"  #endif\n  getch();\n }\n output:area of circle cannot be calculated as pi is undefined. error message stating pi is undefined\n\n");
    printf(" #pragma\n\n #pragma gives special commands to compiler using standardized method. It is mainly used to on or off the warnings\n\n");
    printf(" syntax :\n #pragma war +warning message notation\n #pragma warn -warning message notation.\n  +turns on warning\n  -turns off warning\n");
    printf(" stu                :       undefined structure\n");
    printf(" eff                :       code has no effect\n");
    printf(" rch                :       unreachable code\n");
    printf(" rvl                :       function should return a value\n");
    printf(" voi                :       void function cannot return a value\n\n");
    printf(" example :\n   #pragma warn +rch turns on unreachable code warning.\n   #pragma warn -rch turns off unreachable code warning.\n\n");


}
