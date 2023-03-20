#pragma once
#ifndef SINHVIEN_H_
#define SINHVIEN_H_

#include<iostream>
#include<iomanip>
#include<string>
#include<fstream>

using namespace std;

class SinhVien
{
private:
	char* HoTen;
	char* MaSo;
	char* NgaySinh;
	double Marks[3];
public:
	SinhVien();
	SinhVien(const char* ht, const char* ms, const char* ns, double bt, double gk, double ck);
	~SinhVien();

	// Copy Constructor
	SinhVien(const SinhVien& sv);	

	// Assignment operator
	SinhVien& operator = (const SinhVien& sv);

	// Tinh Diem Trung Binh
	double TinhDiemTrungBinh();

	// In Thong Tin
	friend ostream& operator << (ostream& out, SinhVien& sv);
};


#endif // !SINHVIEN_H_
