#include <StarW.h>

using json = nlohmann::json;


StarWikiWars::StarWikiWars() {}


json StarWikiWars::makeRequest(std::string request) {
	if (auto response = this->c1->Get(request)) {
		if (response->status == 200) {
			return json::parse(response->body);
		}
		cout << "Error" << response->status << endl;
		return *new json;
	}
	//cout << "Bad request ";
	return *new json;
}


json StarWikiWars::getInfoChar(string num) {
	return this->makeRequest(this->CharacterRequest + num);
}

json StarWikiWars::getInfoPlanet(string num) {
	return this->makeRequest(this->PlanetRequest + num);
}

json StarWikiWars::getInfoMovie(string num) {
	return this->makeRequest(this->MovieRequest + num);
}

json StarWikiWars::Quit() {
	return "End";
}