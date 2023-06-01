#include <stdio.h>
#include <string.h>
#include <math.h>

enum type {TRI, REC, CIR};

struct Triangle {
	double w;
	double h;
};
struct Rectangle {
	double x;
	double y;
};
struct Circle {
	double r;
};
union P {
	struct Triangle T;
	struct Rectangle R;
	struct Circle C;
};
struct Polygon {
	enum type kind;
	union P poly;
};

int main() {
	int type;
	union P s1;
	scanf("%d", &type);

	if(type == 0) { // 삼각형
		scanf("%lf", &s1.T.w);
		scanf("%lf", &s1.T.h);
		printf("%lf", s1.T.w * s1.T.h / 2);
	}
	else if (type == 1){ // 사각형
		scanf("%lf", &s1.R.x);
		scanf("%lf", &s1.R.y);
		printf("%lf", s1.R.x * s1.R.y);
	}
	else if (type == 2) { // 원
		scanf("%lf", &s1.C.r);
		printf("%lf", 3.14*pow(s1.C.r, 2));
	}
}
