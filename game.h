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

	enum letterCourse {NoInitialized, A, B, C, D, E, F, G, H}; //��������� ���

	struct hod {
		letterCourse character;
		unsigned int num;

		hod() : character(NoInitialized), num(-1) {}

		hod(letterCourse �haracter, unsigned int Num)
		{
				if((Num < 1) || (Num > 8))
					throw "����������� ������� �������� ����� ����. ���������� �������� [1;8]\n";
				character = �haracter;
				num = Num;
		}

		bool isValid() //�������� ������������ ������ ����
		{
				if((num < 1) || (num > 8))
					return false;
				return true;
		}
	};

#endif // !GAME_H