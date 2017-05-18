#pragma once
#ifndef RANDOM_H
#define RANDOM_H

#include <cstdlib>
#include <ctime>

class Random
{
public:

	double zero_to_one()
	{
		return double(rand()) / RAND_MAX;
	}

	int zero_to_n(int n)
	{
		return int(zero_to_one()*n);
	}
};

#endif