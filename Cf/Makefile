# C++
CC=g++
CFLAGS= -Wall -Wextra -Wshadow -D_GLIBCXX_ASSERTIONS -DDEBUG -ggdb3 -fmax-errors=2 -std=c++17
EXEC=./C
# RUST
RC = rustc
RFLAGS = -C opt-level=3
REXEC = ./R
# GENERAL
NUMW= $(shell ls waiting | wc -l) # Number of waiting problems 
NUMC = $(shell ls contest | wc -l) # Number of contests


## C++
c: # Compile, or just "make"
	@$(CC) $(CFLAGS) main.cpp -o $(EXEC)
	@echo "OK!"

# New Contest
cts:
	@mkdir contest/${NUMC}
	@tee contest/${NUMC}/n{1..10}.cpp <template.cpp > /dev/null

# New file
n:
	@cp template.cpp main.cpp

# Move to waiting, would be solved or just for fast new problem. 
na:
	@echo "File number ${NUMW}."
	@if [ -f main.cpp ]; then mv main.cpp waiting/$(NUMW).cpp; fi
	@cp template.cpp main.cpp
	@echo "New main.cpp file!"

# Solved problem, parameter: f="{problem name}"
k:
	@echo $(f) "Solved"
	@mv main.cpp Solved/C++/"$(f).cpp";
	@cp template.cpp main.cpp

# Execute
e:
	@./$(EXEC)

# Execute and output on a file
ef: 
	@if [ -f ap.txt]; then rm -rf ap.txt ; fi
	./$(EXEC) > ap.txt

# Clean Binaries
cleanC:
	rm -rf $(EXEC)

## RUST
# Compile
r:
	@$(RC) $(RFLAGS) -o $(REXEC) rust/src/main.rs
	@echo "OK!"

# Solved problem, parameter: f="{problem name}"
rk:
	@echo $(f) "Solved"
	@mv rust/src/main.rs Solved/Rust/"$(f).rs";
	@cp template.rs rust/src/main.rs

# Execute
re:
	@./$(REXEC);

# Clean Binaries
cleanR:
	rm -rf $(REXEC)