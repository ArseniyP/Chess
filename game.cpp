#include "libs.h"
//Если надо подключить системную библиотеку - впиши её в файле libs.h
//Тут и в других твоих *.cpp файлах писать #include <...> запрещенно
//Только #include "libs.h" и только в *.cpp файлах

#include "game.h"
#include "ai.h" //Подключаем искуственный интелект(AI)

using namespace std;

void main() {
	srand(time(0)); //Надо для заглушки фун. winningRating - оценки выиграшности позиции
	setlocale(LC_ALL, "Russian");
	//Объявления перечисления должно и есть в game.h ОБЯЗАТЕЛЬНО!
	////Константы, что бы не использовать "магические числа" типа 1-король, 2-королова и т.д.
	////W - White - белая фигура
	////B - Black - черная фигура
	//enum chessFigur {W_PAWN,	//Пешка. Запись аналогична const int W_PAWN = 0;
	//				 B_PAWN,	//const int B_PAWN = 1;
	//				 W_TRAVEL,	//Тура const int W_TRAVEL = 2;
	//				 B_TRAVEL,
	//				 W_HORSE,	//Конь const int W_HORSE = по возрастающей (4);
	//				 B_HORSE, 
	//				 W_OFFICER,	//Офицер
	//				 B_OFFICER,
	//				 W_KING,	//Кароль
	//				 B_KING,
	//				 W_QUEEN,	//Королева
	//				 B_QUEEN,
	//				 EMPTY,		//Пустая клеточка
	//};
	chessFigur doska[8][8] = { //Матрица игрового поля
		 B_TRAVEL, B_HORSE, B_OFFICER, B_KING, B_QUEEN, B_OFFICER, B_HORSE, B_TRAVEL,
		 B_PAWN,   B_PAWN,  B_PAWN,    B_PAWN, B_PAWN,  B_PAWN,    B_PAWN,  B_PAWN,
		 EMPTY,    EMPTY,   EMPTY,     EMPTY,  EMPTY,   EMPTY,     EMPTY,   EMPTY,
		 EMPTY,    EMPTY,   EMPTY,     EMPTY,  EMPTY,   EMPTY,     EMPTY,   EMPTY,
		 EMPTY,    EMPTY,   EMPTY,     EMPTY,  EMPTY,   EMPTY,     EMPTY,   EMPTY,
/*сюда>*/EMPTY,    EMPTY,   EMPTY,     EMPTY,  EMPTY,   EMPTY,     EMPTY,   EMPTY,
/*эту->*/W_PAWN,   W_PAWN,  W_PAWN,    W_PAWN, W_PAWN,  W_PAWN,    W_PAWN,  W_PAWN,
/*пешку*/W_TRAVEL, W_HORSE, W_OFFICER, W_KING, W_QUEEN, W_OFFICER, W_HORSE, W_TRAVEL
	};

	//Ход с а2 на а3 фигуры, расположенной на а2 - белой пешки
	int ratingHoda = winningRating(new hod(A, 2), new hod(A, 3), doska);

	cout << "При ходе пешки с а2 на а3 полученный рейтинг выиграшности компьютера, играющего белыми, от 1 до 100 включительно = " << ratingHoda << endl;

	system("pause"); //system находиться в stdlib.h
}