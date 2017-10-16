// Lab 2 Task 1.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <string>
#include <iostream>


struct timeType

{

	int hr;
	double min;
	int sec = 0;

};

struct tourType

{

	std::string cityName;
	int distance;
	timeType travelTime;

};

void DataDisplay(tourType TourDestination);

tourType DataInput();

void DataPassThrough(tourType TourDestination);

int main()
{

	tourType destination;

	destination = DataInput();

	DataPassThrough(destination);

	DataDisplay(destination);

	return 0;
}

void DataDisplay(tourType TourDestination)
{
	std::cout << TourDestination.cityName << std::endl;
	std::cout << TourDestination.distance << " miles" << std::endl;
	std::cout << TourDestination.travelTime.hr << " hours " << TourDestination.travelTime.min << " minutes " << TourDestination.travelTime.sec << " seconds" << std::endl;
}

tourType DataInput()
{
	
	tourType destination;

	destination.cityName = "Nottingham";
	destination.distance = 130;
	destination.travelTime.hr = 3;
	destination.travelTime.min = 15;

	return destination;
}

void DataPassThrough(tourType TourDestination)
{
	tourType destination;

	destination = TourDestination;

	DataDisplay(destination);
}