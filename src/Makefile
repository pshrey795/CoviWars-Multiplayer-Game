OBJS = ./main/main.cpp ./main/game.cpp ./texture/Texture.cpp ./character/coviwars.cpp ./button/button.cpp ./playstate/play.cpp ./menu/menu.cpp ./maze/maze.cpp ./sound/sounds.cpp ./character/enemy.cpp ./scoreboard/scoreboard.cpp ./network/network.cpp ./menu/popup.cpp
CC = g++
COMPILER_FLAGS = -w -I/opt/homebrew/Cellar/sdl2/2.32.10/include/ -I/opt/homebrew/Cellar/sdl2/2.32.10/include/SDL2/ -I/opt/homebrew/Cellar/sdl2_image/2.8.8/include/ -I/opt/homebrew/Cellar/sdl2_net/2.2.0/include/ -I/opt/homebrew/Cellar/sdl2_mixer/2.8.1_1/include/ -I/opt/homebrew/Cellar/sdl2_ttf/2.24.0/include/
LINKER_FLAGS = -L/opt/homebrew/lib -lSDL2 -lSDL2_image -lSDL2_mixer -lSDL2_ttf -lSDL2_net
OBJ_NAME = game
all : $(OBJS)
	$(CC) $(OBJS) $(COMPILER_FLAGS) $(LINKER_FLAGS) -o $(OBJ_NAME)
	
clean: $(OBJ_NAME)
	rm $(OBJ_NAME)