//
//#include<iostream>
//#include<cstdlib>
//#include<ctime>
//using namespace std;
////랜덤 값이 0~100까지 설정해서 max의 시작 값은 -1이 되고 min 101의 크기를 가져서 첫 비교값이 무조건 할당됨
//int max_val = -1;
//int min_val = 101;
////배열의 주소값과 size를 가져와서 
////배열의 마지막 위치에서부터 size를 -1씩 감소 시켜 재귀함수호출
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
//	cout << "배열 생성" << endl;
//	for (int i = 0; i < 10; i++) 
//	{
//		array1[i] = (rand() % 100) + 1;
//		cout << array1[i] << " ";
//	}
//	cout << endl;
//	//배열의 크기만큼를 알기 위해 sizeof사용
//	int max_val = max(array1, (sizeof(array1) / sizeof(int)) - 1);
//	cout << "최댓값 :" << max_val << endl;
//	min(array1, (sizeof(array1) / sizeof(int)) - 1);
//	cout << "최솟값 :" <<min_val << endl;
//}
