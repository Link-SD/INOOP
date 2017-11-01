#pragma once
class Ticket
{
public:
	Ticket();
	Ticket(float price);
	Ticket(float price, float surcharge);
	~Ticket();

	float get_ticket_price();
};

