#ifndef GAME_H
#define GAME_H

	//���������, ��� �� �� ������������ "���������� �����" ���� 1-������, 2-�������� � �.�.
	//W - White - ����� ������
	//B - Black - ������ ������
	enum chessFigur {W_PAWN,	//�����. ������ ���������� const int W_PAWN = 0;
					 B_PAWN,	//const int B_PAWN = 1;
					 W_TRAVEL,	//���� const int W_TRAVEL = 2;
					 B_TRAVEL,
					 W_HORSE,	//���� const int W_HORSE = �� ������������ (4);
					 B_HORSE, 
					 W_OFFICER,	//������
					 B_OFFICER,
					 W_KING,	//������
					 B_KING,
					 W_QUEEN,	//��������
					 B_QUEEN,
					 EMPTY,		//������ ��������
	};

#endif // !GAME_H