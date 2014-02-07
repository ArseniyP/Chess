#include "libs.h"
#include "game.h" //Для enum chessFigur
//Пример доски в Картинке (в "Файлы ресурсоы")

//Заглушка
//Оценка выиграшности позиции
//Возвращаемое значение [1;100]
int winningRating(//Первые два параметра задают координаты, куда ходит компьютер
				  char charXto, //Координата x - латинской буквой в нижнем регистре a-h
				  unsigned int intYto, //Координата y - целым числом [1; 8]
				  char charXpos, //координаты текущего расположения фигуры компьютера
				  unsigned int intYpos, //диапазон допустимых значений по аналогии с первыми двумя пораметрими
				  chessFigur gameboard[8][8]) //указатель на саму доску (матрицу)
{
	//Проверка входных параметров
	switch(charXto) {
	case 'a':
	case 'b':
	case 'c':
	case 'd':
	case 'e':
	case 'f':
	case 'g':
	case 'h': break;
	default:
		throw "Некорректно передан 1 параметр (char)charXto в фун winningRating";
	}
	switch(charXpos) {
	case 'a':
	case 'b':
	case 'c':
	case 'd':
	case 'e':
	case 'f':
	case 'g':
	case 'h': break;
	default:
		throw "Некорректно передан 3 параметр (char)charXpos в фун winningRating";
	}
	if((intYto < 1) || (intYto > 8))
		throw "Некорректно передан 2 параметр unsigned int intYto в фун winningRating";
	if((intYpos < 1) || (intYpos > 8))
		throw "Некорректно передан 4 параметр unsigned int intYpos в фун winningRating";

	//Заглушка
	return rand()%100 + 1;
}