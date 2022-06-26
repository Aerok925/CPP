#include "../incs/Point.hpp"
#include "../incs/Fixed.hpp"

bool bsp(Point const a, Point const b, Point const c, Point const point){
	float step[3];

	step[0] = ((a.getX() - point.getX()) * (b.getY() - a.getY()) - (b.getX() - a.getX()) * (a.getY() - point.getY())).toFloat();
	step[1] = ((b.getX() - point.getX()) * (c.getY() - b.getY()) - (c.getX() - b.getX()) * (b.getY() - point.getY())).toFloat();
	step[2] = ((c.getX() - point.getX()) * (a.getY() - c.getY()) - (a.getX() - c.getX()) * (c.getY() - point.getY())).toFloat();
//	std::cout<<step[0]<<" "<<step[1]<<" "<< step[2]<<std::endl;
	if ((step[0] > 0 && step[1] > 0 && step[2] > 0) || (step[0] < 0 && step[1] < 0 && step[2] < 0))
		return (1);
	return (0);
}

int main( void ) {
		Point a1(-2.1f, 6);
		Point b2(5.2f, 3);
		Point c3(6, 7);
		Point point(-1, 6);

		std::cout<<bsp(a1, b2, c3, point);
}
