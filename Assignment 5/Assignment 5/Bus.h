#pragma once
#include "PublicTransport.h"
class Bus :
	public PublicTransport
{
public:
	Bus();
	Bus(const std::string& name);
	Bus(const std::string& name, Ticket* ticket);

	float get_ticket_price() override;
	int get_capacity() override;
	float get_price_per_km() override;

	~Bus();
};

