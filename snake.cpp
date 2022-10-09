#include <unistd.h>
#include <ncurses.h>
#include <iostream>

using namespace std;

class snake {
    public:
        int head[2];
        int tail[2];
};

void e() {
    snake snake;
    snake.head[0] = 1;
    cout << snake.head[0];
};