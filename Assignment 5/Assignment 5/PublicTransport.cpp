#include "PublicTransport.h"
#include <iostream>


PublicTransport::PublicTransport()
{
}

PublicTransport::PublicTransport(const std::string& type) : _type(type)
{
	_ticket = new Ticket();
}

PublicTransport::PublicTransport(const std::string& type, Ticket* ticket)
	: _type(type), _ticket(ticket)
{
}


PublicTransport::~PublicTransport()
{
	delete _ticket;
}


float PublicTransport::get_profit_per_ride()
{
	float ticketProfit = get_capacity() * get_ticket_price();
	float distanceProfit = get_price_per_km() * amountOfKm;

	return ticketProfit + distanceProfit;
}

float PublicTransport::get_profit_for_passengers(int passengers)
{
	float ticketProfit = passengers * get_ticket_price();
	float distanceProfit = get_price_per_km() * amountOfKm;

	return ticketProfit + distanceProfit;
}

void PublicTransport::report()
{
	std::cout << "Reporting:" << _type << "\nPrice Per KM: " << get_price_per_km() << "\nTicket Price: " << get_ticket_price()
		<< "\nCapacity: " << get_capacity() << "\nProfit Per Ride: " << get_profit_per_ride() << std::endl;
	std::cout << "----------------- \n" << std::endl;
}
