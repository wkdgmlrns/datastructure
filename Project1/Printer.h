#pragma once
#ifndef __PRINTER_H_
#define __PRINTER_H_
class Printer 
{
private:
	char in[30];
public:
	void SetString(const char *len);
	void ShowString();
};

#endif // !__PRINTER_H
