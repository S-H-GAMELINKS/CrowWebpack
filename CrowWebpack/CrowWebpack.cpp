#include "crow_all.h"


int main()
{
	crow::SimpleApp app;
	crow::mustache::set_base(".");

	CROW_ROUTE(app, "/")([]() {

		return crow::mustache::load("assets/index.html").render();
	});

	app.port(5000).multithreaded().run();
}

