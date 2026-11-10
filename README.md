<div align="center">

# 🚀 C++ Course

**Практический курс по C++: от первой программы до современных возможностей языка**

![C++](https://img.shields.io/badge/C%2B%2B-17%2F20-00599C?style=for-the-badge&logo=c%2B%2B&logoColor=white)
![CMake](https://img.shields.io/badge/CMake-3.16+-064F8C?style=for-the-badge&logo=cmake&logoColor=white)
![License](https://img.shields.io/github/license/koigkio/cpp-course?style=for-the-badge)
![Stars](https://img.shields.io/github/stars/koigkio/cpp-course?style=for-the-badge)
![Last commit](https://img.shields.io/github/last-commit/koigkio/cpp-course?style=for-the-badge)

[Программа](#-программа-курса) •
[Быстрый старт](#-быстрый-старт) •
[Структура](#-структура-репозитория) •
[Участие](#-как-помочь-проекту)

</div>

---

## 📖 О курсе

Этот репозиторий — пошаговый курс по C++ с примерами кода и практическими заданиями.
Каждая тема строится на предыдущих: сначала базовый синтаксис, затем память, ООП, шаблоны и STL.

**Для кого:**
- 🌱 новички, которые только начинают программировать
- 🔄 те, кто переходит с другого языка
- 🧠 те, кто хочет освежить знания перед собеседованием


## ⚡ Быстрый старт

### Что понадобится

- Компилятор с поддержкой C++17 или новее: `g++` 9+, `clang++` 10+ или MSVC 2019+
- [CMake](https://cmake.org/) 3.16+ (по желанию)
- Любой редактор: VS Code, CLion, Visual Studio

### Клонирование

```bash
git clone https://github.com/koigkio/cpp-course.git
cd cpp-course
```

### Сборка одного файла

```bash
g++ -std=c++17 -Wall -Wextra lesson01/main.cpp -o main
./main
```

### Сборка через CMake

```bash
cmake -S . -B build
cmake --build build
```

## 📂 Структура репозитория

```text
cpp-course/
├── lesson01_intro/        # Введение
├── lesson02_types/        # Типы данных
├── lesson03_control/      # Условия и циклы
├── lesson04_functions/    # Функции
├── ...
├── tasks/                 # Задания для самостоятельной работы
├── CMakeLists.txt
└── README.md
```

> ✏️ Названия папок выше примерные — замените их на реальные.

## 🧪 Как заниматься

1. Прочитайте теорию в папке урока.
2. Запустите примеры и поменяйте в них что-нибудь, чтобы посмотреть, что сломается.
3. Решите задания из `tasks/`.
4. Переходите к следующей теме.

## 🛠 Полезные флаги компилятора

| Флаг                   | Зачем нужен                         |
|------------------------|-------------------------------------|
| `-std=c++17`           | Выбор стандарта                     |
| `-Wall -Wextra`        | Больше предупреждений               |
| `-g`                   | Отладочная информация               |
| `-fsanitize=address`   | Поиск ошибок работы с памятью       |

## 🤝 Как помочь проекту

Нашли опечатку или хотите улучшить пример? Будем рады!

1. Сделайте fork репозитория
2. Создайте ветку: `git checkout -b feature/my-improvement`
3. Закоммитьте изменения: `git commit -m "Add: ..."`
4. Отправьте ветку: `git push origin feature/my-improvement`
5. Откройте Pull Request

## 📚 Что почитать дальше

- [cppreference.com](https://en.cppreference.com/) — справочник по языку и STL
- [C++ Core Guidelines](https://isocpp.github.io/CppCoreGuidelines/) — рекомендации по хорошему коду
- [Compiler Explorer](https://godbolt.org/) — смотреть, во что компилируется код



<div align="center">

Если курс оказался полезным, поставьте ⭐ репозиторию!

</div>
