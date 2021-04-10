#include "../math_inc/Vec2Di.h"
using namespace am;

math::Vec2Di::Vec2Di()
	:
	Vec2Di(0, 0)
{
}


math::Vec2Di::Vec2Di(int x1, int x2)
	:
	x1{x1},
	x2{x2}
{
}

math::Vec2Di::Vec2Di(const Vec2Di& another)
	:
	Vec2Di(another.x1, another.x2)
{
}
