#include <iostream>


#include "PineApi.h"

class ClientApp : public Pine::Application
{
public:
	~ClientApp()
	{

	}

	ClientApp()
	{

	}


private:


};


// Global Symbol
Pine::Application* CreateApplication() 
{
	return new ClientApp();
}