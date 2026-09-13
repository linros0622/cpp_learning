# 目标：生成 my_program
my_program: add.cpp main.cpp
	g++ add.cpp main.cpp -o my_program

# 清理：删除生成的文件
clean:
	rm -f my_program
