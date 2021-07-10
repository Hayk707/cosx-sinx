export EXE := cosx-sinx
export C_FILES := $(wildcard *.cpp)
export O_FILES := $(patsubst %.cpp, %.o, $(C_FILES))

$(EXE) : $(O_FILES)
	g++ $^ -o ../cos-sin/$@
%.o : %.cpp
	g++ -c $^ -o $@
clean :
	rm *.o 

