# Question 2 - Process Creation and Monitoring

## Objective

Design a C program that creates child processes using `fork()`, monitors their execution, prevents zombie processes, and terminates unresponsive child processes using signals.

---

## Step 1: Write the C Program

### File

```text
process_monitor.c
```

### Observation

A C program was developed to demonstrate process creation and management in Linux. The program uses the `fork()` system call to create child processes. It monitors the execution of child processes and ensures proper cleanup. This helps demonstrate process control in a multitasking operating system.

---

## Step 2: Compile the Program

### Command

```bash
gcc process_monitor.c -o process_monitor
```

### Observation

The `gcc` compiler converts the C source code into an executable program. Compilation checks the program for syntax and compilation errors before execution. Successful compilation produces an executable named `process_monitor`.

---

## Step 3: Execute the Program

### Command

```bash
./process_monitor
```

### Observation

The program creates child processes, monitors their execution, waits for them to complete, and prevents zombie processes by collecting their exit status. If necessary, signals can be used to terminate child processes. This demonstrates process synchronization and management.

---

## Linux Concepts Used

### fork()

The `fork()` system call creates a new child process by duplicating the parent process. The parent and child execute independently after the fork.

---

### wait()

The `wait()` function allows the parent process to wait until a child process terminates. This prevents zombie processes from remaining in the system.

---

### kill()

The `kill()` system call sends signals to a process. It can terminate unresponsive child processes safely using signals such as `SIGTERM` or `SIGKILL`.

---

## Conclusion

The program demonstrates process creation, monitoring, synchronization, and signal handling in Linux. Proper use of `fork()`, `wait()`, and signals ensures efficient process management and prevents zombie processes.

## Files Included

- process_monitor.c
- Report.txt
- Screenshots of program execution
