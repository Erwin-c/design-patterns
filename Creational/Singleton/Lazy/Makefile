# 编译参数.
COMPILE_FLAGS = -std=c++2a -g -Wall -Wextra

all: ThreadSec

ThreadSec: ThreadSec.cc DBConfig.h DBConfig.cc
	g++ $(COMPILE_FLAGS) -o ThreadSec ThreadSec.cc DBConfig.cc

clean:
	rm -f ThreadSec
