/*
	Body.cpp
	Maltseva S.A., 09.01.2023
*/

#include "Body.h"
#include <cmath>

// method for calculating the mass
double Body::Mass() const
{
	return (density * Volume());
}

// virtual method for calculating the cube volume
double Cube::Volume() const
{
	return (length * length * length);
}

// virtual method for calculating the tetrahedron volume
double Tetrahedron::Volume() const
{
	return (length * length * length * sqrt(2) / 12);
}
