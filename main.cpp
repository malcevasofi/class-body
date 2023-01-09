/*
	main.cpp
	Maltseva S.A., 09.01.2023
*/

#include "Body.h"
#include <cstdio>

// main function
int main()
{
	const Body * p, * q, * r;
	Cube a(2, 10), b(5, 0.1);
	Tetrahedron t(6, 2.5);
	p = &a, q = &b, r = &t;
	printf("Volumes: %3.3f %3.3f %3.3f\n",
			p->Volume(), q->Volume(), r->Volume());
	printf("Weights: %3.3f %3.3f %3.3f\n",
			p->Mass(), q->Mass(), r->Mass());
	return 0;
}
