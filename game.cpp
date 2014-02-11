#include "libs.h"
//���� ���� ���������� ��������� ���������� - ����� � � ����� libs.h
//��� � � ������ ����� *.cpp ������ ������ #include <...> ����������
//������ #include "libs.h" � ������ � *.cpp ������

#include "game.h"
#include "ai.h" //���������� ������������ ��������(AI)

using namespace std;

void main() {
	srand(time(0)); //���� ��� �������� ���. winningRating - ������ ������������ �������
	setlocale(LC_ALL, "Russian");
	//���������� ������������ ������ � ���� � game.h �����������!
	////���������, ��� �� �� ������������ "���������� �����" ���� 1-������, 2-�������� � �.�.
	////W - White - ����� ������
	////B - Black - ������ ������
	//enum chessFigur {W_PAWN,	//�����. ������ ���������� const int W_PAWN = 0;
	//				 B_PAWN,	//const int B_PAWN = 1;
	//				 W_TRAVEL,	//���� const int W_TRAVEL = 2;
	//				 B_TRAVEL,
	//				 W_HORSE,	//���� const int W_HORSE = �� ������������ (4);
	//				 B_HORSE, 
	//				 W_OFFICER,	//������
	//				 B_OFFICER,
	//				 W_KING,	//������
	//				 B_KING,
	//				 W_QUEEN,	//��������
	//				 B_QUEEN,
	//				 EMPTY,		//������ ��������
	//};
	chessFigur doska[8][8] = { //������� �������� ����
		 B_TRAVEL, B_HORSE, B_OFFICER, B_KING, B_QUEEN, B_OFFICER, B_HORSE, B_TRAVEL,
		 B_PAWN,   B_PAWN,  B_PAWN,    B_PAWN, B_PAWN,  B_PAWN,    B_PAWN,  B_PAWN,
		 EMPTY,    EMPTY,   EMPTY,     EMPTY,  EMPTY,   EMPTY,     EMPTY,   EMPTY,
		 EMPTY,    EMPTY,   EMPTY,     EMPTY,  EMPTY,   EMPTY,     EMPTY,   EMPTY,
		 EMPTY,    EMPTY,   EMPTY,     EMPTY,  EMPTY,   EMPTY,     EMPTY,   EMPTY,
/*����>*/EMPTY,    EMPTY,   EMPTY,     EMPTY,  EMPTY,   EMPTY,     EMPTY,   EMPTY,
/*���->*/W_PAWN,   W_PAWN,  W_PAWN,    W_PAWN, W_PAWN,  W_PAWN,    W_PAWN,  W_PAWN,
/*�����*/W_TRAVEL, W_HORSE, W_OFFICER, W_KING, W_QUEEN, W_OFFICER, W_HORSE, W_TRAVEL
	};

	//��� � �2 �� �3 ������, ������������� �� �2 - ����� �����
	int ratingHoda = winningRating(new hod(A, 2), new hod(A, 3), doska);

	cout << "��� ���� ����� � �2 �� �3 ���������� ������� ������������ ����������, ��������� ������, �� 1 �� 100 ������������ = " << ratingHoda << endl;

	system("pause"); //system ���������� � stdlib.h
}