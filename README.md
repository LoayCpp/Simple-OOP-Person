# 👤 Simple-OOP-Person

A **C++ project** demonstrating core **Object-Oriented Programming (OOP)** principles through a realistic class hierarchy:
`Person → Employee → Programmer`.

This project is ideal for learners who want to **move from basic OOP concepts to real inheritance-based design**.

---

## 🚀 Features

* **🔒 Encapsulation**

  * All class data members are private.
  * Controlled access through getters and setters.

* **🧬 Inheritance**

  * `clsEmployee` inherits from `clsPerson`
  * `clsProgrammer` inherits from `clsEmployee`

* **🔁 Method Overriding**

  * Each derived class overrides the `print()` method to display extended information.

* **🔗 Constructor Chaining**

  * Derived class constructors call base class constructors using initializer lists.

* **🧩 Abstraction**

  * High-level methods like `sendEmail()`, `sendSMS()`, and `print()` hide internal implementation details.

---

## 🛠️ Technologies Used

* **Language:** C++
* **Paradigm:** Object-Oriented Programming (OOP)

---

## 🏗️ Class Hierarchy

```
clsPerson
   ↓
clsEmployee
   ↓
clsProgrammer
```

---

## 🏷️ Class Overview

### 🔹 `clsPerson`

**Represents a basic person entity**

* **Private Members**

  * `_id`, `_firstname`, `_lastname`, `_Email`, `_phone`
* **Key Methods**

  * `FirstName()`, `LastName()`, `Fullname()`
  * `sendEmail()`, `sendSMS()`
  * `print()`

---

### 🔹 `clsEmployee` (inherits from `clsPerson`)

**Adds employee-related data**

* **Additional Members**

  * `_Title`, `_Department`, `_salary`
* **Concepts Used**

  * Inheritance
  * Method Overriding (`print()`)

---

### 🔹 `clsProgrammer` (inherits from `clsEmployee`)

**Specialized employee with programming skills**

* **Additional Member**

  * `_MainProgrammingLanguage`
* **Concepts Used**

  * Multi-level inheritance
  * Extended method overriding

---

## 💻 Usage Example

```cpp
int main()
{
    clsProgrammer pro1(
        10,
        "Loay",
        "Alarify",
        "loa@gmail",
        "777",
        "Engineer",
        "IT",
        2000,
        "C++"
    );

    pro1.print();
}
```

---

## 🎯 Learning Outcomes

By studying this project, you will learn:

1. **Encapsulation** – Protecting data using access modifiers.
2. **Inheritance** – Reusing and extending base class functionality.
3. **Constructor Chaining** – Initializing base and derived classes correctly.
4. **Method Overriding** – Customizing behavior in derived classes.
5. **Abstraction** – Exposing only what the user needs.

---

## 📌 Suggested Improvements

* Mark getter methods as `const`.
* Declare `print()` as `virtual` in the base class.
* Split classes into `.h` and `.cpp` files.
* Add validation for email and phone values.
* Use `override` keyword in derived classes for clarity.

---

## 🏆 Author

**Loay Alarify**

* GitHub: [github.com/LoayCpp](https://github.com/LoayCpp)
* Email: [loayalarify777184509@gmail.com](mailto:loayalarify777184509@gmail.com)

---

## ⭐ License

This project is **open-source** and intended for **learning and educational purposes**.
