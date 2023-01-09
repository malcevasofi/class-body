/*
	Body.h
	Maltseva S.A., 09.01.2023
*/

class Body
{
	double density;
	public:
		// constructor
		Body(double d = 1.0)
			: density(d) {}
		//virtual destructor
		virtual ~Body() {}
		// pure virtual method
		virtual double Volume() const = 0;
		double Mass() const;
};

class Cube : public Body
{
	double length;
	public:
		//constructor
		Cube(double l, double d)
			: Body(d), length(l) {}
		// virtual destructor
		virtual ~Cube() {}
		// virtual method
		virtual double Volume() const;
};

class Tetrahedron : public Body
{
	double length;
	public:
		//constructor
		Tetrahedron(double l, double d)
			: Body(d), length(l) {}
		// virtual destructor
		virtual ~Tetrahedron() {}
		// virtual method
		virtual double Volume() const;
};
