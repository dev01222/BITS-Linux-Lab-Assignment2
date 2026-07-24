# Question 4 - Log Monitoring Using Linux Pipelines

## Objective

Design a Linux command pipeline that continuously monitors a log file, extracts ERROR messages, stores them in a separate report, and suppresses unnecessary output.

---

## Step 1: Create a Sample Log File

### Command

```bash
touch server.log
```

### Observation

This command creates the log file that will be monitored. It serves as the input source for the command pipeline.

---

## Step 2: Monitor the Log File

### Command

```bash
tail -f server.log
```

### Observation

The `tail -f` command continuously monitors the log file and displays new entries as they are added. It is commonly used for real-time log analysis.

---

## Step 3: Extract ERROR Messages

### Command

```bash
tail -f server.log | grep "ERROR"
```

### Observation

The pipeline displays only log entries containing the word **ERROR**. Using `grep` filters unnecessary log messages and focuses on important events.

---

## Step 4: Store ERROR Messages

### Command

```bash
tail -f server.log | grep "ERROR" > error_report.txt
```

### Observation

The output is redirected into a separate report file. This keeps the terminal clean while maintaining a permanent record of error messages.

---

## Step 5: Suppress Unnecessary Output

### Command

```bash
tail -f server.log 2> /dev/null
```

### Observation

Redirecting error messages to `/dev/null` suppresses unnecessary output from the terminal. This improves readability during monitoring.

---

## Linux Concepts Used

### Pipes (|)

Pipes pass the output of one command as the input to another command, allowing multiple commands to work together efficiently.

### grep

The `grep` command searches text and displays only lines matching a specified pattern.

### Redirection (>)

The `>` operator redirects command output into a file.

### /dev/null

`/dev/null` discards unwanted output and is commonly used to suppress unnecessary messages.

---

## Conclusion

Linux command pipelines provide an efficient method for real-time log monitoring. Combining `tail`, `grep`, pipes, output redirection, and `/dev/null` creates a simple yet powerful monitoring solution.

## Files Included

- commands.txt
- Report.txt
- Screenshots of command execution
