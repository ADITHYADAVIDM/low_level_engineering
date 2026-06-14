# Day 3: Low-Level Memory Architecture & Terminal Mastery

## 1. Physical Memory Layout
* **Text (Code):** Read-only binary instructions. rogue pointers trigger Seg Faults here.
* **Data & BSS:** Permanent global/static variables (Initialized vs Uninitialized/Zeroed).
* **Heap:** Dynamic memory via `malloc()`, grows upward, controlled by programmer (`free()`).
* **Stack:** Function sandbox for local variables, grows downward. Fast, automatic lifecycle.

## 2. Pointers & CPU Interpretation
* Pointers store raw 64-bit hexadecimal addresses (8 bytes wide on a 64-bit OS).
* Type is a compiler constraint, not a hardware one. Pointers go down General Purpose CPU highways; floating-point `doubles` travel down specialized circuits parsed via IEEE 754 rules.
* **Pointer Arithmetic:** `ptr + i` scales automatically under the hood: `Base Address + (i * sizeof(Type))`.

## 3. The 4 Stages of Compilation (GCC)
1. **Preprocessing (`cpp`):** Expands headers (`#include`), strips comments. Outputs `.i`.
2. **Compilation (`cc1`):** Translates C logic into raw assembly language. Outputs `.s`.
3. **Assembly (`as`):** Encodes assembly instructions into binary object code. Outputs `.o`.
4. **Linking (`ld`):** Glues object code with system libraries (like `printf`/`puts` from `libc`) to build the final executable binary.

## 4. Linux Environment Mastery
* **Absolute Paths:** Starters from the root `/` (e.g., `/home/david/`).
* **Relative Paths:** Based on current standing using `.` (current) and `..` (parent).
* **`~` (Tilde):** Shell expansion shortcut for the user's home directory (`/home/david`).
* **`$PATH` Variable:** Secure system checklist of folders the shell searches to run commands without paths.
* **User-Level Customization:** Modified `~/.bashrc` to create a bulletproof global `upload` alias that teleports to the repository and pushes code to GitHub safely from anywhere in the file system.
