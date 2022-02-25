#include "catch/catch.hpp"
#include "../wildfire.hpp"
#include <sstream>


TEST_CASE("Testing StartFire on custom map from a W cell")
{
	Wildfire wf ("map.txt");
	std::ostringstream oss;
	wf.StartFire (0,0);
	oss << wf;
	CHECK("W W W W \nW T T W \nW T T W \nW W W W \nW T T W \n" == oss.str());
}
