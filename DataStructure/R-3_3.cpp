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
//	//n*n 행열의 크기 입력
//	cout << "10보다 작은수를 입력하세요";
//	cin >> m;
//
//	for (i = 0; i < m; i++) 
//	{
//		for (j = 0; j < m; j++) 
//		{	//랜덤한 float형의 값을 입력받은 배열 생성
//			array1[i][j] = (float)(rand()%10000+1)*0.01f;
//			cout <<i+1<<"."<<j+1<<" : (" <<array1[i][j]<<") ";
//		}
//		cout<< endl;
//	}
//	cout << "tranpose matrix 실행" << endl;
//	for (i = 0; i < m; i++)
//	{	
//		for (j = 0; j < m; j++)
//		{	
//			//임시배열을 사용하지 않고 출력하기 위해서 배열의 행과 열을 바꿔서 출력
//			cout  << i + 1 << "." << j + 1 << " : (" << array1[j][i] << ") "; 
//		}
//		cout << endl;
//	}
//	return 0;
//}
