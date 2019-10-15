//
//#include<iostream>
//using namespace std;
////하노이타워 조건
////A의 원반N-1개를 B로 옮김(num-1,A to B)
////A의 마지막 원반을 C로 옮김(num,A to C)
////B의 n-1개의 원반을 A로 n-2개 옮김(num-2,B to A)
////B의 n-1번쨰 원반을 C로 옮김(num-1,B to C)
////n을 -1씩 줄여가며 위 과정을 반복함
//void HanoiTowerMove(int num,const char* a, const char* b, const char* c)
//{
//	//A의 원반이 하나만 남은 경우 A에서 C로 바로 이동
//	if (num == 1) 
//	{
//		cout << "원반1을 " << a << "에서" << c << "로 이동" << endl;
//	}
//	else 
//	{
//		// A에서 B로 원반을 이동시키고 HanoiTowerMove를 num-1만큼 호출
//		HanoiTowerMove(num - 1, a, c, b);
//		cout << "원반" << num << "을 " << a << "에서" << c << "로 이동" << endl;
//		//b에서 c로 원반을 이동시키고 HanoiTowerMove를 num-1만큼 호출
//		HanoiTowerMove(num - 1, b, a, c);
//	}
//}
//int main() 
//{
//	int n;
//	cout << "HanoiTower discus: "; cin >> n;
//	//n번의 재귀함수 호출
//	HanoiTowerMove(n, "A", "B", "C");
//	return 0;
//}
//
