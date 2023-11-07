BUILD = build/
FLAGS = -Wall -g
NAME = run.out
CPP = $(wildcard ./*/*.cpp)
O = $(CPP:./%.cpp=$(BUILD)%.o)

$(NAME): $O main.o
	g++ $(FLAGS) $(O) $(BUILD)main.o -o $@

main.o: main.cpp
	mkdir -p $(BUILD)
	g++ $(FLAGS) -c $^ -o $(BUILD)$@

$O: $(BUILD)%.o: %.cpp %.hpp
	mkdir -p $(dir $@)
	g++ $(FLAGS) -c $(@:$(BUILD)%.o=%.cpp) -o $@

.PHONY: clean
clean:
	rm -r $(BUILD)
	rm $(NAME)
