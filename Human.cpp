#include"Move.h"
#include"Human.h"



Human::Human(string name):m_name(name){
}
Move* Human::makeMove() {
	//string A[] = { "Zombie","Monkey","Ninjia","Pirate","Robot","Paper","Rock","Scissors" };
	string m_move;

	//while (1) {
		//cout << "Enter a Move:";
		cin >> m_move;

		//bool isIn = false;

		//for (int i = 0; i < (sizeof(A) / sizeof(A[0])); i++) {
			//if (m_move == A[i]) {
				//isIn = true;
			//}
		//}

		//if (isIn) {
			Move* move = new Move(m_move);
			return move;
			//break;
		//}

		//else {
			//cout << "Please enter the correct move" << endl;
			//continue;
		//}
	//}
}
string Human::getName() {
	return m_name;
}
