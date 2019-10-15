#include<iostream>
using namespace std;

class GameEntry 
{
public:
	GameEntry(const string& n = "", int s = 0);
	string getName() const;
	int getScore() const;
private:
	string name;
	int score;
};
GameEntry::GameEntry(const string& n = "", int s = 0):name(n),score(0)
{}
string GameEntry::getName() const 
{
	return name;
}
int GameEntry::getScore() const
{
	return score;
}
class Score : public exception
{
public:
	Score(int maxEnt = 10);
	~Score();
	void add(const GameEntry& e);
	GameEntry remove(int i);
private:
	int maxEntries;
	int numEntries;
	GameEntry* entries;
};
Score::Score(int maxEnt = 10)
{
	maxEntries = maxEnt;
	entries = new GameEntry[maxEntries];
	numEntries = 0;
}
Score::~Score() 
{
	delete[]entries;
}
void Score::add(const GameEntry& e) 
{
	int newScore = e.getScore();
	if (numEntries == maxEntries) 
	{
		if (newScore <= entries[maxEntries - 1].getScore) 
		{
			return;
		}
	}
	else 
	{
		numEntries++;
	}
	int i = numEntries - 2;
	while (i >= 0 && newScore > entries[i].getScore()) 
	{
		entries[i + 1] = entries[i];
		i--;
	}
	entries[i + 1] = e;
}
GameEntry Score::remove(int i) 
{
	GameEntry e = entries[i];
	for (int j = i + 1; j < numEntries; j++)
		entries[j - 1] = entries[j];
	numEntries--;
	return e;
}
int main() 
{
	
}