#include <generateStat.h>
#include <random>

short int generateStat(float multiplier) {
	int x = rand() % 100;
	int yRange = rand() % 10 + 15;
	int y = rand() % (100 - 2 * yRange) + yRange;
	int offset = 0;
	if ((x + y) / 2 * multiplier > 40 and (x + y) / 2 * multiplier < 60) {
		offset = rand() % 14 - 7;
	}
	return ((x + y) / 2 * multiplier) + offset;
}