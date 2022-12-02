#include <stdio.h>

typedef struct{
	int xpos;
	int ypos;
}Point;

Point PointgetScale2xPoint(const Point* p){
	Point n;
	n.xpos = (p->xpos)*2;
	n.ypos = (p->ypos)*2;
	return n;
}
void swapPoints(Point*p1, Point*p2){
	int temp1 = p1->xpos;
	int temp2 = p1->ypos;
	p1->xpos = p2->xpos;
	p1->ypos = p2->ypos;
	p2->xpos = temp1;
	p2->ypos = temp2;
}
int main(void){
	Point p1;
	Point p2;
	scanf("%d %d", &p1.xpos, &p1.ypos);
	scanf("%d %d", &p2.xpos, &p2.ypos);
	p1 = PointgetScale2xPoint(&p1);
	p2 = PointgetScale2xPoint(&p2);
	printf("Calling getScale2xPoint()\n");
	printf("P1 : %d %d\n", p1.xpos, p1.ypos);
	printf("P2 : %d %d\n", p2.xpos, p2.ypos);
	swapPoints(&p1, &p2);
	printf("Calling swapPoint()\n");
	printf("P1 : %d %d\n", p1.xpos, p1.ypos);
	printf("P2 : %d %d\n", p2.xpos, p2.ypos);
}
