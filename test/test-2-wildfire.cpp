#include "catch/catch.hpp"
#include "../wildfire.hpp"
#include <sstream>

TEST_CASE("Testing custom map")
{
	Wildfire wf ("map.txt");
	std::ostringstream oss;
	oss << wf;
	CHECK("W W W W \nW T T W \nW T T W \nW W W W \nW T T W \n" == oss.str());
}

TEST_CASE("Testing StartFire on custom map")
{
	Wildfire wf ("map.txt");
	std::ostringstream oss;
	wf.StartFire (1,1);
	oss << wf;
	CHECK("W W W W \nW F F W \nW F F W \nW W W W \nW T T W \n" == oss.str());

	wf.StartFire (1,1);
	CHECK("W W W W \nW F F W \nW F F W \nW W W W \nW T T W \n" == oss.str());

	wf.StartFire (4,1);
	oss.str("");
	oss << wf;
	CHECK("W W W W \nW F F W \nW F F W \nW W W W \nW F F W \n" == oss.str());
}
