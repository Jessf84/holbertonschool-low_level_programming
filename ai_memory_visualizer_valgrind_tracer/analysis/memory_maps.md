# AI Memory Visualizer Analysis

1. How Memory Works (In Simple Terms)
* **Stack Memory**: This is automatic. When a function runs, it creates a temporary workspace for its variables. As soon as the function finishes, that workspace is completely wiped out.
* **Heap Memory**: This is manual. If you ask for heap space using `malloc()`, it stays there forever until you explicitly say `free()`. If you forget, that memory gets trapped.
* **Pointers & Aliasing**: A pointer is just an address card. If two pointers have the exact same address written on them, they are "aliases." Changing the data using one pointer changes what the other pointer sees too.

---

2. Program Execution Memory Maps

### Program 1: stack_example
This program only uses basic, automatic variables.

* **Aliasing**: None. No variables are sharing addresses.

### Program 2: heap_example
This program borrows space from the manual heap locker.
+-----------------------------------------------------------------+| STACK WORKSPACE (Temporary)                                     ||   - heap_ptr        (Address: 0x7ffd1200) -> Address: 0x55aa3000|+-----------------------------------------------------------------+| HEAP WORKSPACE (Manual Locker)                                  ||   - Box 0x55aa3000  Size: 4 Bytes         -> Value: 42          |+-----------------------------------------------------------------+* **Lifetimes**: The pointer variable `heap_ptr` disappears when the program ends, but the Box `0x55aa3000` stays locked until `free()` is called.
* **Aliasing**: None.

### Program 3: aliasing_example
Two pointers pointing to the exact same spot.
+-----------------------------------------------------------------+| STACK WORKSPACE (Temporary)                                     ||   - primary_val     (Address: 0x7ffd5500) -> Value: 99          ||   - alias_ptr_1     (Address: 0x7ffd5508) -> Address: 0x7ffd5500||   - alias_ptr_2     (Address: 0x7ffd5510) -> Address: 0x7ffd5500|+-----------------------------------------------------------------+| HEAP WORKSPACE (Manual Locker)                                  ||   (Empty)                                                       |+-----------------------------------------------------------------+* **Lifetimes**: Everything drops out of memory together when `main` finishes.
* **Aliasing**: Since `alias_ptr_1` and `alias_ptr_2` both look at `primary_val`, changing `*alias_ptr_1 = 50` makes `*alias_ptr_2` see 50 as well.

### Program 4: crash_example
A broken pointer looking at a deleted locker.
+-----------------------------------------------------------------+| STACK WORKSPACE (Temporary)                                     ||   - dangling_ptr    (Address: 0x7ffd9900) -> Address: 0x55aa4000|+-----------------------------------------------------------------+| HEAP WORKSPACE (Manual Locker)                                  ||   - Box 0x55aa4000  [STATUS: DELETED/FREED]                     |+-----------------------------------------------------------------+* **Lifetimes**: The heap box was deleted early, leaving `dangling_ptr` looking at an empty, forbidden space.
* **Aliasing**: The pointer is lost and broken. Trying to use it causes a crash.

---

3. Spotting the AI Mistake

### What the AI Said:
> *"When you type `p1 = NULL;`, the computer automatically cleans up and deletes the heap memory block for you so it doesn't leak."*

### Why the AI Was Wrong:
The AI thought C acts like Python or Java, which cleans up after you automatically. In C, setting a pointer to `NULL` just wipes the address card in your hand. It does **not** clean up the heap locker. The locker stays stuck full of data, and because you threw away the address card, you can never unlock it again. This creates a **Memory Leak**.

### How I Fixed It:
I changed the explanation to show that you must 
