//
//#include<iostream>
//using namespace std;
////�ϳ���Ÿ�� ����
////A�� ����N-1���� B�� �ű�(num-1,A to B)
////A�� ������ ������ C�� �ű�(num,A to C)
////B�� n-1���� ������ A�� n-2�� �ű�(num-2,B to A)
////B�� n-1���� ������ C�� �ű�(num-1,B to C)
////n�� -1�� �ٿ����� �� ������ �ݺ���
//void HanoiTowerMove(int num,const char* a, const char* b, const char* c)
//{
//	//A�� ������ �ϳ��� ���� ��� A���� C�� �ٷ� �̵�
//	if (num == 1) 
//	{
//		cout << "����1�� " << a << "����" << c << "�� �̵�" << endl;
//	}
//	else 
//	{
//		// A���� B�� ������ �̵���Ű�� HanoiTowerMove�� num-1��ŭ ȣ��
//		HanoiTowerMove(num - 1, a, c, b);
//		cout << "����" << num << "�� " << a << "����" << c << "�� �̵�" << endl;
//		//b���� c�� ������ �̵���Ű�� HanoiTowerMove�� num-1��ŭ ȣ��
//		HanoiTowerMove(num - 1, b, a, c);
//	}
//}
//int main() 
//{
//	int n;
//	cout << "HanoiTower discus: "; cin >> n;
//	//n���� ����Լ� ȣ��
//	HanoiTowerMove(n, "A", "B", "C");
//	return 0;
//}
//
