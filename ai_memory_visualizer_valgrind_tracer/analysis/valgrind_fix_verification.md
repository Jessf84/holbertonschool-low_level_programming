# Valgrind Fix Verification

1. The Strategy
To fix the memory errors found by Valgrind, two major rules were followed:
1. **For the Leaks**: Every single `malloc()` call now has a matching `free()` call before the function finishes.
2. **For the Crashes**: Pointers are set to `NULL` immediately after being freed so they can never cause a **Use-After-Free** violation.

---

2. Before and After Results

### heap_example Fix
* **Before**: Valgrind reported bytes were "definitely lost."
* **Fix**: Added `free(heap_ptr);` right before the main function returns.
* **After**: Valgrind reports: "All heap blocks were freed -- no leaks are possible."

### crash_example Fix
* **Before**: Program crashed with an Invalid Write segmentation fault.
* **Fix**: Removed the code that tried to use the pointer after it was freed.
* **After**: Program runs smoothly to completion with 0 errors.

---

3. Spotting the AI Mistake

### What the AI Said:
> *"To fix all leaks completely, you should call free() multiple times on the same pointer just to be extra safe."*

### Why the AI Was Wrong:
Calling `free()` twice on the exact same pointer causes a critical crash called a **Double Free**. The AI's advice would make the program completely unstable. You must only free an allocated pointer exactly once.

### How I Fixed It:
I ignored the AI's dangerous suggestion and ensured each allocation has exactly one clean `free()` match.
