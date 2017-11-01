#include "Train.h"



Train::Train()
{
}

Train::Train(const std::string& name) : PublicTransport(name)
{
}

float Train::get_ticket_price()
{
	return 7.64f;
}

int Train::get_capacity()
{
	return 200;
}

float Train::get_price_per_km()
{
	return 0.80f;
}
Train::~Train()
{
}
