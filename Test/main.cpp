#include <iomanip>
#include <stdio.h>

using namespace std;

int main(){
	char* filename = "test.txt";
	FILE* fin = fopen(filename, "r");
	char a;
	if (fin){
		a = fgetc(fin);
		printf("The first character: %c\n", a);
		fclose(fin);
	}
}