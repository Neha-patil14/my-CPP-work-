/*hackerrank problem-
Printing
To print a data type, use the following syntax:

printf("`format_specifier`", val)
For example, to print a character followed by a double:

char ch = 'd';
double d = 234.432;
printf("%c %lf", ch, d);
*/
#include <iostream>
#include <cstdio>
using namespace std;

int main() {
    int integer;
    long integer1;
    char ch;
    float number;
    double number1;
    cin>>integer>>integer1>>ch>>number>>number1;
   printf("%d\n%ld\n%c\n%.3f\n%.9lf\n", integer,integer1, ch,number, number1);

    return 0;
}