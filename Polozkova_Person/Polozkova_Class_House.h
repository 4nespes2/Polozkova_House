#pragma once
/**
	@file		Polozkova_Class_House.h
	@brief		Заголовочный файл класса Персоны
	@copyright	ВоГУ
	@author		Полозкова Е.С.
	@date		22-05-2024
	@version	1.0.0
\par Использует классы:
	@ref Polozkova_Class_House
\par Содержит класс:
	@ref Polozkova_Class_House
*/

/// Класс описания дома
/** Содержит данные о характеристиках жил площади
*/

class Polozkova_Class_House
{
	protected:
	char *_address; ///< адрес
	int *_floor; ///< этаж
	int *_numrooms; ///< количество комнат
	float *_s;///< площадь

	
public:
	/// Конструктор по умолчанию
	/** Создает персону без инициализации полей
	*/ 
	Polozkova_Class_House(void);
	/// Конструктор с заполнением полей класса
	/** Создает персону и инициализирует ее поля 
	\param address адрес квартиры
	\param floor этаж квартиры 
	\param numrooms количество комнат в квартире
	\param s площадь квартиры
	*/
	Polozkova_Class_House(char* address, int floor, int numrooms, float s);
	/// Деструктор освобождает ресурсы
	~Polozkova_Class_House(void);
	/// Показывает список квартир, имеющих заданное число комнат
	/** Если сведений нет, то возвращает сообщение об ошибке 
	@param rooms количество комнат
	*/
	void showApartmentsWithRooms(int rooms);
	/// Показывает список квартир , имеющих заданное число комнат и расположенных на этаже, который находится в определённом промежутке
	/** Если сведений нет, то возвращает сообщение об ошибке
	@param rooms количество комнат
	@param floor номер этажа
	*/
	void showApartmentsWithRoomsAndFloors(int rooms, int floor);
	/// Показывает список квартир, имеющих площадь, превосходящую данную
	/** Если сведений нет, то возвращает сообщение об ошибке
	@param area площадь квартиры
	*/
	void showApartmentsWithArea(float area);



	
};

