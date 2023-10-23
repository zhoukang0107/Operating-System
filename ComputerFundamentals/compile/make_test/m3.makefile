# makefile 2.0   变量替换重复内容 
OBJS=main.o tool1.o tool2.o  # 变量替代后面内容
CC=gcc                       # 可以替换成其他编译器，比如g++，默认存在：CC=gcc，此处可以不进行赋值
CFLAGS+=-c -Wall -g          # 内置变量选项变量，将要添加的编写选项追加到变量后面
mytool:$(OBJS)               # OBJS=main.o tool1.o tool2.o
	 $(CC)  $^ -o $@     # %^:标识上一句依赖关系中被依赖的内容  $@:目标名，可以用$@替代上一句中的目标文件名

main.o:main.c 
	$(CC) $^ $(CFLAGS) -o $@

tool1.o:tool1.c
	$(CC) $^ $(CFLAGS) -o $@

tool2.o:tool2.c
	$(CC) $^ $(CFLAGS) -o $@

clean:
	$(RM) *.o mytool -r  # 系统内置变量RM：RM=rm -f
