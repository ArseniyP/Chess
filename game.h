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

	enum letterCourse {NoInitialized, A, B, C, D, E, F, G, H}; //Буквенный ход

	struct hod {
		letterCourse character;
		unsigned int num;

		hod() : character(NoInitialized), num(-1) {}

		hod(letterCourse Сharacter, unsigned int Num)
		{
				if((Num < 1) || (Num > 8))
					throw "Некорректно передан параметр числа хода. Допустимый диапазон [1;8]\n";
				character = Сharacter;
				num = Num;
		}

		bool isValid() //Проверка корректности данных хода
		{
				if((num < 1) || (num > 8))
					return false;
				return true;
		}
	};

#endif // !GAME_H