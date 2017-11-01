#pragma once
#include "PublicTransport.h"
class Train :
	public PublicTransport
{
public:
	Train();
	Train(const std::string& name);

	float get_ticket_price() override;
	int get_capacity() override;
	float get_price_per_km() override;
	~Train();
};

