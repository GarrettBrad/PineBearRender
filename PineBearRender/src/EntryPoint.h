#pragma once

#include "PineBearRender.h"
#include "Application.h"


extern Pine::Application* CreateApplication();

int main()
{
	auto app = CreateApplication();

	app->Run();

	delete app;
}