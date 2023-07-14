#pragma once

#include <string>

using namespace System;

void res()
{
	
}

struct Time {
	int hours;
	int minutes;

};
struct Theater {
	std::string id;
	int capacity[7];
	int reseved_seats[7];
};
struct Screen_info {
	Theater hall;
	Time time;
};
struct movie {
	std::string title;
	std::string Director;
	std::string Actors[4];
	std::string rating;
	Screen_info screen_info;
};

movie movies[5];
int price = 100;
int remtick = 0;

std::string z;

int Globtime = 616;