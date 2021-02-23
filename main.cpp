#include <iostream>
#include "first.h"

using namespace std;

int main()
{

    if ( welcome_message() )
        cout << "Hello World!\n" << std::endl; 
    else 
        cout << "O.K.\n" << std::endl;

/*
Initializing chars

You can initialize  char variables using character literals:
*/

char ch2 { 'a' }; // initialize  with code point for  'a'  (stored  as integer 97) (preffered)
cout << ch2 << '\n';

char ch3 { 98 }; // code print for 'b' (not preffered)
cout << ch3 << '\n'; // cout prints a character ('b')

cout << "c" << '\n' << endl;// we can also output char literals directly

/*
Printing chars as integers via type casting

One (poor) way to do this is by assigning the char to an integer, and printing the integer:
*/

char ch { 97 };
int i(ch); //assing the value of ch to an integer
cout << i << '\n' << endl; //print the integer value

/*
However, this is clunky. A better way is to use a type cast. A type cast creates a value of
one type from a value of another type. To convert between fundamental data types (for example, 
from a char to an int, or vice versa), we use a type cast called a static cast.
The syntax for the static cast looks a little funny: 

static_cast<new_type>(expression)

static_cast takes the value from an expression as input, and converts it into whatever fundamental 
type new_type represents (e.g. int, bool, char, double).

Here’s using a static cast to create an integer value from our char value:
*/

char ch4 { 'd' };
cout << ch4 << '\n';
cout << static_cast<int>(ch4) << '\n';
cout << ch4 << '\n' << endl;

/*
Inputting chars

The following program asks the user to input a character,
then prints out both the character and its ASCII code:
*/

inputting_chars();

/*
Escape sequences

Three other notable escape sequences are:
\’ prints a single quote
\” prints a double quote
\\ prints a backslash

*/

//‘\n’, which can be used to embed a newline in a string of text:
cout << "First linie\nSecond linie\n" << '\n' << endl;

//Another commonly used escape sequence is ‘\t’, which embeds a horizontal tab:
cout << "First part\tSecond part" << '\n' << endl;

char just_example { 'G' };
cout << just_example;






    return 0;
}

