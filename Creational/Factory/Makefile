# 编译参数.
COMPILE_FLAGS = -std=c++2a -g -Wall -Wextra

all: Factory

Factory: Factory.cc DBConfig.h DBConfig.cc
	g++ $(COMPILE_FLAGS) -o Factory Factory.cc DBConfig.cc

clean:
	rm -f Factory
