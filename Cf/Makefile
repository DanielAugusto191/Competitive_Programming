CC=g++
CFLAGS= -Wall -Wextra -Wshadow -D_GLIBCXX_ASSERTIONS -DDEBUG -ggdb3 -fmax-errors=2
EXEC=./teste
NUM= $(shell ls waiting | wc -l)
c:
	@$(CC) $(CFLAGS) $(f) -o $(EXEC)
	@echo "Compilado!"
n:

	@echo "Antigo Arquivo número ${NUM}."
	@if [ -f main.cpp ]; then mv main.cpp waiting/$(NUM).cpp; fi
	@cp template.cpp main.cpp
	@echo "Novo arquivo Gerado!"

e:
	@./$(EXEC)

ef: 
	@if [ -f ap.txt]; then rm -rf ap.txt ; fi
	./$(EXEC) > ap.txt

clean:
	rm -rf $(EXEC)
