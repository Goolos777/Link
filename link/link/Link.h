#pragma once
#include <iostream>
#include <ctime>
#include <Windows.h>
using namespace std;

class Link
{
	int number;
	Link *link;
public:
	Link();
	bool operator==(const Link &l)const;
	~Link();
	friend std::ostream &operator<<(std::ostream&, Link&);
};