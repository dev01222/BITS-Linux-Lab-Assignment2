# Question 3 - File Processing Using Linux System Calls

## Objective

Design a C program that creates a file, writes employee records, updates specific records, retrieves records efficiently, and demonstrates Linux system calls.

---

## Step 1: Write the C Program

### File

```text
employee_records.c
```

### Observation

A C program was developed using Linux system calls for file operations. The program creates a file, stores employee records, updates a specific record without rewriting the entire file, and retrieves records efficiently. Using system calls provides direct interaction with the operating system.

---

## Step 2: Compile the Program

### Command

```bash
gcc employee_records.c -o employee_records
```

### Observation

The GCC compiler converts the C source code into an executable program. Successful compilation produces the executable `employee_records`. Compilation also verifies the correctness of the source code.

---

## Step 3: Execute the Program

### Command

```bash
./employee_records
```

### Observation

The program creates a file, writes employee information, updates a selected record using file positioning, retrieves stored records, and closes the file properly. The output demonstrates successful file processing using Linux system calls.

---

## Linux System Calls Used

### open()

The `open()` system call creates or opens a file and returns a file descriptor for subsequent operations.

---

### write()

The `write()` system call stores employee records in the file.

---

### lseek()

The `lseek()` system call moves the file pointer to a specific location, allowing updates without rewriting the entire file.

---

### read()

The `read()` system call retrieves data from the file.

---

### close()

The `close()` system call releases the file descriptor after all operations are complete.

---

## Conclusion

The program demonstrates efficient file processing using Linux system calls. The use of `open()`, `read()`, `write()`, `lseek()`, and `close()` allows direct control over file operations and supports efficient record management.

## Files Included

- employee_records.c
- Report.txt
- Screenshots of program execution
