#include "libs.h"
#include "game.h" //Для enum chessFigur
#include "ai.h"
//Пример доски в Картинке (в "Файлы ресурсоы")

//Заглушка
//Оценка выиграшности позиции
//Возвращаемое значение [1;100]
int winningRating(hod* figurePos, hod* figureMoveTo, chessFigur gameboard[8][8])
{
	//Проверка входных параметров
	if(!figurePos->isValid())
			throw "Не корректо передан параметр figurePos в winningRating()\n";
	if(!figureMoveTo->isValid())
		throw "Не корректо передан параметр figureMoveTo в winningRating()\n";

	//Заглушка
	return rand()%100 + 1;
}