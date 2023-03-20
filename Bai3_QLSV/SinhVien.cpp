#include "SinhVien.h"

SinhVien::SinhVien() {
	HoTen = NULL;
	MaSo = NULL;
	NgaySinh = NULL;
	Marks[0] = Marks[1] = Marks[2] = 0;
}

SinhVien::SinhVien(const char* ht, const char* ms,const char* ns, double bt, double gk, double ck) {
	HoTen = new char[strlen(ht) + 1];
	MaSo = new char[strlen(ms) + 1];
	NgaySinh = new char[strlen(ns) + 1];
		
	strcpy_s(HoTen, strlen(ht) + 1, ht);
	strcpy_s(MaSo, strlen(ms) + 1, ms);
	strcpy_s(NgaySinh, strlen(ns) + 1, ns);
	Marks[0] = bt;
	Marks[1] = gk;
	Marks[2] = ck;

}

SinhVien::~SinhVien() {
	delete[] HoTen;
	delete[] MaSo;
	delete[] NgaySinh;
}

SinhVien::SinhVien(const SinhVien& sv) {
	HoTen = new char[strlen(sv.HoTen) + 1];
	MaSo = new char[strlen(sv.MaSo) + 1];
	NgaySinh = new char[strlen(sv.NgaySinh) + 1];

	strcpy_s(HoTen, strlen(sv.HoTen) + 1, sv.HoTen);
	strcpy_s(MaSo, strlen(sv.HoTen) + 1, sv.HoTen);
	strcpy_s(NgaySinh, strlen(sv.HoTen) + 1, sv.HoTen);
	Marks[0] = sv.Marks[0];
	Marks[1] = sv.Marks[1];
	Marks[2] = sv.Marks[2];
}

SinhVien& SinhVien::operator = (const SinhVien& sv) {
	if (this != &sv) {
		delete[] HoTen;
		delete[] MaSo;
		delete[] NgaySinh;

		HoTen = new char[strlen(sv.HoTen) + 1];
		MaSo = new char[strlen(sv.MaSo) + 1];
		NgaySinh = new char[strlen(sv.NgaySinh) + 1];

		strcpy_s(HoTen, strlen(sv.HoTen) + 1, sv.HoTen);
		strcpy_s(MaSo, strlen(sv.HoTen) + 1, sv.HoTen);
		strcpy_s(NgaySinh, strlen(sv.HoTen) + 1, sv.HoTen);

		Marks[0] = sv.Marks[0];
		Marks[1] = sv.Marks[1];
		Marks[2] = sv.Marks[2];
	}

	return *this;
}

double SinhVien::TinhDiemTrungBinh() {
	return Marks[0] * 0.25 + Marks[1] * 0.25 + Marks[2] * 0.5;
}

ostream& operator << (ostream& out, SinhVien& sv) {
	out << "Ho va ten: " << sv.HoTen << endl;
	out << "Ma So: " << sv.MaSo << endl;
	out << "NgaySinh" << sv.NgaySinh << endl;
	out << "Diem Trung Binh " << fixed << setprecision(2) << sv.TinhDiemTrungBinh() << endl;
	return out;
}