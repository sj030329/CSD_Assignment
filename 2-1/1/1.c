# include <stdio.h>

struct Book{
	char name[20];
	int year;
};

int main() {
	struct Book s1[4];
	for (int i = 0; i < 4; i++){
		scanf("%S %d", s1[i].name, &s1[i].year);
	}
	for (int i = 0; i < 4; i++){
		printf("Name: %s, ", s1[i].name);
		printf("Published Year: %d\n", s1[i].year);
	}
	return 0;
}
