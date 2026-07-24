# Question 5 - Recovery Mechanisms in vi Editor

## Objective

Evaluate the recovery mechanisms available in the vi editor and identify the most reliable recovery strategy after an unexpected system crash.

---

## Recovery Mechanisms

### Swap Files

The vi editor automatically creates swap files while editing a document. These files allow recovery of unsaved changes after an unexpected crash or power failure. Swap files provide the primary recovery mechanism in vi.

---

### Undo History

Undo history allows recently performed editing operations to be reversed. It helps users recover accidental modifications during an editing session. However, undo history is generally lost if the editor exits unexpectedly.

---

### Registers

Registers temporarily store copied and deleted text within the editor. They help recover previously copied or deleted content during editing. Registers are useful for editing efficiency but are not intended for crash recovery.

---

### Backup Files

Backup files preserve a previous version of a document before modifications are saved. They provide protection against accidental overwriting or corruption of important files.

---

### Auto-Recovery

When vi detects an existing swap file after a crash, it offers automatic recovery of unsaved changes. This mechanism helps restore work with minimal data loss.

---

## Most Reliable Recovery Strategy

The most reliable recovery method is the use of swap files together with vi's built-in recovery feature. Swap files preserve unsaved work and allow users to recover documents after unexpected system failures. Maintaining backup files in addition to swap files further improves data protection.

---

## Conclusion

The vi editor provides multiple recovery mechanisms including swap files, backup files, registers, undo history, and auto-recovery. Among these, swap files combined with auto-recovery provide the most effective protection against data loss.

## Files Included

- Recovery_Strategy.txt
- Screenshots of vi operations
