# Simple Crash Report: crash_example

1. What Happened?
The program `crash_example` suddenly stops and screams **Segmentation Fault (SIGSEGV)**. This isn't random bad luck; it is a forced shutdown because the code tried to touch forbidden memory.

---

2. The Chain of Events (Why it Crashed)
The crash happens because of a mistake called **Use-After-Free**:

1. The program asks for a dynamic chunk of memory on the heap.
2. The program safely releases it by calling `free()`. The computer takes the memory back.
3. **The Mistake**: The pointer variable still remembers the old address. It becomes a "dangling pointer."
4. The program tries to write data to that old address anyway (`*ptr = 42`). 
5. The computer's security unit sees the program touching memory it doesn't own anymore and instantly kills the program to protect the system.

---

3. Spotting the AI Mistake

### What the AI Said:
> *"The crash happened because the program ran out of RAM space due to an infinite loop, causing the stack to crash into the heap."*

### Why the AI Was Wrong:
The AI guessed that the computer ran out of memory space. That is completely wrong. The computer had plenty of space. The crash happened instantly on one single line because the program broke a permission rule by trying to access a freed address. It's a rule-breaking issue, not a running-out-of-space issue.

---

4. How to Fix It
To fix it, always set your pointer to `NULL` right after freeing it. That way, it forgets the old address and won't try to access it by mistake:

```c
free(ptr);
ptr = NULL; // Now it is safe and clean!
```
