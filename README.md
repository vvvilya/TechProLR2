# Лабораторная работа №2

По теме "Разработка универсальной навигационной комплексной системы"
Выполнили студенты группы М3О-406С-19 Вьюгов Илья, Селезнева Надежда

## Цель работы:

1.  Настройка VS code. Установка minGW и подключение g++.
2.  Создание программы комплексной навигационной системы на языке С++.
3.  Сборка и отладка программы через консоль PowerShell, используя компилятор установленный через MinGW. 
4.  Создание makefile.

## Ход работы:

1. Заварен и налит кофе.
2. Далее было выполнено распределение обязанностей между студентами.
Вьюгов Илья: создание корня программы, а также работа по сборке и отладке.
Селезнева Надежда: создание и корректировка методов классов.
3. Завершена установка и подключение компилятора minGW, найстройка VS code.
4. Написание программы (можно ознакомиться в файле main.cpp)

     Написаны два класса, а именно комплексной навигационной системы и датчиков
     Далее указаны составляющие первого класса:
            name – наименование навигационной системы.
            add_sensor – метод добавляющий датчик к навигационной системе.
            measure_acc – метод возвращающий измерения от всех акселерометров.
            measure_gyro – метод возвращающий измерения от всех гироскопов.
            measure_position – метод возвращающий измерения от всех датчиков положения.
            list_sensors – выводит имена датчиков входящих в состав навигационной системы.
     И также для второго:
            name – содержит имя датчика.
            measurement_unit – единицей измерения того, что он измеряет.
            measurement_range – пара минимального и максимального измеряемого значения.
            measure – метод генерирующий случайное значение с плавающей точкой в диапазоне значений измерителя.

5. Сборка и отладка программы. Сборка производилась через консоль PowerShell, команды сборки и параметры компилятора задавались 
в tasks.json. Затем для удобства сборки был использован makefile.
При помощи выставления флагов -Wall и -Werror были найдены недочеты программы и успешно устранены.

6. Вывод:
 В данной работе:
 - Освежены знания в программировании на языке С++
 - Получен еще один опыт работы с Git
 - Настроен под определенные задачи VS code
 - Исследована информация о компиляторах
 - Подготовлена почва для дальнейшего изучения предмета

