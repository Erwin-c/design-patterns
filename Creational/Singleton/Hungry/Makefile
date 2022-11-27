# 编译参数.
COMPILE_FLAGS = -std=c++2a -g -Wall -Wextra

all: Hungry

Hungry: Hungry.cc DBConfig.h DBConfig.cc
	g++ $(COMPILE_FLAGS) -o Hungry Hungry.cc DBConfig.cc

clean:
	rm -f Hungry
