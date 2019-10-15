//#include<iostream>
//#include<cstring>
//#include<cstdlib>
//using namespace std;
//
//class Point 
//{
//private:
//	int xpos, ypos;
//public:
//	Point(int x, int y) :xpos(x), ypos(y) {}
//	Point() {}
//	void Show() 
//	{
//		cout<< xpos << " : " << ypos << endl;
//	}
//	int getXpos() { return xpos; }
//	int getYpos() { return ypos; }
//	void setXpos(int x) { xpos = x; }
//	void setYpos(int y) { ypos = y; }
//	friend Point operator+(Point &ref1, Point &ref2);
//
//};
//Point operator+(Point &ref1,Point &ref2)
//{
//	Point ref;
//	ref.setXpos(ref1.getXpos() + ref2.getXpos());
//	ref.setYpos(ref1.getYpos() + ref2.getYpos());
//	return ref;
//}
//int main() 
//{
//	Point p1(1, 2);
//	Point p2(3, 4);
//	p1.Show();
//	p2.Show();
//	Point p3 = p1+p2;
//	p3.Show();
//	return 0;
//}