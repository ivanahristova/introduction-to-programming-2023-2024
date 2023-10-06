# Упражнение № 1
# Основни понятия. Типове данни. Променливи и константи. Оператори.

## I. Въведение

- Език за програмиране
- Парадигми на програмиране
- C++
- Компилатор
- Среди за разработка

## II. Visual Studio Code

Ще бъдат необходими:
- Компилатор
- Visual Studio Code

### Инсталиране на компилатора:
Ще използваме компилатора MinGW, който може да бъде свален от [тук](https://www.mingw-w64.org/downloads/).

1. Запомнете мястото, на което го инсталирате (то ще бъде необходимо по-нататък)
2. С помощта на [това](https://www.architectryan.com/2018/03/17/add-to-the-path-on-windows-10/) ръководство:
   1. Отворете *Environment Variables* прозореца
   2. Изберете *Edit* на *Path* в секцията *System Variables*
   3. Изберете *New*
   4. Навътре в папката, в която инсталирахме компилатора се съдържа папка с име **bin** (съдържа програми като g++, gcc, gdb и т.н.). Поставете пътя до тази папка на новия ред в прозореца и затворете всички менюта с OK.
3. Проверка
   1. Отворете PowerShell или Cmd и като използвате команда **g++**, очакваният изход е **g++: fatal error: no input files**.
   2. Ако изходът е подобен на **g++ is not a recognized command**, значи имаме пропуск по пътя.

### Инсталиране и работа с Visual Studio Code:

Visual Studio Code може да бъде свален от [тук](https://code.visualstudio.com/download).

Компилиране на един файл с команда в терминала:

```
g++ -std=c++17 -Wall -Wextra -Wpedantic <filename.cpp>
```
Резултатът от изпълнението на тази команда е изпълним файл (**a.exe**), който се намира в същата папка.

Изпълнение на файл с команда в терминала:

```
.\<filename.exe>
```


## III. Информация, памет, съхранение

## IV. Типове данни

### Обща класфикация

- Спрямо вида
1. Булеви (bool)
2. Символни (char)
3. Целочислени (short, int, long, ...)
4. Дробни (float, double, ...)

- Спрямо областта на видимост

Какво разбираме под понятието блок: поредица от инструкции, дефинирани между две къдрави скоби {}.

1. Локални - ако променливата е създадена в блок, то тя може да се достъпва от момента на създаването й до края на блока, в който е създадена
2. Глобални - ако променливата не е създадена в блок, то тя може да се достъпва навсякъде след създаването й

### Декларация и инициализация на променлива

Процесът на създаване на променлива се нарича декларация.

Задаването на стойност на променлива се нарича инициализация. Може да се ползва оператор за присвояване (=) или конструктор.

Инициализацията може да стане по време на декларирането (inline) или на по-късен етап. Ако променлива не бъде инициализирана, то нейната стойност е недефинирана.

Пример:
```c++
<тип> <име> [= <стойност>;]
```

## IV. Оператори

1. Оператори за сравнение (резултатът от тях е булев - истина/лъжа): ==, !=, >, <, <=, =>
2. Аритметични оператори:
   - бинарни: +, -, *, /, %
   - унарни: ++, --
3. Логически оператори: &&, ||, !
4. Оператори за вход и изход: <<, >>
5. Оператори за присвояване: =, +=, -=, /=, *=, %=

Всеки оператор има:
-   [Приоритет](https://en.cppreference.com/w/cpp/language/operator_precedence)
-   Асоциативност
-   Позиция на оператора спярмо аргумента (*префиксен*, *инфиксен* и *суфиксен*)

## V. Основни операции

- Събиране (+)
- Изваждане (-)
- Умножение (*)
- Делене (/)
- Остатък от делене (%)
- Четене от стандатния вход (std::cin >> подходяща променлива)
- Извеждане на стандартни изход (std::cout << подходяща променлива)

## VI. Задачи

1. Да се декларира променлива от произволен целочислен тип.

2. Да се декларира и инициализира променлива от същия тип с подходяща стойност.

3. Да се присвои стойността на втората променлива върху първата.

4. Да се намери разликата на две целочислени числа и да се запази в променлива с име result.

5. (*) Да се намери абсолютната разлика на две целочислени числа и да се запази в променлива с име result.

6. Да се намери произведението на две целочислени числа.

7. Да се инициализират 3 променливи с произволни стойности. Всяка от тях да се инкрементира с единица и да се принитира старата й стойност.

8. Да се инициализират 3 променливи с произволни стойности. Всяка от тях да се декрементира с единица и да се принтира новата й стойност.

9. Да се инициализират променливи със стойностите (65, истина, 'А', 65.0).

10.  Дадена е променлива от тип int със стойност 67. Какъв ще бъде резултата от присвояването й върху променливи от булев, символен и тип с плаваща запетая.

11.   Да се определи какво ще изведе:
```
int a, b, c, d, e, f;
cout << (a = b = c = d = e = f = 5) << endl;
```

12. Да се инициализира променлива от целочислен тип. Да се увеличи стойността й с 5 и да се изведе на екрана.

13. Да се инициализират две променливи с произолни целочислени стойности. Да се изведе резултатът от проверката им за
    - равенство,
    - разлика,
    - по-малко или равно,
    - по-голямо или равно,
    - по-малко,
    - по-голямо
с подходящи съобщения

14. Да се прочете целочислено число от стандартния вход.
    - Да се изведе последната му цифра
    - Да се изведе дали е четно или нечетно

15. Да се прочете символ от стандартния вход.
    - Да се изведе дали символът е малка латинска буква.
    - Да се изведе дали символът е главна латиснка буква.