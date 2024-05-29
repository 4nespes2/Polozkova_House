#pragma once
/**
	@file		Polozkova_Class_House.h
	@brief		������������ ���� ������ �������
	@copyright	����
	@author		��������� �.�.
	@date		22-05-2024
	@version	1.0.0
\par ���������� ������:
	@ref Polozkova_Class_House
\par �������� �����:
	@ref Polozkova_Class_House
*/

/// ����� �������� ����
/** �������� ������ � ��������������� ��� �������
*/

class Polozkova_Class_House
{
	protected:
	char *_address; ///< �����
	int *_floor; ///< ����
	int *_numrooms; ///< ���������� ������
	float *_s;///< �������

	
public:
	/// ����������� �� ���������
	/** ������� ������� ��� ������������� �����
	*/ 
	Polozkova_Class_House(void);
	/// ����������� � ����������� ����� ������
	/** ������� ������� � �������������� �� ���� 
	\param address ����� ��������
	\param floor ���� �������� 
	\param numrooms ���������� ������ � ��������
	\param s ������� ��������
	*/
	Polozkova_Class_House(char* address, int floor, int numrooms, float s);
	/// ���������� ����������� �������
	~Polozkova_Class_House(void);
	/// ���������� ������ �������, ������� �������� ����� ������
	/** ���� �������� ���, �� ���������� ��������� �� ������ 
	@param rooms ���������� ������
	*/
	void showApartmentsWithRooms(int rooms);
	/// ���������� ������ ������� , ������� �������� ����� ������ � ������������� �� �����, ������� ��������� � ����������� ����������
	/** ���� �������� ���, �� ���������� ��������� �� ������
	@param rooms ���������� ������
	@param floor ����� �����
	*/
	void showApartmentsWithRoomsAndFloors(int rooms, int floor);
	/// ���������� ������ �������, ������� �������, ������������� ������
	/** ���� �������� ���, �� ���������� ��������� �� ������
	@param area ������� ��������
	*/
	void showApartmentsWithArea(float area);



	
};

