#include "Company.h"

Team::Team(int i) {
	manager.setName(to_string(i));
}
void Team::setWork(int n) {
	srand(n);
	int tmp = (rand() % (workers.size() - manager.questcount) + 1);
	tmp += manager.questcount;
	for (int i = manager.questcount; i < tmp; i++) {
		workers[i].setWork();
		int r = rand() % 3;
		switch (r)
		{
		case 0:
			workers[i].setType(A);
			break;
		case 1:
			workers[i].setType(B);
			break;
		case 2:
			workers[i].setType(C);
			break;
		}
	}
	manager.questcount = tmp;
}
bool Team::full() {
	if (manager.questcount == workers.size()) {
		return true;
	}
	return false;
}


void Company::start() {
	cout << "Entre count of teams and workers in it\n";
	int x, y;
	cin >> x >> y;
	for (int i = 0; i < x; i++) {
		teams.emplace_back(i);
		for (int j = 0; j < y; j++) {
			teams[i].workers.emplace_back(to_string(i) + to_string(j));
		}
	}
	while (true) {
		cout << "Enter quest\n";
		int n;
		cin >> n;
		head.setQuest(n);
		int tmp = 0;
		for (int i = 0; i < teams.size(); i++) {
			if (!teams[i].full()) {
				teams[i].setWork(n + i);
				tmp++;
			}

		}
		if (tmp == 0) {
			break;
		}

	}
	cout << "All teams are full of quests\n";
}