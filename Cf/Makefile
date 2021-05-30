CC=g++
CFLAGS= -Wall -Wextra -Wshadow -D_GLIBCXX_ASSERTIONS -DDEBUG -ggdb3 -fmax-errors=2
EXEC=./teste
NUM= $(shell ls waiting | wc -l)
c:
	@$(CC) $(CFLAGS) main.cpp -o $(EXEC)
	@echo "OK!"
n:

	@echo "File number ${NUM}."
	@if [ -f main.cpp ]; then mv main.cpp waiting/$(NUM).cpp; fi
	@cp template.cpp main.cpp
	@echo "New main.cpp file!"

k:
	@echo $(f) "Solved"
	@mv main.cpp Solved/$(f);

e:
	@./$(EXEC)

ef: 
	@if [ -f ap.txt]; then rm -rf ap.txt ; fi
	./$(EXEC) > ap.txt

clean:
	rm -rf $(EXEC)
