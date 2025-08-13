# C++ Module 01
# Concepts:
- dynamic memory allocation: `new` and `delete`
- pointers to members
- references
- file manipulation
- `switch` statements

# ex00

Implemented a `Zombie` class with functions to create and announce zombies, exploring stack vs. heap allocation and object lifetime management.

Usage:
```
make
```
```
./zombie
```

# ex01

Created a `zombieHorde()` function that dynamically allocates and initializes multiple zombies in a single block, practicing memory management and cleanup.

Usage:
```
make
```
```
./horde
```

# ex02

Demonstrated the difference between pointers and references by printing both memory addresses and values of the same string in multiple ways.

Usage:
```
make
```
```
./brain
```

# ex03

Built `Weapon`, `HumanA`, and `HumanB` classes to explore the differences between holding objects by reference vs. by pointer and their effect on object behavior.

Usage:
```
make
```
```
./violence
```

# ex04

Developed a text-replacement program that reads a file, replaces all occurrences of a given string with another, and outputs to a `.replace` file without using `std::string::replace()`.

Usage:
```
make
```
```
./antiSed <filename> <string1> <string2>
```

# ex05

Automated a `Harl` class to print preset messages based on severity level using pointers to member functions instead of chained conditionals.

Usage:
```
make
```
```
./harl
```

# ex06

Extended `Harl` with a filter system to display only messages at or above a given severity level, using a `switch` statement for control flow.

Usage:
```
make
```
```
./harlFilter <LEVEL>
```

----
✅ Check out [C++ Module 02](https://github.com/ricvrdv/cpp-02) - function and operator overloading

⏪️ Go back to [C++ Module 00](https://github.com/ricvrdv/cpp-00) - namespaces, classes, member functions, stdio streams, ...
