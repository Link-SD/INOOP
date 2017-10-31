#include "Bus.h"



Bus::Bus()
{
}

Bus::Bus(const std::string& name) : PublicTransport(name)
{
}

Bus::Bus(const std::string& name, Ticket* ticket) : PublicTransport(name, ticket)
{
}

float Bus::get_ticket_price()
{
	return 1.0f;
}

int Bus::get_capacity()
{
	return 40;
}

float Bus::get_price_per_km()
{
	return 1.20f;
}

Bus::~Bus()
{
	
}
