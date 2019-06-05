/*예제 : 12장 보충 자료
  201914023 정우진*/

#include <stdio.h>
#include <string.h>

int main() {
	char s[100], *p;
	puts(strcpy(s, "ab#"));
	puts(strncpy(s, "ABC", 2));
	puts(strncpy(s, "12", 3));
	strcpy(s, "AB"), puts(strcat(s, "123"));
	strcpy(s, "AB"), puts(strncat(s, "123", 2));
	printf("%d\n", strcmp("가", "a"));
	printf("%d\n", strcmp("a", "A"));
	printf("%d\n", strcmp("A", "0"));
	printf("%d\n", strcmp("ab", "ab"));
	printf("%d\n", strcmp("ab", "abc"));
	if (!strncmp("abc", "abC", 2)) printf("equal\n");
	if ((p = strchr("abab", 'b'))) puts(p);
	if ((p = strrchr("abab", 'a'))) puts(p);
	if ((p = strstr("AABC", "AB"))) puts(p);
	return 0;
}