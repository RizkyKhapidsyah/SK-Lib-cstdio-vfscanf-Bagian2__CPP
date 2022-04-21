#pragma warning(disable:4996)

#include <cstdio>
#include <cstdarg>
#include <conio.h>

/*
	Source by Programiz
	Modified For Learn by RK
	I.D.E : VS2019
*/

void read(FILE* fp, const char* format, ...) {
	va_list args;
	va_start(args, format);
	vfscanf(fp, format, args);
	va_end(args);
}

int main() {
	char temanSaya[5][20] = { "Ratna", "Kebetulan", "Siapa", "Batu", "Mouse" };
	FILE* fp = fopen("contoh.txt", "w+");
	char name[20];

	for (int i = 0; i < 5; i++) {
		fprintf(fp, "%s ", temanSaya[i]);
	}
		
	rewind(fp);

	printf("Ini Adalah daftar teman saya\n");

	for (int i = 0; i < 5; i++) {
		read(fp, "%s ", &name);
		printf("%s\n", name);
	}

	fclose(fp);

	_getch();
	return 0;
}