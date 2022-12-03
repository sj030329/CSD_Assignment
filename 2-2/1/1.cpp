#include <stdio.h>

typedef struct
{
	double x;
	double y;
} Point;

typedef struct
{
	char name[7];
	Point points[3];
} Person;

int main(void) {
	Person persons[3];
	for (int i = 0; i < 3; i++){
		scanf("%s %lf %lf %lf %lf %lf %lf", persons[i].name, &persons[i].points[0].x, &persons[i].points[0].y, &persons[i].points[1].x, &persons[i].points[1].y, &persons[i].points[2].x, &persons[i].points[2].y);
	}

	for (int i = 0; i < 3; i++){
		printf("%s (%g %g) (%g %g) (%g %g)\n", persons[i].name, persons[i].points[0].x, persons[i].points[0].y, persons[i].points[1].x, persons[i].points[1].y, persons[i].points[2].x, persons[i].points[2].y);
	}
	return 0;
}
