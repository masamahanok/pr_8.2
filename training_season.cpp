#include<stdio.h>
#include<string.h>
#include<ctype.h>

int main() {
	char str[256], s1[50], s2[50];
	printf("Rydok ");
	fgets(str, sizeof(str), stdin);
	str[strcspn(str, "\n")] = '\0';
	printf("s1 ");
	fgets(s1, sizeof(s1), stdin);
	s1[strcspn(s1, "\n")] = '\0';
	printf("s2 ");
	fgets(s2, sizeof(s2), stdin);
	s2[strcspn(s2, "\n")] = '\0';
}