#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<string.h>
#include<ctype.h>

void replaсe(char* str, const char* s1, const char* s2) {
	char buffer[256];
	char* pos = str;
	while ((pos = strstr(pos, s1)) != NULL) {     //strstr шукає s1 в str (з початку pos), якщо знаходить то повертає адресу де слово починається
		strncpy(buffer, str, pos - str);          //копіює в буфер все що до знайденого
		buffer[pos - str] = '\0';                 //додає нуль в кінець буфера
		strcat(buffer, s2);                       //додає s2 в буфер
		strcat(buffer, pos + strlen(s1));         //додає в буфер все що після знайденого
		strcpy(str, buffer);                      //переписуємо оригінал зміненим
		pos += strlen(s2);                        
	}
}

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

	replaсe(str, s1, s2);
	printf("Result: %s\n", str);

	return 0;
}