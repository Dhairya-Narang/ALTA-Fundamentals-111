// Given an N x N maze of 0s (blocked) and 1s (open), find a path for a rat from the top-left to the bottom-right 
// cell using backtracking. This is the first real backtracking problem -- bridges into Subsets/N-Queens/Word 
// Search later.

#include <stdio.h>
#include <stdbool.h>

#define N 4

void printSolution(int sol[N][N]) {
    for (int i = 0; i < N; i++) {
        for (int j = 0; j < N; j++) {
            printf(" %d ", sol[i][j]);
        }
        printf("\n");
    }
}

bool isSafe(int maze[N][N], int x, int y, int sol[N][N]) {
    return (x >= 0 && x < N && y >= 0 && y < N && maze[x][y] == 1 && sol[x][y] == 0);
}

bool solveMazeUtil(int maze[N][N], int x, int y, int sol[N][N]) {
    if (x == N - 1 && y == N - 1 && maze[x][y] == 1) {
        sol[x][y] = 1;
        return true;
    }

    if (isSafe(maze, x, y, sol)) {
        sol[x][y] = 1;
        if (solveMazeUtil(maze, x + 1, y, sol)) return true; 
        if (solveMazeUtil(maze, x, y + 1, sol)) return true; 
        if (solveMazeUtil(maze, x - 1, y, sol)) return true; 
        if (solveMazeUtil(maze, x, y - 1, sol)) return true; 

        sol[x][y] = 0;
        return false;
    }

    return false;
}

bool solveMaze(int maze[N][N]) {
    int sol[N][N] = {0};
    if (!solveMazeUtil(maze, 0, 0, sol)) {
        printf("No solution exists.\n");
        return false;
    }

    printSolution(sol);
    return true;
}

int main() {
    int maze[N][N] = {
        { 1, 0, 0, 0 },
        { 1, 1, 0, 1 },
        { 0, 1, 0, 0 },
        { 1, 1, 1, 1 }
    };

    solveMaze(maze);
    return 0;
}
