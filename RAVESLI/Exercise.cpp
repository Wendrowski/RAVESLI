#include <iostream>

enum Monsters
{
	MONSTER_OGRE,
	MONSTER_GOBLIN,
	MONSTER_SKELETON,
	MONSTER_ORC,
	MONSTER_TROLL
};

int main()
{
	Monsters mon(MONSTER_OGRE);
	std::cout << mon << "\n";
}