#include <stdio.h>

void string_to_dash(const char *str);

void string_to_dash(const char *str) {
	while(*str) {
		if(*str == ' ') {
			printf("%c", '-');
		}
		else {
			printf("%c", *str);
		}
		str++;
	}
}

int main(int argc, char const *argv[]) {
	string_to_dash("This is a test");
	return 0;
}