# 编译参数.
COMPILE_FLAGS = -std=c++2a -g -Wall -Wextra

all: Lazy

Lazy: Lazy.cc DBConfig.h DBConfig.cc
	g++ $(COMPILE_FLAGS) -o Lazy Lazy.cc DBConfig.cc

clean:
	rm -f Lazy
