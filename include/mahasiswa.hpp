#ifndef __MAHASISWA_HPP__
#define __MAHASISWA_HPP__


#include <iostream>
#include "include/person.hpp"

class mahasiswa : public person {
private:
	std::string nrp;
	std::string departemen;
	int tahunmasuk;
	int semesterke;
	int skslulus;
	float ipk;
	std::vector<float> ips;
	std::vector<std::string> matkulid;

public:
	mahasiswa(std::string id, std::string nama, int dd, int mm, int yy,
					std::string nrp, std::string departemen, int tahunmasuk);

	void setDepartemen(std::string departemen);
	std::string getDepartemen();

	void setNrp(std::string nrp);
	std::string getNrp();

	void setTahunMasuk(int tahunmasuk);
	int getTahunMasuk();

	void setSemester(int semesterke);
	int getSemester();

	void setSKSLulus(int skslulus);
	int getSKSLulus();

	void hitungIPK();

	void setIPS(int semester, float ips);
	float getIPS(int semester);
	std::vector<float> getAllIPS();

	void addMatkulId(std::string id);
	std::vector<std::string> getMatkulId();
};

#endif
