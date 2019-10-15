//#include<iostream>
//#include<ctime>
//using namespace std;
//
//int main() 
//{
//	srand((unsigned int)time(NULL));
//	int i,j,n,temp;
//	int* A;
//	cout << "N: "; cin >> n;
//	A = new int[n];
//	for (int i = 0; i < n; i++) 
//	{
//		A[i] = (rand() % 100) + 1;
//		cout << A[i] <<" ";
//	}
//	cout << endl;
//	for (i = 1; i < n; i++) 
//	{
//		temp = A[i];
//		for (j = i - 1; j >= 0 && A[j] > temp; j--) 
//		{
//			A[j + 1] = A[j];
//		}
//		A[j+1] = temp;
//	}
//	for (int i = 0; i < n; i++)
//	{
//		cout << A[i] << " ";
//	}
//}