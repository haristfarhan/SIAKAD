#include <iostream>
#include <vector>
#include "include/mahasiswa.hpp"

mahasiswa::mahasiswa(std::string id, std::string nama, int dd, int mm, int yy,
					 std::string nrp, std::string departemen, int tahunmasuk)
	: person(id, nama, dd, mm, yy), nrp(nrp), departemen(departemen), tahunmasuk(tahunmasuk)
{
	this->ipk = 0.0;
	this->semesterke = 1;
	this->skslulus = 0;

	this->ips = std::vector<float>(14, 0);
}

void mahasiswa::setSemester(int semesterke)
{
	this->semesterke = semesterke;
}

int mahasiswa::getSemester()
{
	return this->semesterke;
}

std::string mahasiswa::getDepartemen()
{
	return this->departemen;
}

std::string mahasiswa::getNrp()
{
	return this->nrp;
}

int mahasiswa::getTahunMasuk()
{
	return this->tahunmasuk;
}

void mahasiswa::setSKSLulus(int skslulus)
{
	this->skslulus = skslulus;
}

int mahasiswa::getSKSLulus()
{
	return this->skslulus;
}

void mahasiswa::hitungIPK()
{
}

void mahasiswa::setIPS(int semester, float ips)
{
	// semester mulai dari 1
	if (semester < 15)
	{
		this->ips[semester - 1] = ips;
		this->hitungIPK();
	}
}

float mahasiswa::getIPS(int semester)
{
	if (semester < 15)
		return this->ips[semester - 1];

	return -1.0;
}

std::vector<float> mahasiswa::getAllIPS()
{
	return this->ips;
}

void mahasiswa::addMatkulId(std::string id)
{
	this->matkulid.push_back(id);
}

std::vector<std::string> mahasiswa::getMatkulId()
{
	return this->matkulid;
}