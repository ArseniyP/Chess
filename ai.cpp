#include "libs.h"
#include "game.h" //��� enum chessFigur
#include "ai.h"
//������ ����� � �������� (� "����� ��������")

//��������
//������ ������������ �������
//������������ �������� [1;100]
int winningRating(hod* figurePos, hod* figureMoveTo, chessFigur gameboard[8][8])
{
	//�������� ������� ����������
	if(!figurePos->isValid())
			throw "�� �������� ������� �������� figurePos � winningRating()\n";
	if(!figureMoveTo->isValid())
		throw "�� �������� ������� �������� figureMoveTo � winningRating()\n";

	//��������
	return rand()%100 + 1;
}