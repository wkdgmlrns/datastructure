//#include<iostream>
//#include<cstdlib>
//#include<ctime>
//using namespace std;
//
//int main(void) 
//{
//	srand((unsigned int)time(NULL));
//	float array1[10][10];
//	int i=0, j=0, m=0;
//	//n*n �࿭�� ũ�� �Է�
//	cout << "10���� �������� �Է��ϼ���";
//	cin >> m;
//
//	for (i = 0; i < m; i++) 
//	{
//		for (j = 0; j < m; j++) 
//		{	//������ float���� ���� �Է¹��� �迭 ����
//			array1[i][j] = (float)(rand()%10000+1)*0.01f;
//			cout <<i+1<<"."<<j+1<<" : (" <<array1[i][j]<<") ";
//		}
//		cout<< endl;
//	}
//	cout << "tranpose matrix ����" << endl;
//	for (i = 0; i < m; i++)
//	{	
//		for (j = 0; j < m; j++)
//		{	
//			//�ӽù迭�� ������� �ʰ� ����ϱ� ���ؼ� �迭�� ��� ���� �ٲ㼭 ���
//			cout  << i + 1 << "." << j + 1 << " : (" << array1[j][i] << ") "; 
//		}
//		cout << endl;
//	}
//	return 0;
//}
