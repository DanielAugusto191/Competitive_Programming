CC=g++
CFLAGS= -Wall -Wextra -Wshadow -D_GLIBCXX_ASSERTIONS -DDEBUG -ggdb3 -fmax-errors=2 -std=c++20
EXEC=./C
NUM= $(shell ls waiting | wc -l)

RC = rustc
RFLAGS = -C opt-level=3
REXEC = ./R

c:
	@$(CC) $(CFLAGS) main.cpp -o $(EXEC)
	@echo "OK!"

cts:
	@tee contest/n{1..10}.cpp <template.cpp > /dev/null
a:
	@$(CC) $(CFLAGS) contest/n$(a).cpp -o $(EXEC)
	@echo "OK!"
	@./$(EXEC)

Scts:
	@mv contest/$(f) Solved/"$(g).cpp";

n:
	@cp template.cpp main.cpp

na:
	@echo "File number ${NUM}."
	@if [ -f main.cpp ]; then mv main.cpp waiting/$(NUM).cpp; fi
	@cp template.cpp main.cpp
	@echo "New main.cpp file!"
b:
	@rm main.cpp
	@mv waiting/$(n).cpp main.cpp;
	@echo "File $(n) on main"

k:
	@echo $(f) "Solved"
	@mv main.cpp Solved/C++/"$(f).cpp";
	@cp template.cpp main.cpp

e:
	@./$(EXEC)

ef: 
	@if [ -f ap.txt]; then rm -rf ap.txt ; fi
	./$(EXEC) > ap.txt


r:
	@$(RC) $(RFLAGS) -o $(REXEC) rust/src/main.rs
	@echo "OK!"
rk:
	@echo $(f) "Solved"
	@mv rust/src/main.rs Solved/Rust/"$(f).rs";
	@cp template.rs rust/src/main.rs

re:
	@./$(REXEC);

cleanC:
	rm -rf $(EXEC)

cleanR:
	rm -rf $(REXEC)
