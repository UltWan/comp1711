Assignment README 4

Notes: 

This program is designed to read in text files and describe the text in these files in either hexadecimal, decimal or formatted character output (hexadecimal along with characters).

All work is in the print.c file, it can be opened and viewed in any text editor.

Other files that needed to run the program are the hexdump.o and print.h files, however the makefile will automatically handle these files in the compilation process as long as they are in the same folder.


In order to run the file it must first be complied, which is done with the makefile. To do this on Linux, go to the directory containing the makefile, hexdump.o, print.c and print.h files, then enter the following command into the terminal:
	./make
The compilation is successful if it reports that the makefile is up to date or it has been complied, and therefore updated.

Then execute the file with the command, xxxx being the name of the file that is to be read in:
	./myhexdump xxxx	for hexadecimal output
	./myhexdump -d xxxx	for decimal output
	./myhexdump -c xxxx	for formatted character output



