CC = gcc -g -O0 -Wall
SRC = pilha.c app.c
OBJS = pilha.o app.o
APP=app

all : app
	@echo Projeto compilado!
%.o : %.c
	$(CC) -c -o  $@ $<
app : $(OBJS)
	$(CC) -o $(APP) $(OBJS)
clean:
	@rm -fv $(OBJS) $(APP)
