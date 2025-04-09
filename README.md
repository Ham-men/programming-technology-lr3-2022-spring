1. Постановка задачи
Создать абстрактный базовый класс с виртуальной функцией «Сумма
прогрессии». Создать производные классы «Арифметическая прогрессия» и
«Геометрическая прогрессия». Каждый класс имеет два поля типа double. Первое -
первый член прогрессии, второе - постоянная разность (для арифметической) и
постоянное отношение (для геометрической). Определить функцию вычисления
суммы, где параметром является количество элементов прогрессии.
2. Формализация задачи
Создать класс “Progression”. Объявление класса Progression находится в файле
Progression.h.
Клас имеет две публичные функции:
getSummProgres - сумма.
~Progression - деструктор.
Создать класс “Arithmetic_progression”. Объявление класса
Arithmetic_progression находится в файле Arithmetic_progression.h.
Класс имеет три поля с модификатором доступа privat:
double member; - первый член прогрессии
double const_ar; - постоянная разность
double count_el; - кол-во элементов
доступ public:
Arithmetic_progression(); - обычный конструктор
Arithmetic_progression(double m, double c, double col); - конструктор с
параметром
double getSummProgres()override; - сумма
Arithmetic_progression(const Arithmetic_progression& obj, double m, double c,
double col); - конструктор копирование.
Также с классом Geometric_progression.
Класс имеет три поля с модификатором доступа privat:
double member; - первый член прогрессии
double const_ge; - постоянная отношение
double count_el; - кол-во элементов
доступ public:
Geometric_progression(); - обычный конструктор
Geometric_progression(double m, double c, double col); - конструктор с
параметром
double getSummProgres() override; - сумма
Geometric_progression(const Geometric_progression& obj, double m, double c,
double col); - конструктор копирование.
Основная функция main() определена в файле lb3Test1.cpp. Программа
считывает введённые значения с клавиатуры и с помощью цикла оператора switch
(case) выбирает какую функцию выполнять:
1) арифметическая прогрессия - Выполнится класс Arithmetic_progression и
предложится сохранить файл.
2) геометрическая прогрессия - Выполнится класс Geometric_progression и
предложится сохранить файл. Сохранение файла описана в функции save_file().
3) прочитать данные из файла - Читает выбранный файл и выводит содержимое
на экран. Чтение описано в функции read_file().
0)выход - Завершение программы.
