#include <stdio.h>

int main(void) {
	//q23_1_1();
	//q23_2_1();
	return 0;
}

typedef struct {
	int xpos;
	int ypos;
} Point;

typedef struct {
	Point left;
	Point right;
}Rectangle;

int q23_1_1(void) {
	Point pos1 = { 2, 4 };
	Point pos2 = { 5, 7 };
	swapPoint(&pos1, &pos2);
	printf("[%d %d] \n", pos1.xpos, pos1.ypos);
	printf("[%d %d] \n", pos2.xpos, pos2.ypos);
	return 0;
}

int swapPoint(Point *pt1, Point *pt2) {
	int tmp_x, tmp_y;
	Point res;

	tmp_x = pt1->xpos;
	pt1->xpos = pt2->xpos;
	pt2->xpos = tmp_x;

	tmp_y = pt1->ypos;
	pt1->ypos = pt2->ypos;
	pt2->ypos = tmp_y;
}

int q23_2_1(void) {
	Rectangle rect = { {0, 0}, {100, 100} };
	area(rect);
	return 0;
}

int area(Rectangle rect) {
	printf("area: %d", (rect.right.xpos - rect.left.xpos) * (rect.right.ypos - rect.left.xpos));
	return 0;
}