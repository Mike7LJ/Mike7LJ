/* ​ */

#include <stdio.h>
#include <string.h>
//define patterns fro each letter A-Z (5X5 Block)
const char *letters [26](5) = {
	{"  *  ", " * * ", "*****", "*   *", "*   *"}
	{"**** ", "*   *", "**** ", "*   *", "**** "}};
// Print the name in stars rowe by row
for (int row=0; row<5; row++) { // 5 rows for each letter
	for (int i=0; i<len; i++) { // Loop thriugh each letter
		char ch=name[i];
		// convert lowercase to uppercase
		if (ch>= 'a' && ch<= 'z'){
			ch -= 32;
		}
		// print the coreesponding letter pattern or spaces for unsported characters
		if (ch>= 'A' && ch<= 'Z'){
			printf("%s ", letters[ch - 'A'][row]);
		}else{
			printf("     "); // space for unsupported chareaters
		}
	}
	printf("\n"); // Move to next line after printing all letters
}

// patorjk.com
	return 0;
}