
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

* **🔀 Polymorphism (Runtime)**

  * Using `virtual` functions and base class pointers to achieve dynamic binding.

---

## 🛠️ Technologies Used

* **Language:** C++
* **Paradigm:** Object-Oriented Programming (OOP)

---

## 🏗️ Class Hierarchy

```
     clsPerson 
     ↓        ↓
clsEmployee  clsPatient 
    ↓
clsDoctor
        
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
  * `print()` (virtual)

---

### 🔹 `clsEmployee` (inherits from `clsPerson`)

**Adds employee-related data**

* **Additional Members**

  * `_Title`, `_Department`, `_salary`
* **Concepts Used**

  * Inheritance
  * Method Overriding (`print()`)

---

### 🔹 `clsclsDoctor` (inherits from `clsEmployee`)

 * Struct Used: stJobDetails (contains _Specialization, _YearsOfExperience)

## 💻 Usage Example

```cpp
int main()
{
clsDoctor Doctor(101, "Dr.Ahmed", "777123456", "Surgery", 1500, "Orthopedic", 8);
clsPatient Patient(202, "Hassan", "777777771", "Knee Pain", "Dr.Ahmed");


clsPerson* person1 = &Doctor;
clsPerson* person2 = &Patient;


person1->PrintInfo();
Doctor.PrintReport();


person2->PrintInfo();
```

---

## 📘 What I Learned From This Project

During the development of this project, I learned and practiced the following concepts:

* Designing a **multi-level inheritance hierarchy**.
* Using **virtual functions** to enable runtime polymorphism.
* How **base class pointers** call derived class methods dynamically.
* The importance of **constructor chaining** with initializer lists.
* The difference between **compile-time vs runtime polymorphism**.
* Writing extensible and reusable OOP-based code.
* Applying encapsulation to protect internal data.   
* Using **structs inside classes** to organize related data logically.
* Creating **interfaces** with **pure virtual functions** to enforce standard behavior.
* Implementing **runtime polymorphism** using base class and interface pointers.
* Using **friend classes** for selective access to private data while maintaining encapsulation.
* Enhancing **data encapsulation** with structured and organized class members.

These concepts helped me write cleaner, more flexible, and maintainable object-oriented code.

---

## 🎯 Learning Outcomes

By studying this project, you will learn:

1. **Encapsulation** – Protecting data using access modifiers.
2. **Inheritance** – Reusing and extending base class functionality.
3. **Constructor Chaining** – Initializing base and derived classes correctly.
4. **Method Overriding** – Customizing behavior in derived classes.
5. **Abstraction** – Exposing only what the user needs.
6. **Polymorphism** – Achieving dynamic behavior at runtime.
7. **interfaces**  -  with `pure virtual functions` to enforce standard behavior.
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

## 👤 Developer  

<strong > Loay Anwar</strong> <br>
 <a href="https://github.com/LoayCpp">
    <img width="70" height="70" alt="Loay-modified" src="https://github.com/user-attachments/assets/8fee5f57-fc06-4723-a7ad-2d077ab1d7e2" />
</a>


  <a href="https://www.linkedin.com/in/loay-anwar-alarify-259634260" target="_blank">
    <img src="https://img.shields.io/badge/LinkedIn-0077B5?style=for-the-badge&logo=linkedin&logoColor=white" alt="LinkedIn" />
  </a>
  <a href="https://www.facebook.com/share/1ByuvJEiyu/" target="_blank">
    <img src="https://img.shields.io/badge/Facebook-1877F2?style=for-the-badge&logo=facebook&logoColor=white" alt="Facebook" />
  </a>
  <a href="https://www.instagram.com/7.loa7?igsh=cWxjeHRzM2pnaWc2" target="_blank">
    <img src="https://img.shields.io/badge/Instagram-E4405F?style=for-the-badge&logo=instagram&logoColor=white" alt="Instagram" />
  </a>
    </a>
   <a href="https://t.me/Loay_Anwar" target="_blank">
    <img src="https://img.shields.io/badge/Telegram-26A5E4?style=for-the-badge&logo=telegram&logoColor=white" alt="Telegram" />
  </a>
    <a href="https://wa.me/967733693579" target="_blank">
    <img src="https://img.shields.io/badge/WhatsApp-25D366?style=for-the-badge&logo=whatsapp&logoColor=white" alt="WhatsApp" />
      </a>   
  <a href="https://x.com/7lo_ay" target="_blank">
  <img src="https://img.shields.io/badge/X-000000?style=for-the-badge&logo=x&logoColor=white" alt="X" />
</a>
