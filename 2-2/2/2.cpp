#include <stdio.h>
#include <math.h>

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
		int d = sqrt(pow(persons[i].points[0].x, 2) + pow(persons[i].points[0].y, 2));
		int n = 0;
		for (int j = 1; j < 3; j++){
			if (sqrt(pow(persons[i].points[j].x, 2) + pow(persons[i].points[j].y, 2)) > d){
				d = sqrt(pow(persons[i].points[0].x, 2) + pow(persons[i].points[0].y, 2));
				n = j;
			}
		}
                printf("%s (%g, %g)\n", persons[i].name, persons[i].points[n].x, persons[i].points[n].y);
        }
        return 0;
}
