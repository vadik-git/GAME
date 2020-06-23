#pragma once
#include<iostream>
#include<vector>
#include <string>
using namespace std;

class Quest {
	string question;
	string answer;
public:
	friend class QuestList;
	
	
	Quest() = default;
	Quest(const string&question, const string&answer) :question(question),answer(answer)
	{}

	const string & getQuestion()const {
		return question;
	}
	const string&getAnswer()const {
		return answer;
	}


	Quest & operator =(const Quest&tmp) {

		if (this != &tmp) {
			this->question = tmp.question;
			this->answer = tmp.answer;
		}
		return *this;
	}

};
class QuestList
{
	vector<Quest>list;
public:
	QuestList() {
		list.push_back(Quest("Popular programing language?", "PYTHON"));
		list.push_back(Quest("OOP principle?", "INCAPSULATION"));
		list.push_back({ "Key word for overload operation?", "OPERATOR" });

	};
	const Quest&getQuest(int index) {

		if (index < list.size()) {
			return list[index];
		}
		return list[list.size() - 1];

	};
	size_t getSize()const {
		return list.size();
	}
	void pushBack(const Quest&tmp) {
		list.push_back(tmp);
	}

};

