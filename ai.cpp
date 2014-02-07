#include "libs.h"
#include "game.h" //��� enum chessFigur
//������ ����� � �������� (� "����� ��������")

//��������
//������ ������������ �������
//������������ �������� [1;100]
int winningRating(//������ ��� ��������� ������ ����������, ���� ����� ���������
				  char charXto, //���������� x - ��������� ������ � ������ �������� a-h
				  unsigned int intYto, //���������� y - ����� ������ [1; 8]
				  char charXpos, //���������� �������� ������������ ������ ����������
				  unsigned int intYpos, //�������� ���������� �������� �� �������� � ������� ����� �����������
				  chessFigur gameboard[8][8]) //��������� �� ���� ����� (�������)
{
	//�������� ������� ����������
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
		throw "����������� ������� 1 �������� (char)charXto � ��� winningRating";
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
		throw "����������� ������� 3 �������� (char)charXpos � ��� winningRating";
	}
	if((intYto < 1) || (intYto > 8))
		throw "����������� ������� 2 �������� unsigned int intYto � ��� winningRating";
	if((intYpos < 1) || (intYpos > 8))
		throw "����������� ������� 4 �������� unsigned int intYpos � ��� winningRating";

	//��������
	return rand()%100 + 1;
}