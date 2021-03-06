#include "crow_all.h"


int main()
{
	crow::SimpleApp app;
	crow::mustache::set_base(".");

	CROW_ROUTE(app, "/")([]() {
		return crow::mustache::load("assets/index.html").render();
	});

	CROW_ROUTE(app, "/index.js")([]() {
		return crow::mustache::load("assets/index.js").render();
	});

	app.port(5000).multithreaded().run();
}

