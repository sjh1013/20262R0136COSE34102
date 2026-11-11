# Process

- Process states: new, ready, running, waiting, terminated
- PCB (Process Control Block) stores process state, program counter,
  CPU registers, scheduling info, memory-management info, etc.
- fork() creates a child process; exec() replaces the process image.
