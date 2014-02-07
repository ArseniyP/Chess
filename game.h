#ifndef GAME_H
#define GAME_H

	//Константы, что бы не использовать "магические числа" типа 1-король, 2-королова и т.д.
	//W - White - белая фигура
	//B - Black - черная фигура
	enum chessFigur {W_PAWN,	//Пешка. Запись аналогична const int W_PAWN = 0;
					 B_PAWN,	//const int B_PAWN = 1;
					 W_TRAVEL,	//Тура const int W_TRAVEL = 2;
					 B_TRAVEL,
					 W_HORSE,	//Конь const int W_HORSE = по возрастающей (4);
					 B_HORSE, 
					 W_OFFICER,	//Офицер
					 B_OFFICER,
					 W_KING,	//Кароль
					 B_KING,
					 W_QUEEN,	//Королева
					 B_QUEEN,
					 EMPTY,		//Пустая клеточка
	};

#endif // !GAME_H