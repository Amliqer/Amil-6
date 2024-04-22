#include <iostream>
#include <string>
#include <httplib.h>
#include <nlohmann/json.hpp>

using namespace std;

class StarWikiWars {
	std::string CharacterRequest = "/api/people/1/";
	std::string PlanetRequest = "/api/planets/1/";
	std::string MovieRequest = "/api/films/1/";
	httplib::Client* c1 = new httplib::Client("https://swapi.dev");
public:
	StarWikiWars();

	nlohmann::json getInfoChar(string num);

	nlohmann::json getInfoPlanet(string num);

	nlohmann::json getInfoMovie(string num);

	nlohmann::json Quit();
private:
	nlohmann::json makeRequest(std::string request);
};