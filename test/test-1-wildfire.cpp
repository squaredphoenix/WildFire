#include "catch/catch.hpp"
#include "../wildfire.hpp"
#include <sstream>

TEST_CASE("Testing default constructor")
{
	Wildfire wf;
	std::ostringstream oss;
	oss << wf;
	CHECK("T T T T T \nT T T T T \nT T T T T \nT T T T T \nT T T T T \n" == oss.str());
}
TEST_CASE("Testing StartFire with a map of all trees")
{
	Wildfire wf;
	std::ostringstream oss;
	wf.StartFire (-1 , 4); // wrong coordinates
	oss << wf;
	CHECK("T T T T T \nT T T T T \nT T T T T \nT T T T T \nT T T T T \n" == oss.str());

	oss.str("");
	wf.StartFire(0,0);
	oss << wf;
	CHECK("F F F F F \nF F F F F \nF F F F F \nF F F F F \nF F F F F \n" == oss.str());
}
