#pragma once
#include <string>
#include "Ticket.h"

class PublicTransport
{
public:
	PublicTransport();
	PublicTransport(const std::string& name);
	~PublicTransport();
	
	virtual float get_ticket_price() = 0;
	virtual int get_capacity() = 0;
	virtual float get_price_per_km() = 0;
	virtual float get_profit_per_ride();
	virtual float get_profit_for_passengers(int passengers);
	virtual void report();

public:
	float amountOfKm = 10;

protected:
	float _pricePerKM;
	int _capacity;

private:
	std::string _type;
};

