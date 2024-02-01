#include <iostream>

using namespace std;

// Base class
class Hayvan {

public :
	virtual void sesCikar() {
		
		cout << "Hayvan sesCikar fonksiyonu cagirildi\n\n";
	}

	void yazdir() {
		cout << "Hayvan sinifinin yazdir metodu cagirildi\n";

	}
};


// Child class : Kedi
class Kedi : public Hayvan {

public:
	void sesCikar() {
		cout << "miyav miyav..\n";
	}
	void yazdir() {
		cout << "kedi sinifi yazdir cagirildi\n";
	}

};

// Child class : Kopek
class Kopek : public Hayvan {

public:
	void sesCikar() {
		cout << "hav hav hav..\n";
	}
	void yazdir() {
		cout << "kopek sinifi yazdir cagirildi\n";
	}

};

void ucKesSesCikar(Hayvan* h) {
	for (int i = 0; i < 3; i++)
	{
		h->sesCikar();
	}
}

int main() {
	/*Hayvan* pHayvan;

	Kedi tekir;
	pHayvan = &tekir;
    pHayvan->sesCikar();
	pHayvan->yazdir();

	Kopek karabas;
	pHayvan = &karabas;
	//pHayvan->sesCikar();

	//ucKesSesCikar(pHayvan);
	*/

	Kopek karabas;
	ucKesSesCikar(&karabas);
	
}