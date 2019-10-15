#include<iostream>
using namespace std;

class Sinivelcap {
public:
	void Take() const { cout << "�๰ " << endl; }
};
class Sneezecap {
public:
	void Take() const { cout << "��ä�� " << endl; }
};
class Snufflecap {
public:
	void Take() const { cout << "�� " << endl; }
};
class CONTAC600 {
private:
	Sinivelcap sin;
	Sneezecap sne;
	Snufflecap snu;
public:
	void Take() const 
	{
		sin.Take();
		sne.Take();
		snu.Take();
	}
};
class ColdPatier {
public:
	void TakeCONTAC600(const CONTAC600 &cap) const { cap.Take(); }
};
int main() 
{
	CONTAC600 cap;
	ColdPatier sufferer;
	sufferer.TakeCONTAC600(cap);
	return 0;
}