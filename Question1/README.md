# Question 1 - Duplicate Submission Detection and Backup

## Objective

Design a shell script to identify duplicate submissions, create backups of unique submissions, generate a processing report, and store error messages separately.

---

## Step 1: Create the Shell Script

### File

```text
duplicate_backup.sh
```

### Observation

A Bash shell script was created to automate the required file management tasks. The script combines multiple Linux commands into a single executable program. Automating the process reduces manual effort and improves consistency. The script performs duplicate detection, backup creation, report generation, and error logging.

---

## Step 2: Make the Script Executable

### Command

```bash
chmod +x duplicate_backup.sh
```

### Observation

This command grants execute permission to the shell script. After execution, the script can be run directly from the terminal. Making the script executable is a standard practice in Linux. It allows the operating system to treat the file as a program.

---

## Step 3: Execute the Script

### Command

```bash
./duplicate_backup.sh
```

### Observation

This command executes the shell script. During execution, the script scans the submission directory, detects duplicate files, backs up unique submissions, generates a report, and stores any errors in a separate log file. Running a single script simplifies the entire workflow.

---

## Linux Commands Used

### cp

The `cp` command copies unique files into the backup directory. It preserves the original files while creating secure backup copies. This ensures that important submissions are protected from accidental loss.

---

### find

The `find` command searches for files within the submission directory. It allows the script to process every submission automatically without manually specifying file names.

---

### sort and uniq

The `sort` and `uniq` commands help identify duplicate files. Sorting arranges the data into order, while `uniq` detects repeated entries. Together they simplify duplicate detection.

---

### Redirection Operators

The `>` operator redirects command output into report files. The `2>` operator redirects error messages into a separate error log. Separating normal output and errors makes debugging easier and keeps reports organized.

---

## Conclusion

The shell script successfully automates duplicate detection, backup creation, report generation, and error logging. Linux file-handling commands and output redirection make the solution efficient and easy to maintain. Automating repetitive administrative tasks reduces errors and improves system reliability.

## Files Included

* duplicate_backup.sh
* Report.txt
* errors.txt
* Screenshots of script execution
