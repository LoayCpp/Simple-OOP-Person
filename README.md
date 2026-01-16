# 👤 Simple-OOP-Person

A **C++ project** to showcase core **Object-Oriented Programming (OOP) concepts** using a `Person` class.  
Perfect for beginners & intermediate learners to understand **Encapsulation, Abstraction, Static members, and Constructors** in practice.  

---

## 🚀 Features

- **🔒 Encapsulation:** All data is private with getters & setters for safe access.  
- **🧩 Abstraction:** Methods like `sendEmail()`, `sendSMS()`, and `print()` hide internal details.  
- **⚡ Static Members:** Unique IDs automatically assigned to each object using a static counter.  
- **🛠️ Constructors:** Initialize objects with first name, last name, email, and phone.

---

## 🛠️ Technologies Used

- **Language:** C++  
- **Concepts:** Object-Oriented Programming (OOP) fundamentals  

---

## 🏷️ Class Overview

### `clsPerson` class

| 🔹 Type | 🔹 Example |
|---------|------------|
| Private Variables | `_firstname`, `_lastname`, `_Email`, `_phone`, `_id` |
| Static Variable | `counter` (for unique ID) |
| Methods | `FirstName()`, `LastName()`, `Fullname()`, `Email()`, `Phone()`, `sendEmail()`, `sendSMS()`, `print()` |

---

## 💻 Usage Example

```cpp
#include "clsPerson.h"

int main() {
    clsPerson person1("Loay", "Alarify", "loay@gmail.com", "+967733693579");
    person1.print();
    person1.sendEmail("Hello", "How are you?");
    person1.sendSMS("Hi Ahmed");

    clsPerson person2("Nezar", "Alarify", "nezar@gmail.com", "+96771823579");
    person2.print();
}
```
## 🎯 Learning Outcomes

By studying this project, you will learn:

1. **🔒 Encapsulation:** How to hide data and control access with getters/setters.  
2. **🧩 Abstraction:** How to create simple, usable interfaces hiding internal logic.  
3. **⚡ Static Members:** How to share data across objects, e.g., for unique ID generation.  
4. **🛠️ Constructors:** How to properly initialize objects with required data.  

---

## 📌 Recommended Improvements

- Make getters **`const`** for safer code.  
- Implement **inheritance**, e.g., `Employee` class that inherits from `Person`.  
- Split the class into **header (.h) and implementation (.cpp)** files for cleaner structure.  
- Add **input validation** for email addresses and phone numbers.  

---

## 🏆 Author

**Loay Alarify**  
- GitHub: [github.com/LoayCpp](https://github.com/LoayCpp)  
- Email: loayalarify777184509@gmail.com  

---

## ⭐ License

This project is **open-source** and free to use for **learning and practice purposes**.


