//
//#include<iostream>
//#include<cstdlib>
//#include<ctime>
//using namespace std;
////���� ���� 0~100���� �����ؼ� max�� ���� ���� -1�� �ǰ� min 101�� ũ�⸦ ������ ù �񱳰��� ������ �Ҵ��
//int max_val = -1;
//int min_val = 101;
////�迭�� �ּҰ��� size�� �����ͼ� 
////�迭�� ������ ��ġ�������� size�� -1�� ���� ���� ����Լ�ȣ��
//int max(int *arary1,int size)
//{
//	if (size < 0)
//		return max_val;
//	if (arary1[size]>max_val) {
//		max_val = arary1[size];
//	}
//	return max(arary1,size-1);
//}
//
//int min(int *arary2, int size)
//{
//	if (size < 0)
//		return min_val;
//	if (arary2[size] < min_val) {
//		min_val = arary2[size];
//	}
//	return min(arary2, size - 1);
//}
//
//int main() 
//{
//	srand((unsigned int)time(NULL));
//	int array1[10] = { 0 };
//	cout << "�迭 ����" << endl;
//	for (int i = 0; i < 10; i++) 
//	{
//		array1[i] = (rand() % 100) + 1;
//		cout << array1[i] << " ";
//	}
//	cout << endl;
//	//�迭�� ũ�⸸ŭ�� �˱� ���� sizeof���
//	int max_val = max(array1, (sizeof(array1) / sizeof(int)) - 1);
//	cout << "�ִ� :" << max_val << endl;
//	min(array1, (sizeof(array1) / sizeof(int)) - 1);
//	cout << "�ּڰ� :" <<min_val << endl;
//}
