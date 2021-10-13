#include <unistd.h>

void mx_printchar(char c);

void mx_print_alphabet(void) {
	for(int i = 0; i < 26; i++) {
		char c;
		if(i % 2 == 0) {
		    c = i + 65;
		    mx_printchar(c);
		}
		else {
		    c = i + 97;
		    mx_printchar(c);
		}
	}
	mx_printchar('\n');
}
