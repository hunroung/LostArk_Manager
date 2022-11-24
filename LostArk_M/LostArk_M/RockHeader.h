#include <ctime>
#include <string>
#include <iostream>
#include <stdlib.h>

using namespace System;

namespace Rock {
	public ref class Rocksimulator 
	{
	public:
		int abil1_count = 0;
		int abil2_count = 0;
		int abil3_count = 0;
		int p = 75;
		Rocksimulator() {
			srand((unsigned int)time(NULL));
		}
		int rock_simul() {
			int num = rand() % 100;
			if (num < p) {
				if (p != 25)
					p -= 10;
				return 1;
			}
			else {
				if (p != 75)
					p += 10;
				return 2;
			}
		}
	};
}