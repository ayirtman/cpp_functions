#include <iostream>
#include <vector>
#include "profile.h"

int main() {

	Profile sam("Sam Drakkila", 30, "New York", "USA", "he/him");
	sam.add_hobby("Listening Music");
	sam.add_hobby("Reading");
	sam.add_hobby("Writing");
	sam.add_hobby("playing");


	std::cout << sam.view_profile();
}