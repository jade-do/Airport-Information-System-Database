#
# C++ Makefile template
#
#
CC=g++
CFLAGS=

#CFLAGS=-std=c99 -pedantic 
#CFLAGS=-g3
#CFLAGS= -Wall

LDFLAGS=-lmysqlcppconn

# Source
SRC=connector.cpp \

# Objects
OBJS=$(patsubst %.cpp,%.o,${SRC}) 

# Executable
EXEC=mysqlconn

all: build
	@echo "Targets: build, clean"

build:
	make ${EXEC}

%.o: %.cpp
	${CC} ${CFLAGS} -c $<

${EXEC}: ${OBJS}
	${CC} ${LDFLAGS} ${OBJS} -o $@

clean:
	-rm ${EXEC} ${OBJS}
