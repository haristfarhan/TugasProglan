#include <iostream>
#include <vector>

#include "include/person.hpp"
#include "include/mahasiswa.hpp"
#include "include/dosen.hpp"
#include "include/tendik.hpp"

using namespace std;

int main()
{
	vector<mahasiswa> recMhs;
	vector<dosen> recDosen;
	vector<tendik> recTendik;

	int menu_terpilih;

	while (1)
	{
		cout << "Selamat datang di Universitas X" << endl
			 << endl;
		cout << "Data statistik:" << endl;
		cout << "  1. Jumlah Mahasiswa             : " << recMhs.size() << " mahasiswa" << endl;
		cout << "  2. Jumlah Dosen                 : " << recDosen.size() << " Dosen" << endl;
		cout << "  3. Jumlah Tenaga Kependidikan   : " << recTendik.size() << " Tenaga Pendidik" << endl;
		cout << endl;
		cout << "Menu: " << endl;
		cout << "  1. Tambah Mahasiswa" << endl;
		cout << "  2. Tambah Dosen" << endl;
		cout << "  3. Tambah Tenaga Kependidikan" << endl;
		cout << "  4. Tampilkan semua Mahasiswa" << endl;
		cout << "  5. Tampilkan semua Dosen" << endl;
		cout << "  6. Tampilkan semua Tenaga Kependidikan" << endl;
		cout << "-> Silahkan memilih salah satu: ";
		cin >> menu_terpilih;

		switch (menu_terpilih)
		{
		case 1:
		{
			string id, nama, nrp, departemen;
			int dd, mm, yy, tahunmasuk;
			cout << "Masukkan id : ";
			cin >> id;
			cout << "Masukkan Nama : ";
			cin >> nama;
			cout << "Masukkan Nrp : ";
			cin >> nrp;
			cout << "Masukkan Departemen : ";
			cin >> departemen;
			cout << "Masukkan tanggal lahir : ";
			cin >> dd;
			cout << "Masukkan bulan lahir : ";
			cin >> mm;
			cout << "Masukkan tahun lahir : ";
			cin >> yy;
			cout << "Masukkan tahun masuk : ";
			cin >> tahunmasuk;
			mahasiswa newMahasiswa(id, nama, dd, mm, yy, nrp, departemen, tahunmasuk);
			recMhs.push_back(newMahasiswa);
		}
		break;
		case 2:
		{
			string id, nama, npp, departemen;
			int dd, mm, yy, pendidikan;
			cout << "Masukkan id : ";
			cin >> id;
			cout << "Masukkan Nama : ";
			cin >> nama;
			cout << "Masukkan Npp : ";
			cin >> npp;
			cout << "Masukkan Departemen : ";
			cin >> departemen;
			cout << "Masukkan tanggal lahir : ";
			cin >> dd;
			cout << "Masukkan bulan lahir : ";
			cin >> mm;
			cout << "Masukkan tahun lahir : ";
			cin >> yy;
			cout << "Masukkan pendidikan : ";
			cin >> pendidikan;
			dosen newdosen(id, nama, dd, mm, yy, npp, departemen, pendidikan);
			recDosen.push_back(newdosen);
		}
		break;
		case 3:
		{
			string id, nama, npp, unit;
			int dd, mm, yy;
			cout << "Masukkan id : ";
			cin >> id;
			cout << "Masukkan Nama : ";
			cin >> unit;
			cout << "Masukkan Unit : ";
			cin >> nama;
			cout << "Masukkan Npp : ";
			cin >> npp;
			cout << "Masukkan tanggal lahir : ";
			cin >> dd;
			cout << "Masukkan bulan lahir : ";
			cin >> mm;
			cout << "Masukkan tahun lahir : ";
			cin >> yy;
			tendik newtendik(id, nama, dd, mm, yy, npp, unit);
			recTendik.push_back(newtendik);
		}
		break;
		case 4:
			for (unsigned int i = 0; i < recMhs.size(); i++)
			{
				cout << "Mahasiswa" << i + 1 << endl;
				cout << "Id				: " << recMhs[i].getId() << endl;
				cout << "Nama			: " << recMhs[i].getNama() << endl;
				cout << "Departemen		: " << recMhs[i].getDepartemen() << endl;
				cout << "NRP			: " << recMhs[i].getNrp() << endl;
				cout << "Tanggal Lahir	: " << recMhs[i].getTglLahir() << "-" << recMhs[i].getBulanLahir() << "-" << recMhs[i].getTahunLahir() << endl;
				cout << "Tahun Masuk 	: " << recMhs[i].getTahunMasuk() << endl;
			}
			break;
		case 5:
			for (int i = 0; i < recDosen.size(); i++)
			{
				cout << "Dosen" << i + 1 << endl;
				cout << "Id				: " << recDosen[i].getId() << endl;
				cout << "Nama			: " << recDosen[i].getNama() << endl;
				cout << "Departemen		: " << recDosen[i].getDepartemen() << endl;
				cout << "NPP			: " << recDosen[i].getNpp() << endl;
				cout << "Tanggal Lahir	: " << recDosen[i].getTglLahir() << "-" << recDosen[i].getBulanLahir() << "-" << recDosen[i].getTahunLahir() << endl;
				cout << "Pendidikan 	: " << recDosen[i].getPendidikan() << endl;
			}
			break;
		case 6:
			for (int i = 0; i < recTendik.size(); i++)
			{
				cout << "Tendik" << i + 1 << endl;
				cout << "Id				: " << recTendik[i].getId() << endl;
				cout << "Nama			: " << recTendik[i].getNama() << endl;
				cout << "Unit			: " << recTendik[i].getUnit() << endl;
				cout << "NPP			: " << recTendik[i].getNPP() << endl;
				cout << "Tanggal Lahir	: " << recTendik[i].getTglLahir() << "-" << recTendik[i].getBulanLahir() << "-" << recTendik[i].getTahunLahir() << endl;
			}
			break;
		}
	}

	return 0;
}
