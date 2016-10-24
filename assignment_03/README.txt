Assignment 3 README

Notes:

- When opening in a text editor, the code is intended to be viewd with Text Wrapping turned off, due to large nature of the stored array.

- The input is designed to be less than 100 characters long.

- The ordering of characters in the array is based on the ASCII table and each asterisk character is labelled in the textbanners.c file itself.

- Numbers 0-9 are included in the array, but are not stored in asterisk form.  If a number is entered it will simply display "n/a"; this will not affect the rest of the input provided they are valid characters that exist in the array.

- Invalid characters that are not included in the array will result the code stopping and not producing any further asterisk characters from the array.


All work is in the textbanners.c file, it can be opened and viewed in any text editor.

In order to run the file it must first be complied, to do this on Linux, enter the following command into the terminal:
	gcc -c -o textbanners.o textbanners.c

Then the file needs to be linked with the following command:
	gcc -o textbanners textbanners.o

Finally execute the file with the command:
	./textbanners
