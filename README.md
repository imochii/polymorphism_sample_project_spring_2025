# Monsters Description

This program utilizes polymorphism, inheritance relationships, and command-line input to allow the user to interact with and battle different kinds of monsters. Equipped with functional input validation, this program follows a script, formatting and displaying prompts and corresponding choices to the user. The user is often given the choice to either fight or flee from the monster, and once the user has provided valid input, the program guides them through resulting dialogue and/or action sequences. Each monster has its own unique challenges and characteristics.

## Languages Used
* C++
* CMake

## Key Concepts
* Polymorphism: an object-oriented concept that applies when you have at least two objects of the same type where you can call the same method on them, and different things will happen
* Object-Oriented Programming: "a style of programming characterized by the identification of classes of objects closely linked with the methods (functions) with which they are associated" (https://www.gartner.com/en/information-technology/glossary/oop-object-oriented-programming#:~:text=Object%2Doriented%20programming%20(OOP),inheritance%20of%20attributes%20and%20methods)
* Inheritance: "a mechanism where you can derive a class from another class for a hierarchy of classes that share a set of attributes and methods" (https://stackify.com/oop-concept-inheritance/)

## Meet the Monsters

Each monsters' methods are defined in the same order in their respective .cpp files as they are declared in their header files.

### Water Monsters

There are three Water Monster classes:
* `Water_Monster` (superclass)
* `Lake_Monster` (subclass)
* `Sea_Monster` (subclass)

#### Overridden Methods:
* virtual string scare

All three classes have been declared and defined in their own header and .cpp files and tested in `Water_Monster_Testing.cpp`, and the main program has also been created in `Water_Monster_Main.cpp`.

### Darkness Monsters

There are three Darkness Monster classes:
* `Darkness_Monster` (superclass)
* `Closet_Monster` (subclass)
* `Under_Bed_Monster` (subclass)

#### Overridden Methods: 
* virtual string scare

All three classes have been declared and defined in their own header and .cpp files and tested in `Darkness_Monster_Testing.cpp`, and the main program has also been created in `Darkness_Monster_Main.cpp`.

### Sky Monsters

There are three Sky Monster classes:
* `Sky_Monster` (superclass)
* `Cloud_Monster` (subclass)
* `Comet_Monster` (subclass)

#### Overridden Methods:
* virtual string scare

All three classes have been declared and defined in their own header and .cpp files and tested in `Sky_Monster_Testing.cpp`.

### Contributers

* Catherine J. (contributed to CMakeLists.txt, Closet_Monster.cpp, Closet_Monster.h, Darkness_Monster.cpp, Darkness_Monster.h, Darkness_Monster_Main.cpp, Darkness_Monster_Testing.cpp, Under_Bed_Monster.cpp, Under_Bed_Monster.h, Cloud_Monster.cpp, Cloud_Monster.h, Comet_Monster.cpp, Comet_Monster.h, Sky_Monster_Testing.cpp, Lake_Monster.cpp, Lake_Monster.h, Sea_Monster.cpp, Sea_Monster.h, Water_Monster_Main.cpp, Water_Monster_Testing.cpp, Water_Monster.cpp, Water_Monster.h)
* Lisa D. (contributed to CMakeLists.txt, Closet_Monster.cpp, Closet_Monster.h, Darkness_Monster.cpp, Darkness_Monster.h, Darkness_Monster_Main.cpp, Darkness_Monster_Testing.cpp, Under_Bed_Monster.cpp, Under_Bed_Monster.h, Cloud_Monster.cpp, Cloud_Monster.h, Comet_Monster.cpp, Comet_Monster.h, Sky_Monster_Testing.cpp, Lake_Monster.cpp, Lake_Monster.h, Sea_Monster.cpp, Sea_Monster.h, Water_Monster_Main.cpp, Water_Monster_Testing.cpp, Water_Monster.cpp, Water_Monster.h)
