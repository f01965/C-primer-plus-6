#ifndef WINE_H_
#define WINE_H_
#include <iostream>
#include <valarray>
#include <string>
#include "pairs.h"
class Wine :private std::string, private Pair<std::valarray<int>, std::valarray<int>>
{
private:
	typedef std::valarray<int> ArrayInt;
	typedef Pair<ArrayInt, ArrayInt> PairArray;
	//std::string  label_;
	//PairArray    data_;
	int          years_;
public:
	Wine();
	Wine(const char *l, int y, const int yr[], const int bot[]);
	Wine(const char *l, int y);
	~Wine();
	void GetBottles();
	const std::string & Label() const { return (const std::string &) *this; }
	int mysum() const;
	void Show() const;
};


#endif
