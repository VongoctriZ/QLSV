#include"SinhVien.h"


int main() {
	SinhVien sv("Nguyen Van B","21120123", "20-02-2004", 7, 8, 9);
	cout << sv;

	cout << endl;
	SinhVien sv1 = sv;
	cout << sv1 << endl;

	return 0;
}
