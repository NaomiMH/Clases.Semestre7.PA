# P9. Pointers and Arrays, Strings and streams
The Agency is working on a huge development that. Some funcionality has been pased to you. Design the source code for the following routines:

- int asciiBinaryToInt(char *s): This routine returns an integer, corresponding to the input string, that codifies a binary number; consider that the string internal characters are just '0' and '1', with a maximum length of 32. Also, consider that the conversion should be finished reaching a null or any invalid characer.
- int asciiHEXToInt(char *s): This routine returns an integer, corresponding to an equivalent decimal number converted from a hexadecimal, represented in sequence of characters in the input string; consider that the only alowed characters are from '0' to '9', from 'A' to 'F' and from 'a' to 'f', with a maximum string length of 8 characters .. any invalid character will finish the conversion process, so the acumulated result will be returned.
- double asciiToDouble(char *s): This routine returns a double precision float number, corresponding to an sequence of digit characters in the input string, with the optional single appearance of the sign ('+' or '-') and decimal point ('.') to commit with a valid representation for a real number, with integers and decimals; any invalid character will finish the conversion process, so the acumulated result will be returned.

Implement a program named convert.exe to convert the sequence of hexadecimal numbers that the user inputs using the command line to the corresponding decimals. Consider that the user may input as many numbers as desired and any invalid number should not be converted and output an error message. As part of your solution, include a screenshot of your running program, with several inputs.

When you are done, please upload your code on a word document. This document must contain two different test cases and proof it worked (in the form of pictures or video).

Tips:

Remember to apply the coding standard, or you can loose up to 20% of your assignment
Use pointers to move arround the string.
