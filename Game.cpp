#include "Game.h"
using namespace std;
void Game::run()
{
	start();
	userWord.resize(quest.getAnswer().size(), filler);
	cout << quest.getQuestion();
	char tmp;
	for (int i = 1; i <=quanituEroor ; i++)
	{
		SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), { 40,1 });
		cin >> tmp;
		SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), { 0,1 });
		i -= upUsWord(tmp);
		cout << "QUANITU EROOR" << i << '\\' << quanituEroor<< endl;;
		cout << userWord << endl;
		if (userWord == quest.getAnswer())
		{
			cout << "WINNERR" << endl;
			return;
		}
	}
     cout << "LOSS!!!" << endl;
}

bool Game::upUsWord(char word)
{

	for (size_t i = 0; i < quest.getAnswer().size(); i++) {
		if (quest.getAnswer()[i] == word && quest.getAnswer()[i] != userWord[i]) {
			userWord[i] = word;
			return true;
		}
	}
	return false;
}
