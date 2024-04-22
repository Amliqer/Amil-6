#include <StarW.h>
#define CPPHTTPLIB_OPENSSL_SUPPORT


int main() {
	StarWikiWars* app = new StarWikiWars();
	cout << app->getInfoChar("1") << endl << " ";
	cout << app->getInfoPlanet("1") << endl << " ";
	cout << " " << app->getInfoMovie("1") << endl;
	cout << app->Quit() << endl;
	return 0;
}