#pragma once
#include "verbe.h"
#include <iostream>
#include <string>

using namespace std;

class Verbe {

public:
	string GetInfinitf();
	string GetPreterit();
	string GetParticipePasse();
	string GetTraduction();
	int GetScore();
	void SetInfinitif(string mot);
	void SetPreterit(string mot);
	void SetParticipePasse(string mot);
	void SetTraduction(string mot);
	void SetScore(int score);
	void ScorePlus();
	void ScoreMoins();
	Verbe(string infi, string pret, string parti, string trad, int score);

protected:
	string infinitif;
	string preterit;
	string participePasse;
	string traduction;
	int score;
};
