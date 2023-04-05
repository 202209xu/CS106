// pch.cpp: 与预编译标头对应的源文件

#include "random.h"
#include <random>
#include "cmath"
#include "ctime"
using namespace std;

void initRandomSeed();

int randomInteger(int low, int high) {
	initRandomSeed();
	double d = rand() / (double(RAND_MAX) + 1);
	double s = d * (double(high) - low + 1);
	return int(floor(low + s));
}

double randomReal(double low, double high) {
	initRandomSeed();
	double d = rand() / (double(RAND_MAX) + 1);
	double s = d * (high - low);
	return low +s;

}

bool randomChance(double p) {
	initRandomSeed();
	return randomReal(0, 1) < p;
}

void setRandomSeed(int seed) {
	initRandomSeed();
	srand(seed);
}

void initRandomSeed() {
	static bool initialized = false;
	if (!initialized) {
		srand(int(time(NULL)));
		initialized = true;
	}
}
// 当使用预编译的头时，需要使用此源文件，编译才能成功。
