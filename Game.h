#pragma once
#include "QuestList.h"
#include <ctime>
#include <Windows.h>
class Game
{
	static const size_t quanituEroor = 5;
	static const char filler = '*';
	QuestList list;
	Quest quest;
	string userWord;
	void start() {
		quest = list.getQuest(rand() % 3);
	}

public:
	
	Game() {};
	void run();
	bool upUsWord(char word);
};

